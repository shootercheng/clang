#include <stdio.h>

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
}
