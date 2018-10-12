#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *fp,*fp1;
	fp = fopen("2.txt","w");	//打开文件2.txt,如果不存则创建文件
	fp1 = fopen("3.txt","r");
	int a = 0;
	printf("%s %d\n","输出数字:",a);
	printf("==========写入文件=========\n");
	fprintf(fp, "%s %s %s","Hello", "C", "Language");
	printf("==========关闭文件=========\n");
	fclose(fp);
}
