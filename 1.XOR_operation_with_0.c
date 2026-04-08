/*
	EXP:1
	T.R.Sai Kumari
	23K61A05H7
	24/12/25
*/
#include<stdio.h>
#include<string.h>
void main() {
	char str[] = "Hello World";
	int length, i;
	char ch;
	length = strlen(str);
	for(i = 0; i < length; i++) {
		ch = str[i] ^ 0;
		printf("%c", ch);
	}
}
