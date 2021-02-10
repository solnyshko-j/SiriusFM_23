
namespace SiriusFM {
  

class Option
{
protected:
  int const m_Tdays;//Tdays>0
  bool m_isAmerican;
  Option(a_Tdays, a_isAmerican):
  m_Tdays(a_Tdays),
  m_isAmerican(a_isAmerican)
  {}

public:
  virtual double payoff(long a_L, double const* a_t, double const* a_S)const = 0;
  virtual ~Option();
  bool IsAmerican() const {return m_isAmerican;}
}
} / SiriusFM */
