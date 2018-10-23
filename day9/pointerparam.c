#include <stdio.h>
#include <time.h>

void getSecond(unsigned long *ptr);

void main(){
	unsigned long sec;
	getSecond(&sec);
	printf("now second is %ld\n", sec);
}

void getSecond(unsigned long *ptr){
	*ptr = time(NULL);
}
