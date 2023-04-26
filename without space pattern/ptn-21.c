#include<stdio.h>
//A
//A B
//A B C
//A B C D
//A B C D E

int main(){
	char r,c;
	for(r='A'; r<='E'; r++){
		for(c='A'; c<=r; c++){
				printf("%c ",c);
		}
		 printf("\n");
	}
	return 0;
}
