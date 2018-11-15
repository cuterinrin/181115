#include <stdio.h>
#include <stdlib.h>

	int sum(int a, int b)
	{return a+b;
	}
	int sub(int a, int b)
	{
	return a-b;
	}
	int mul(int a, int b){
	return a*b;
	}
	int div1(int a, int b)
	{	return a/b;
	}
	
int main(int argc, char *argv[]) {
	
	
	int(*calft)(int, int);
	int a,b;
	char op;
	

	printf("input calculation : ");
	scanf("%d %c %d", &a, &op, &b);
	
	switch(op)
	{
		case '+':
			calft=sum;
			break;
		
		case '-':
			calft=sub;
			break;
			
		case '*':
			calft=mul;
			break;
		
		case '/':
			calft=div1;
			break;
	}
	
	printf("°á°ú°ª %i", calft(a,b));
	
	return 0;
}
