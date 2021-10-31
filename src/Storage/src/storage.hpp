#ifndef STORAGE_HPP
#define STORAGE_HPP

class Storage
{
 public:
    std::string the_producer_name;
    std::string the_type_name;
public:
    //Constructor
    Storage(const std::string& the_producer, const std::string& the_type);
    //Destructor
    ~Storage() = default;
    //Copy constructor
    Storage( const Storage& stor_obj );
    //Copy assignment operator
    Storage& operator = ( const Storage& stor_obj );

    std::string get_producer_name();
};

#endif