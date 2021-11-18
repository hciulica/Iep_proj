#include <iostream>
#include "graphicc.hpp"

    Graphicc::Graphicc(const std::string& the_producer_graphic_name, const int the_graphic_memory)
        :
        producer_graphic_name        (the_producer_graphic_name),
        graphic_memory               (the_graphic_memory)
     
    {}

    //Copy constructor
    Graphicc::Graphicc( const Graphicc& graphic_obj )
    {
        producer_graphic_name = graphic_obj.get_producer_name_graphic();
        graphic_memory = graphic_obj.get_graphic_memory();
    }
    
    //Copy assignment operator
    Graphicc Graphicc::operator=( const Graphicc& graphic_obj )
    {
        if( this == &graphic_obj ) //In case of it's same object like Obj a = a;
            return *this; //This is current object
        producer_graphic_name = graphic_obj.get_producer_name_graphic();
        graphic_memory = graphic_obj.get_graphic_memory();
        return *this;
    }
    
    std::string Graphicc::get_producer_name_graphic() const
    {
        return this->producer_graphic_name;
    }
    int Graphicc::get_graphic_memory() const
    {
        return this->graphic_memory;
    }