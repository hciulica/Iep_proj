#ifndef CASE_HPP
#define CASE_HPP

class Case
{
  public:
    std::string producer_name = "Asus";

    //Constructor
    Case();
    //Destructor
    ~Case() = default;

    //Copy constructor
    Case( const Case& case_obj );
    
    //Copy assignment operator
    Case& operator=( const Case& case_obj );
    
    std::string get_producer_name() const;
};

#endif