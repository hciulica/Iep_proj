#ifndef COMPUTER_HPP
#define COMPUTER_HPP

class Computer
{
  private:
    std::string the_model_name;
    std::string the_processor_name;
    int the_ram_mem_name;
    std::string the_storage_name;
    bool the_extern_graphic_card_name;
    int the_nr_w_power_supply_name;

public:
    //Constructor
    Computer(const std::string& the_model, const std::string& the_processor, 
            const int the_ram, const std::string& the_storage,
            const bool the_extern_graphic_card, const int the_nr_w_power_supply);
    //Destructor
    ~Computer() = default;
    //Copy constructor
    Computer( const Computer& comp_obj );
    //Copy assignment operator
    Computer& operator = ( const Computer& comp_obj );
};

#endif