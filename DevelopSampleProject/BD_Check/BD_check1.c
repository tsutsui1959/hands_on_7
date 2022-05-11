#include <stdio.h>
#include <stdlib.h>
#include "BD_check.h"

int printTime(char hour, char min)
{
	char strHour[3];
	char strMin[3];

	btoa(hour, strHour);
	btoa(min, strMin);
	
	printf("%s:%s\n", &strHour[1], &strMin[1]);

	return 0;
}

int main(void)
{
	printTime(12, 59);
	return 0;
}
