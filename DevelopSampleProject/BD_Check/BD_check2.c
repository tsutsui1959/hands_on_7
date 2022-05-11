#include <stdio.h>
#include <stdlib.h>
#include "BD_check.h"

void btoa(unsigned char dat, char *buff)
{
	unsigned char dec[3] = {100, 10, 1};
	unsigned char work[3];
	int	i;

	for(i=0; i < 3; i++)
	{
		work[i] = dat / dec[i];
		dat = dat % dec[i];
		buff[i] = work[i] | '0';
	}
	buff[i] = 0;
	
	return;
}

void bar(void) {

	int i, x;
	char c, *p;
	
    x = 8 / 2;

    for (i = 0; i < x; i++) {
		if (i == 1)
	    	p = malloc(x);
	    	if(!p){return;}
		else {
	    	c = p[i-1];
		}
    }
    
    free(p);
    
    return;
}
