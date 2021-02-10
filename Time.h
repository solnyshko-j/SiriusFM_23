#pragma once
inline double YearFrac(time_t a_t0){
  constexpr double SecY = 365.25*86400;
  return 1970.0+double(a_t0)/SecY;
}
inline double YearFracInterval(time_t a_t0){
  constexpr double SecY = 365.25*86400;
  return double(a_t0)/SecY;
}
