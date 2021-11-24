#include <iostream>
#include "casergb.hpp"

    CaseRgb::CaseRgb():Case()    
    {
        std::cout<< "CaseRgb constructor"<<std::endl;
    }

    //Copy constructor
    CaseRgb::CaseRgb( const CaseRgb& case_rgb_obj )
    {
        modes_rgb = case_rgb_obj.get_modes_rgb();
        remote = case_rgb_obj.get_remote();
    }
    
    //Copy assignment operator
    CaseRgb& CaseRgb::operator=( const CaseRgb& case_rgb_obj )
    {
        if( this == &case_rgb_obj ) //In case of it's same object like Obj a = a;
            return *this; //This is current object
        Case::operator =(case_rgb_obj);
        modes_rgb = case_rgb_obj.get_modes_rgb();
        remote    = case_rgb_obj.get_remote();
        return *this;
    }
    
    std::string CaseRgb::get_modes_rgb() const
    {
        return this->modes_rgb;
    }

    bool CaseRgb::get_remote() const
    {
        return this->remote;
    }