#pragma once
#include <cstring>
#include<stdexcept>
namespace SiriusFM{
  enum class CcyE{
    USD = 0,
    EUR = 1,
    GBP = 2,
    CHR = 3,
    RUB = 4,
    N = 5
  };
  inline CcyE str2CcyE(char const * a_str){
    if(strcmp(a_str, "USD") == 0){
      return CcyE::USD;
    }
    else if(strcmp(a_str, "RUB") == 0){
      return CcyE::RUB;
    }
    else if(strcmp(a_str, "CHR") == 0){
      return CcyE::CHR;
    }
    else if(strcmp(a_str, "GBP") == 0){
      return CcyE::GBP;
    }
    else if(strcmp(a_str, "EUR") == 0){
      return CcyE::EUR;
    }
    else{
      throw std::invalid_argument("not ccy\n");
    }
  }
  inline char const * CcyE2str(CcyE a_ccy){
    switch(a_ccy){
      case CcyE::USD : return "USD";
      case CcyE::RUB: return "RUB";
      case CcyE::CHR : return "CHR";
      case CcyE::GBP: return "GBP";
      case CcyE::EUR: return "EUR";
      default:throw std::invalid_argument("not ccy\n");
    }
  }
  enum class IRModeE{
    Const = 0,
    FwdCurve = 1,
    Stock = 2
  };
  template <IRModeE IRM>
  class IRProvider;

}
