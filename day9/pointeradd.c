#include <stdio.h>

void main(){
	int a = 1;
	int *ptr,*ptr1;
	ptr=&a;
	printf("ptr address is %p\n",ptr);
	ptr1 = ptr + 1;
	printf("after add ptr address is %p\n", ptr1);
}
