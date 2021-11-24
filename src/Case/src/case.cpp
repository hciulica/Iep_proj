#include <iostream>
#include "case.hpp"

    Case::Case()
    {
        std::cout<<"Constructor Case"<<std::endl;
    }

    //Copy constructor
    Case::Case( const Case& case_obj )
    {
        producer_name = case_obj.get_producer_name();
    }
    
    //Copy assignment operator
    Case& Case::operator=( const Case& case_obj )
    {
        if( this == &case_obj ) //In case of it's same object like Obj a = a;
            return *this; //This is current object
        std::cout<<"Assignment operator Case"<<std::endl;
        producer_name = case_obj.get_producer_name();
        return *this;
    }
    
    std::string Case::get_producer_name() const
    {
        return this->producer_name;
    }