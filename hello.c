/*************************************************************************
	> File Name: hello.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2016年12月20日 星期二 15时55分12秒
 ************************************************************************/

#include<stdio.h>
extern int valueB, valueA;
int add(int, int);
int main(){
	valueB = 200;
	printf("Hello World!\n%d\n", add(valueA, valueB));
	return 0;
}
