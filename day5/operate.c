#include <stdio.h>

void main(){
	int a = 6;
	int b = a++;	// 1.b = a 2.a = a+1	
	printf("先赋值后运算 %d\n",b);
	printf("运算a++后a的值 %d\n",a);
	a = 6;
	int c = ++a; //1. a=a+1 2.c=a
	printf("先运算后赋值 %d\n",c);
	printf("运算a++后a的值 %d\n",a);

	//逻辑运算符
	_Bool flag = 0;
	int bl1 = 0;
	int bl2 = 1;
	if(bl1 && bl2){
		printf("逻辑与结果为true\n");
	}else{
		printf("逻辑与结果为false\n");
	}
	if(bl1 || bl2){
		printf("逻辑或结果为true\n");
	}else{
		printf("逻辑或结果为false\n");
	}
	if(!flag){
		printf("逻辑非结果为true\n");
	}
	/*
	 *
	 * operate.c:14:15: error: ‘false’ undeclared (first use in this function); did you mean ‘fclose’?
		  _Bool flag = false;
               ^~~~~
               fclose
	 */
}
