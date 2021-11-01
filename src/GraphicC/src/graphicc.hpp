#ifndef GRAPHIC_HPP
#define GRAPHIC_HPP

class Graphicc
{
  private:
    std::string producer_graphic_name;
    std::string graphic_memory;
    
public:
    //Constructor
    Graphicc(const std::string& the_producer_graphic_name, const std::string& the_graphic_memory);
    //Destructor
    ~Graphicc() = default;

private:

    //Copy constructor
    Graphicc( const Graphicc& graphic_obj );
    
    //Copy assignment operator
    Graphicc& operator=( const Graphicc& graphic_obj );

};

#endif