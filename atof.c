#include <ctype.h>
#include <stdio.h>

#include "calc.h"

#define MAXLINE 100

char line[MAXLINE];

double otof(char s[]){

	double power, val ; 
	int sign, i;


	for(i = 0 ;isspace(s[i]); i++);//left whitespaces
	sign  = (s[i] ==  '-') ? -1 : 1;
	if(s[i] == '-' || s[i] == '+')
		i++;
	for(val = 0.0 ; isdigit(s[i]) ; i++)
		val = 10.0*val + (s[i] - '0');
	if(s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0*val + (s[i] - '0');
		power *=10.0;
	}
	if( s[i++] == 'e' || s[i] == 'E'){
		if(s[i] == '-'){
			
		}else if(s[i] == '+'){

		}

	}
	return val/power;
}

/*
int getline_(char s[] , int max){
	int i = 0;
	char c;

	for(i ;i< max-1 && (c = getchar()) != EOF && c != '\n' ; i++)
		s[i] = c;
	
	if(c == '\n')
		s[i++] = '\n';
	
	s[i] = '\0';
	return i;

}

int main(){
	
	double otof(char []);
	int getline_(char line[] , int max);
	
	double sum = 0.0;
	
	while (getline_(line , MAXLINE)){
		printf("\t %f \n" , sum += otof(line));
	}
	return 0;
}
*/
