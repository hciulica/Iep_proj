#ifndef CASE_RGB_HPP
#define CASE_RGB_HPP
#include "case.hpp"

class CaseRgb: public Case
{
  private:
    std::string modes_rgb = "Fast";
    bool remote = true;
  public:
    //Constructor
    //CaseRgb(const std::string& the_modes_rgb, const bool the_remote):;
    CaseRgb();    
    //Destructor
    ~CaseRgb() = default;

    //Copy constructor
    CaseRgb( const CaseRgb& case_rgb_obj );
    
    //Copy assignment operator
    CaseRgb& operator=( const CaseRgb& case_rgb_obj );
    
    std::string get_modes_rgb() const;

    bool get_remote() const;
};

#endif