#include <stdio.h>

#define BUFSIZE 100 

char buf[BUFSIZE];
int bufPoint = 0;

int getch(void){
	return (bufPoint > 0)?buf[--bufPoint]:getchar();
}

void ungetch(int c){
	if (bufPoint > BUFSIZE){
		printf("%s\n", 'buf motherfucker');
	}else{
		buf[bufPoint++] = c;
	}
}

