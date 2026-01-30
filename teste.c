#include <stdio.h>
#include "naruto.h"

short int sum(short int a, short int b);


int main(void){
	short int a = 10, b = 20;
	
	printf("%d", sum(a, b));
	
	return 0;
	
}