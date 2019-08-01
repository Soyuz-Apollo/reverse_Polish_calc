#include <stdio.h>
#include <stdlib.h>

#include "calc.h"
#define MAXOP 100 


int main(){
	int type;
	double op2;
	char s[MAXOP];
	while((type = getop(s)) != EOF ){
		switch (type) {
		case NUMBER:
			push(otof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;	
		case '/':
			op2 = pop();
			if(op2 != 0.0)
				push(pop() / op2);
			else 
				printf("%s\n", 'zero debil');
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("%s\n", "ya voobshe v ahue" );
			break;
		}
	}
	return 0;
}