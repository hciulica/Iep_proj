#include <iostream>
#include <storage.hpp>

    Storage::Storage(const std::string& the_producer, const std::string& the_type)
        :
        the_producer_name       (the_producer),
        the_type_name           (the_type)
    {}
    
    //Copy constructor
    Storage::Storage( const Storage& stor_obj )
    {
        the_producer_name = stor_obj.get_producer_name();
        the_type_name = stor_obj.get_the_type_name();
    }
    //Copy assignment operator
    Storage& Storage::operator=( const Storage& stor_obj )
    {
        if( this == &stor_obj ) //In case of it's same object like Obj a = a;
            return *this; //This is current object
        the_producer_name = stor_obj.get_producer_name();
        the_type_name = stor_obj.get_the_type_name();
        return *this;
    }

    //Get producer_name
    std::string Storage::get_producer_name() const
    {
        return the_producer_name;
    }

    //Get type_name
    std::string Storage::get_the_type_name() const
    {
        return the_type_name;
    }
