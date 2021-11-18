#ifndef GRAPHIC_HPP
#define GRAPHIC_HPP

class Graphicc
{
  private:
    std::string producer_graphic_name;
    int graphic_memory;  
public:
    Graphicc() = default;
    //Constructor
    Graphicc(const std::string& the_producer_graphic_name, const int the_graphic_memory);
    //Destructor
    ~Graphicc() = default;

    //Copy constructor
    Graphicc( const Graphicc& graphic_obj );
    
    //Copy assignment operator
    Graphicc operator=( const Graphicc& graphic_obj );
    
    std::string get_producer_name_graphic() const;
    int get_graphic_memory() const;
};

#endif