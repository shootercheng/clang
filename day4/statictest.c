#include <stdio.h>

static int count = 10;
void staticTest();

void main(){
	printf("%s\n","Hello C");
	while(count > 0 ){
		staticTest();
		count --;
	}
}

void staticTest(){
	static int localvar = 3;
	localvar =  localvar + 1;
	printf("全局变量值 %d 局部变量值 %d\n", count, localvar);
}
