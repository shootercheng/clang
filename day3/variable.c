#include <stdio.h>

int globalvar = 3;
int getglobalvar();
int getlocalvar();
int sumab(int a, int b);

void main(){	
	printf("全局变量 %d\n", globalvar);
	printf(" %d\n", getglobalvar());
	printf("%d\n", getlocalvar());
	printf("是否已改变全局变量 %d\n", globalvar);
	printf("两个数字之和 %d\n", sumab(5,6));
}

int getglobalvar(){
	return globalvar;
}

int getlocalvar(){
	globalvar = 4;
	return globalvar;
}

int sumab(int a, int b){
	int c = a + b;
	return c;
}
