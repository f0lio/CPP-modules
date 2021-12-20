
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :Form("Sh", 145, 137),  target(target)
{
    PRINT("ShrubberyCreationForm Default Constructor()");
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    PRINT("ShrubberyCreationForm Destructor()");
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
    PRINT("ShrubberyCreationForm Copy Constructor()");
    name = src.name;
    s_grade = src.s_grade;
    e_grade = src.e_grade;
    status = src.status;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    PRINT("ShrubberyCreationForm Assignment Operator");
    if (this != &rhs)
    {
        s_grade = rhs.s_grade;
        e_grade = rhs.e_grade;
        status = rhs.status;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{   
    PRINT("ShrubberyCreationForm Executor() called");

    if (this->status == false)
        throw NotSigned(); 

    std::ofstream file(executor.getName() + "_shrubbery");

    file << " \n";
    file << "                     / / /\n";
    file << "                   /        /  /     //    /\n";
    file << "                /                 /         /  /\n";
    file << "                                /\n";
    file << "                               /                //\n";
    file << "               /          /            /              /\n";
    file << "               /            '/,        /               /\n";
    file << "               /              'b      *\n";
    file << "                /              '$    //                //\n";
    file << "               /    /           $:   /:               /\n";
    file << "             //      /  //      */  @):        /   / /\n";
    file << "                          /     :@,@):   ,/**:'   /\n";
    file << "              /      /,         :@@*: //**'      /   /\n";
    file << "                       '/o/    /:(@'/@*'  /\n";
    file << "               /  /       bq,//:,@@*'   ,*      /  /\n";
    file << "                          ,p$q8,:@)'  /p*'      /\n";
    file << "                   /     '  / '@@Pp@@*'    /  /\n";
    file << "                    /  / //    Y7'.'     /  /\n";
    file << "                              :@):.\n";
    file << "                             .:@:'.\n";
    file << "                           .::(@:.\n";

    file.close();
}