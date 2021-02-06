#pragma once
#include<stdexcept>
#include<cmath>
namespace SiriusFM{
class DiffusionCIR{
private:
  double const m_sigma;
  double const m_kappa;
  double const m_theta;

public:
  DiffusionCIR(double a_kappa,double a_theta, double a_sigma):m_kappa(a_kappa),m_theta(a_theta),m_sigma(a_sigma){
    if(m_sigma <= 0) throw std::invalid_argument("invalid sigma");
    if(m_kappa <= 0) throw std::invalid_argument("invalid kappa");
  }
  double mu(double a_s, double a_t){
    return m_kappa*(m_theta-a_s);
  }
  double sigma(double a_s, double a_t){
    return (a_s < 0 ? 0 : m_sigma*sqrt(a_s));
  }
};
}
