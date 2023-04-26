#include<stdio.h>
//5
//4 4
//3 3 3
//2 2 2 2
//1 1 1 1 1
int main(){
	int r,c;
	
	for(r=5; r>=1; r--){
		for(c=5; c>=r; c--){
				printf("%d ",r);
		}
		 printf("\n");
	}
	
	return 0;
}




