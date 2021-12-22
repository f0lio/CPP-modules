
#include <iostream>
#include <iomanip>

bool isnumber(std::string & str)
{
    return str.find_first_not_of("-.f0123456789") == std::string::npos; //???
}

bool isvalid(std::string & str)
{
    return (
        isnumber(str)
        || str == "inf"
        || str == "inff"
        || str == "+inff"
        || str == "nanf"
        || str == "-inf"
        || str == "+inf"
        || str == "nan"
    );
}


int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cerr << "You must provide an argument\n";
        return 1;
    }
    try
    {
        std::string arg(argv[1]);
        
        if (isvalid(arg) == false)
            throw std::invalid_argument("arguments must be a number");
    
        int var = static_cast<int> (std::atoi(arg.c_str()));
        double d = static_cast<float> (std::atof(arg.c_str()));

        if (std::isalpha(var))
            std::cout << "char   : " << static_cast<char>(var) << std::endl;
        else
            std::cout <<"Non displayable\n";

        std::cout << "int    : " << var << std::endl;
       
        std::cout << "float  : " << std::fixed << std::setprecision(1)<< d << "f" << std::endl;
        std::cout << "double : " << d << std::endl;
        
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

