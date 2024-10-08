#include<stdio.h>
int main(void){
	printf("\033c");
	printf("\n Division operation");
	printf("\n Two integers             (5   / 2)   : \t%d",5/2 );
	printf("\n One int & one float      (5.5 / 2)   : \t%g",5.5/2 );
	printf("\n Two Integers             (5   / 2)   : \t%g",(float)5/2 );
	printf("\n\n");
}

