#include <stdio.h>

enum DAY {
	MON=1,TUE,WED,THU,FRI,SAT,SUN
};

void main(){
	printf("Hello C\n");
	enum DAY day = MON;
	int var = 11;
	printf("day 变量的地址: %p\n", &day);
	printf("var 变量的地址: %p\n", &var);
}
