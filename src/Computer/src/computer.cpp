#include <iostream>
#include "computer.hpp"

    Computer::Computer(const std::string& the_model, const std::string& the_processor,
                    int the_ram, const std::string& the_storage, bool the_extern_graphic_card,
                    int the_nr_w_power_supply)
        :
        the_model_name               (the_model),
        the_processor_name           (the_processor),
        the_ram_mem_name             (the_ram),
        the_storage_name             (the_storage),
        the_extern_graphic_card_name (the_extern_graphic_card),
        the_nr_w_power_supply_name   (the_nr_w_power_supply)
    {
        
    }
        //Copy constructor
    Computer::Computer( const Computer& comp_obj ) 
    {
        
        the_model_name = comp_obj.get_model_name();
        the_processor_name = comp_obj.get_the_processor_name();
        the_ram_mem_name = comp_obj.get_ram_mem_name();
        the_storage_name = comp_obj.get_the_storage_name();
        the_extern_graphic_card_name = comp_obj.get_the_extern_graphic_card_name();
        the_nr_w_power_supply_name = comp_obj.get_the_nr_w_power_supply_name();
    }

        //Copy assignment operator
    Computer& Computer::operator=( const Computer& comp_obj )
    {
        if( this == &comp_obj )
            return *this;
        the_model_name = comp_obj.get_model_name();
        the_processor_name = comp_obj.get_the_processor_name();
        the_ram_mem_name = comp_obj.get_ram_mem_name();
        the_storage_name = comp_obj.get_the_storage_name();
        the_extern_graphic_card_name = comp_obj.get_the_extern_graphic_card_name();
        the_nr_w_power_supply_name = comp_obj.get_the_nr_w_power_supply_name();

        return *this;
    } 

    //Getter model name
    std::string Computer::get_model_name() const
    {
        return the_model_name;
    }

    //Getter extern graphic card name
    bool Computer::get_the_extern_graphic_card_name() const
    {
        return the_extern_graphic_card_name;
    }

    //Getter number w power supply
    int Computer::get_the_nr_w_power_supply_name() const
    {
        return the_nr_w_power_supply_name;
    }

    //Getter processor name
    std::string Computer::get_the_processor_name() const
    {
        return the_processor_name;
    }

    //Getter storage name
    std::string Computer::get_the_storage_name() const
    {
        return the_storage_name;
    }

     //Getter ram_nem_name
    int Computer::get_ram_mem_name() const
    {
        return the_ram_mem_name;
    }