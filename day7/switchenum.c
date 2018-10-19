#include <stdio.h>
#include <stdlib.h>

void main(){
	enum color {red = 1, green, blue};

	enum color favc;

	printf("input color what you like :(1.red, 2.green, 3.blue):");
	scanf("%d", &favc);

	switch(favc)
	{
		case red:
			printf("like red\n");
			break;		
		case green:
			printf("like green\n");
			break;
		case blue:
			printf("like blue\n");
			break;
		default:
			printf("not input\n");
	}

}
