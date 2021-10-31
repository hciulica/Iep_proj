#include <iostream>
#include <storage.hpp>
#include <computer.hpp>

    
Storage& tso()
{
    static Storage so("Hyperx", "SSD");
    return so;
}

Computer& tcp()
{
    std::string storage_aux = tso().get_producer_name();
    std::cout << std::endl;
    std::cout << storage_aux;
    static Computer cp("Asus", "I7", 16, storage_aux, true, 500);
    return cp;
}

int main(void)
{
    tcp();
    //Computer::computer1 = new Computer();
    std::cout << "It works!";
    
    return 0;
}