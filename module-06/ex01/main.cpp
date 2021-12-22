
#include <iostream>

struct Data {
    int val;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t> (ptr);
}


Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*> (raw);
}

int main()
{
    Data d;

    d.val = 20;

    uintptr_t x = serialize(&d);
    
    std::cout << x << std::endl;

    Data * ds = deserialize(x);
    
    std::cout << ds->val << std::endl;
    
    return 0;
}
