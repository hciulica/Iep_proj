#ifndef STORAGE_HPP
#define STORAGE_HPP

class Storage
{
 private:
    std::string the_producer_name;
    std::string the_type_name;
    bool isLocked = false;

public:
    //Constructor
    Storage(const std::string& the_producer, const std::string& the_type);
    //Destructor
    ~Storage() = default;
    //Copy constructor
    Storage( const Storage& stor_obj );
    //Copy assignment operator
    Storage& operator = ( const Storage& stor_obj );
    //Getter for producer_name
    std::string get_producer_name() const;
    std::string get_the_type_name() const;
    void askStorage();
    
    void setisLocked(bool isLocked);
};

#endif