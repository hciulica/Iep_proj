#ifndef MOTHERBOARD_HPP
#define MOTHERBOARD_HPP

class Motherboard
{
  private:
    std::string producer_name="Asus";
    int slots = 3;  
public:
    Motherboard() = default;
    //Constructor
    Motherboard(const std::string& the_producer_name, const int the_slots);
    //Destructor
    ~Motherboard();

    //Copy constructor
    Motherboard( const Motherboard& mother_obj );
    
    //Copy assignment operator
    Motherboard operator=( const Motherboard& mother_obj );
    
    //Getter for producer name
    std::string get_producer_name() const;
    
    //Getter for slots
    int get_slots() const;

    //Setter for producer_name
    void set_producer_name(const std::string& new_producer_name);
};

#endif