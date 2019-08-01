#include <stdio.h>

#include "calc.h"

#define MAXVAL 100 

int sp = 0;
double val[MAXVAL];

void push(double mem){
	if (sp > MAXVAL){
		printf("%s\n", "stack is over");

	}else{
		val[sp++] = mem;
	}
}

double pop(void){
	if (sp>0)
		return val[--sp];
	else {
		printf("%s\n", "stack is clear");
		return 0.0;
	}
}