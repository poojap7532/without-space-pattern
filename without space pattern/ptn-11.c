#include<stdio.h>
//5 4 3 2 1
//4 3 2 1
//3 2 1
//2 1
//1
int main(){
	int r,c;
	for(r=5; r>=1; r--){
		for(c=r; c>=1; c--){
				printf("%d ",c);
		}
			printf("\n");
	}
	
	
	return 0;
}
