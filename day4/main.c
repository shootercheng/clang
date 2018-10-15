#include <stdio.h>

int count;
extern void printextern();

void main(){
	count = 5;
	printextern();
	printf("mian.c --- after change count=%d\n",count);
}
