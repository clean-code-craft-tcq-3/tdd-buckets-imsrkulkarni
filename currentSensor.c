#include <stdio.h>
#include "main.h"
#include <math.h>



int ampConverter(float reading)
{
  float amps=0.0;
  amps=(reading > MAX_READING_LIMIT) ? -1 : (MAX_TEMP * reading / MAX_READING_LIMIT);
  return (round(amps));     
}

