#include <stdio.h>

extern int count;

void printextern(){
	printf("extern.c man global count %d\n", count);
	count = 10;
	printf("extern.c after change count=%d\n",count);
}
