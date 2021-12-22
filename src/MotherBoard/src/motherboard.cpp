#include <iostream>
#include "motherboard.hpp"

    Motherboard::Motherboard(const std::string& the_producer_name, const int the_slots)

        :
        producer_name        (the_producer_name),
        slots               (the_slots)
     
    {}

    //Copy constructor
    Motherboard::Motherboard( const Motherboard& mother_obj )
    {
        producer_name = mother_obj.get_producer_name();
        slots = mother_obj.get_slots();
    }
    
    Motherboard::~Motherboard(){
        std::cout<<"Destructor!"<<std::endl;
    }
    //Copy assignment operator
    Motherboard Motherboard::operator=( const Motherboard& mother_obj )
    {
        if( this == &mother_obj ) //In case of it's same object like Obj a = a;
            return *this; //This is current object
        producer_name = mother_obj.get_producer_name();
        slots = mother_obj.get_slots();
        return *this;
    }
    
    std::string Motherboard::get_producer_name() const
    {
        return this->producer_name;
    }
    int Motherboard::get_slots() const
    {
        return this->slots;
    }

    void Motherboard::set_producer_name( const std::string& new_producer_name )
    {
        this->producer_name = new_producer_name;
    }

