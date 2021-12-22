
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    srand(time(NULL));

    int x = rand() % 3;

    if (x == 0)
        return new A;
    else if (x == 1)
        return new B;
    else
        return new C;
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p) != nullptr)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p) != nullptr)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p) != nullptr)
        std::cout << "C" << std::endl;
    else
        std::cout << "Error" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &ref = dynamic_cast<A &>(p);

        std::cout << "A" << std::endl;
        ref.~A();

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        B &ref = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        ref.~B();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        C &ref = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        ref.~C();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    Base *b = generate(), &ref = *b;

    std::cout << "Pointer : "  << std::endl;
    identify(b);

    std::cout << "Reference: " << std::endl;
    identify(ref);

    return 0;
}
