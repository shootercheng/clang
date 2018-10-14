#include <stdio.h>
#include <float.h>

void printFloat(){
	printf("float  存储字节 %ld\n",sizeof(float));
	printf("double 存储字节 %ld\n",sizeof(double));	
	printf("float  最小值  %f\n", FLT_MIN );	
	printf("float  最大值  %f\n", FLT_MAX );
	printf("精度值 %d\n", FLT_DIG );
}


void main(){
	printf("char 存储字节 %ld\n", sizeof(char));
	printf("unsigned char 存储字节 %ld\n",sizeof(unsigned char));
	printf("signed char 存储字节 %ld\n",sizeof(signed char));	
	printf("short  存储字节 %ld\n",sizeof(short));
	printf("unsigned short  存储字节 %ld\n",sizeof(unsigned short));
	printf("long  存储字节 %ld\n",sizeof(long));
	printf("unsigned long 存储字节 %ld\n",sizeof(long));
	printf("int 存储字节 %ld\n",sizeof(int));	
	printf("unsigned int 存储字节 %ld\n",sizeof(unsigned int));
	printFloat();
}


