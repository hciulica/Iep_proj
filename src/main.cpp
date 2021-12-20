#include <iostream>
#include <storage.hpp>
#include <computer.hpp>
#include <graphicc.hpp>
#include <case.hpp>
#include <casergb.hpp>
#include <motherboard.hpp>

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

Motherboard* createMotherInstance()
{
    return (new Motherboard);
}

int main(void)
{
    int a = 10, b, c = 2;
    int a1 = 10, b1, c1 = 2;
    
    Storage storage1("Seagate", "HDD");
    Storage storage2("ADATA", "HDD");
    Storage storage3("HyperX", "SSD");
    Storage storage4("Samsung", "SSD");

    //Graphicc graphic1("Asus", 6);
    //Graphicc graphic2("Nvidia", 12);
    Graphicc graphic1;
    Graphicc graphic2;
    Graphicc graphic3("Gigabyte", 3);

    (b = c) = a;
    b1 = c1 = a1;

    std::cout << "A=" << a << std::endl;
    std::cout << "B=" << b << std::endl;
    std::cout << "C=" << c << std::endl;

    std::cout << "A1=" << a1 << std::endl;
    std::cout << "B1=" << b1 << std::endl;
    std::cout << "C1=" << c1 << std::endl;

    //storage1 = storage2 = storage3;
    (storage1 = storage2) = storage3; 
    //storage1 = (storage2 = storage3);
    std::cout << std::endl;

    std::cout << "Producer name storage1: " << storage1.get_producer_name() << std::endl;
    std::cout << "Type name storage1: " << storage1.get_the_type_name() << std::endl;
     
    std::cout << "Producer name storage2: " << storage2.get_producer_name() << std::endl;
    std::cout << "Type name storage2: " << storage2.get_the_type_name() << std::endl;
    
    std::cout << "Producer name storage3: " << storage3.get_producer_name() << std::endl;
    std::cout << "Type name storage3: " << storage3.get_the_type_name() << std::endl;
    std::cout << std::endl;

    (graphic1 = graphic2) = graphic3;

    std::cout << "Type name graphic1: " << graphic1.get_producer_name_graphic() << std::endl;
    std::cout << "Graphic memory graphic1: " << graphic1.get_graphic_memory() << std::endl;

    std::cout << "Type name graphic2: " << graphic2.get_producer_name_graphic() << std::endl;
    std::cout << "Graphic memory graphic2: " << graphic2.get_graphic_memory() << std::endl;

    std::cout << "Type name graphic3: " << graphic3.get_producer_name_graphic() << std::endl;
    std::cout << "Graphic memory graphic3: " << graphic3.get_graphic_memory() << std::endl;
    std::cout << std::endl;

    std::cout<<std::endl;

    
    CaseRgb caser1;
    CaseRgb caser2;
    caser2.producer_name = "Logitech";
    caser1 = caser2;

    std::cout << "Producer name: " << caser1.producer_name << std::endl;
    
    Motherboard mother1;

    std::cout << std::endl;
    std::cout << "MotherBoard:" << std::endl;
    std::cout << "Mother board name:" << mother1.get_producer_name();
    std::cout << "Slots number:" << mother1.get_slots();
    std::cout << std::endl;

    std::cout << "----AutoPtr----" << std::endl;
    std::auto_ptr<Motherboard> mother2(createMotherInstance());

    std::cout<<std::endl;
    std::cout << "Producer name mother2:" << mother2->get_producer_name() <<std::endl; 
    std::cout << "Slots number mother2:" << mother2->get_slots() << std::endl; 
    std::auto_ptr<Motherboard> mother3(mother2);
    std::cout << "Producer name mother3:" << mother3->get_producer_name() << std::endl; 
    std::cout << "Slots number mother3:" << mother3->get_slots() <<std::endl; 
    std::cout << "Producer name mother2:" << mother2->get_producer_name() <<std::endl; 
    std::cout << "Slots number mother2:" << mother2->get_slots() << std::endl;
    return 0;
}