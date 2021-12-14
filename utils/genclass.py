from sys import argv
from string import Template

HDR_TEMPLATE = './header.template'
SRC_TEMPLATE = './src.template'

includes = ['iostream']

try:
	HDR_TEMPLATE = open(HDR_TEMPLATE, 'r').read()
except:
	print("Failed at opening Source file template!")
	exit(1)

try:
	SRC_TEMPLATE = open(SRC_TEMPLATE, 'r').read()
except:
	print("Failed at opening Header file template!")
	exit(1)


def form_headerfile_name(name):
	return '__' + name.upper() + '_H__'


def header_guard(name):
	var = form_headerfile_name(name)
	return f"#ifndef {var}\n#define {var}\n"


def header_end(name):
	return f"#endif // {form_headerfile_name(name)}\n"


def generate_class(name):
	return ""


def generate_hpp_file(name, file):
	content = {
		'header_guard': header_guard(name),
		'includes': '\n'.join(f'#include <{inc}>' for inc in includes),
		'_class': generate_class(name),
		'end': header_end(name)
	}
	src = Template(HDR_TEMPLATE)
	file.write(src.substitute(content))


def generate_cpp_file(name, file):
	content = {
		'custom_stuff': "",
		'includes': f'#include "{name}.hpp"',
		'special_functions': "",
		'simple_functions': "",
		'static_functions': "",
		'const_functions': "",
		'inline_functions': "",
		'friend_functions': "",
		'operators': ""}
	src = Template(SRC_TEMPLATE)
	file.write(src.substitute(content))


def generate_files(args):
	args = set(args)
	for a in args:
		with open(f"{a}.hpp", 'w') as h:
			generate_hpp_file(a, h)
		with open(f"{a}.cpp", 'w') as c:
			generate_cpp_file(a, c)


if __name__ == '__main__':
	if len(argv) < 2:
		print("You must provide Class name(s) as argument(s)")
		exit(1)
	generate_files(argv[1:])
