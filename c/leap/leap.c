#include "leap.h"

/**
 * 1. leap year if the year is evenly divisible by 4 and not evenly divisible by 100.
 * 2. leap year if the year is evenly divisible by 4, 100 and 400
 */

bool leap_year(int year)
{
  bool isLeapYear = false;
  bool isEvenlyDivisibleBy100 = false;

  if (year % 100 == 0)
  {
    isEvenlyDivisibleBy100 = true;
  }

  bool isEvenlyDivisibleBy4 = false;
  if (year % 4 == 0)
  {
    isEvenlyDivisibleBy4 = true;
  }

  if (isEvenlyDivisibleBy4 && !isEvenlyDivisibleBy100)
  {
    isLeapYear = true;
  }

  if (isEvenlyDivisibleBy100 && year % 400 == 0)
  {
    isLeapYear = true;
  }

  return isLeapYear;
}