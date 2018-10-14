#include <stdio.h>

#define LENGTH 10
#define WIDTH 20
const double PRICE = 11.8;

void main(){
	printf("hello \n");
	/*
	PRICE = 12.8;	//constvar.c:9:8: error: assignment of read-only variable ‘PRICE’
	*/
	//LENGTH = 11;	//constvar.c:12:9: error: lvalue required as left operand of assignment
	printf("长度 %d\n",LENGTH);
}
