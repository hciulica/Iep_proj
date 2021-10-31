#include <iostream>
#include "computer.hpp"

    Computer::Computer(const std::string& the_model, const std::string& the_processor,
                    int the_ram, const std::string& the_storage, bool the_extern_graphic_card,
                    int the_nr_w_power_supply)
        :
        the_model_name          (the_model),
        the_processor_name      (the_processor),
        the_ram_mem_name        (the_ram),
        the_storage_name        (the_storage),
        the_extern_graphic_card_name (the_extern_graphic_card),
        the_nr_w_power_supply_name   (the_nr_w_power_supply)
    {
        
    }
