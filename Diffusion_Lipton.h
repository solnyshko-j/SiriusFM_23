#pragma once
namespace SiriusFM{
class DiffusionLipton{
private:
  double const m_mu;
  double const m_sigma_0;
  double const m_sigma_1;
  double const m_sigma_2;


public:
  DiffusionLipton(double a_mu, double a_sigma_0, double a_sigma_1, double a_sigma_2):
  m_mu(a_mu),
  m_sigma_0(a_sigma_0),
  m_sigma_1(a_sigma_1),
  m_sigma_2(a_sigma_2){
    if(m_sigma_0 <= 0 ||
      m_sigma_1*m_sigma_1 - 4*m_sigma_0*m_sigma_2 < 0)
    {
      throw std::invalid_argument("invalid sigma");
    }
  }
  double mu(double a_s, double a_t){
    return m_mu*a_s;
  }
  double sigma(double a_s, double a_t){
    return (a_s < 0 ? 0 : m_sigma_0 + m_sigma_1*a_s + m_sigma_2*a_s*a_s);
  }
};
}
