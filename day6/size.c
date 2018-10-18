#include <stdio.h>

void main(){
	printf("int 型大小为%ld\n", sizeof(int));
	int a = 1;
	int *ptr = &a;
	printf("a的地址为 %p\n", &a);
}
