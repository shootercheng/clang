#include <stdio.h>

const int length = 3;
int var[] = {1,2,3};

void increaseLoc(int *ptr);
void descLoc(int *ptr);

void main(){
	int *ptr;
	ptr = var;
	increaseLoc(ptr);
	descLoc(ptr);
}

void increaseLoc(int *ptr){
	printf("----------increase------\n");
	for(int i=0; i < length; i++){
		printf("存储地址: var[%d]=%p\n", i,ptr);
		printf("存储数值为: var[%d] = %d\n",i,*ptr);
		ptr++;
	}
}

void descLoc(int *ptr){
	printf("-----------desc----------\n");
	ptr = &var[length -1];
	for(int i=length; i > 0; i--){
		printf("存储地址: var[%d]=%p\n",i-1, ptr);
		printf("存储值: var[%d]=%d\n", i-1, *ptr);
		ptr--;
	}
}
