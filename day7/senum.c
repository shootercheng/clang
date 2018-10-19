#include <stdio.h>

enum DAY
{
	MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;

void main(){
	for(day = MON; day <= SUN; day++){
		printf("枚举类型：%d\n", day);
	}
}
