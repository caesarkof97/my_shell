/*************************************************************************
	> File Name: hello.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2016年12月20日 星期二 15时55分12秒
 ************************************************************************/

#include "hello.h"
extern int valueB, valueA;
extern char __executable_start[];
extern char etext[], _etext[], __etext[];
extern char edata[], _edata[];
extern char end[], _end[];
int main(){
	valueB = 200;
	printf("Hello World!\n%d\n", add(valueA, valueB));
	printf("Executable Start %x\n", __executable_start);
	printf("Text End %x %x %x\n", etext, _etext, __etext);
	printf("Data End %x %x \n", edata, _edata);
	printf("Executable End %x %x\n", end, _end);
	int c = valueA - valueB;
	printf("%d\n", c);
	return 0;
}
