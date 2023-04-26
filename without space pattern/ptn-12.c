#include<stdio.h>
//5 5 5 5 5
//4 4 4 4
//3 3 3
//2 2
//1
int main(){
	int r,c;
	for(r=5; r>=1; r--){
		for(c=1; c<=r; c++){
			printf("%d ",r);
		}
		printf("\n");
	}
	
	return 0;
}

