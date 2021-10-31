#include <iostream>
#include <storage.hpp>

    Storage::Storage(const std::string& the_producer, const std::string& the_type)
        :
        the_producer_name       (the_producer),
        the_type_name           (the_type)
    {}
    
        std::string Storage::get_producer_name()
    {
        return the_producer_name;
    }
