#include <stdio.h>
#include "main.h"
#include <math.h>
bool checkInRange(int val,int startRange ,int endRange)
{
  if((val >= startRange) && (val <= endRange))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int getNoOfRValuesInRange(int* array_p,int startRange ,int endRange)
{
  int arrayLength =0;
  int valueInRange =0;
  arrayLength = sizeof(array_p);
  for(int i=0; i< arrayLength ;i++)
  {
       if(true == checkInRange(array_p[i],startRange,endRange))
       {
         valueInRange ++;
       }
       else
       {
         
       }
  }
  printf("\n%d-%d,%d",startRange,endRange,valueInRange);
  return valueInRange;
}
int ampConverter(int reading)
{
  int amps=0;
  amps=if(reading > MAX_TEMP) ? -1 : MAX_TEMP * reading / MAX_READING_LIMIT;
  return round(amps);     
}
