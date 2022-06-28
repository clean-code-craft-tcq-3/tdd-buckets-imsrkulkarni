#include <stdio.h>
#define MAX_TEMP 10;
#define MAX_READING_LIMIT 4094;
int getNoOfRValuesInRange(int* array_p,int startRange ,int endRange);
bool checkInRange(int val,int startRange ,int endRange);
int  ampConverter(int reading);
