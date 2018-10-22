#include <stdio.h>

void main(){
	
	int a = 20;
	int b = 10;
	int *p1,*p2;
	p1 = &a;
	p2 = &b;
	printf("address a, b is %p, %p\n",&a, &b);
	printf("address p1, p2 is %p, %p\n",p1, p2);
	//change address
	p2 = p1;
	a = 30;	
	printf("address p1, p2 is %p, %p\n",p1, p2);
	printf("a.size=%ld *p1.size=%ld *p2.size=%ld\n", sizeof(a),sizeof(*p1),sizeof(*p2));
	printf("address a, *p1, *p2 is %d, %d, %d\n",a, *p1, *p2);
	printf("Null pointer\n");
	int *ptr = NULL;
	printf("NULL's address is %p\n", ptr);
	if(ptr == 0x0){
		printf("pointer ptr is NULL\n");
	}else{
		printf("not null");
	}
}


