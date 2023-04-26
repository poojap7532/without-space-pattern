#include<stdio.h>
//5
//5 4
//5 4 3
//5 4 3 2
//5 4 3 2 1
int main(){
	int r,c;
	
for(r=5; r>=1; r--){
	for(c=5; c>=r; c--){
		printf("%d",c);
	}
		 printf("\n");
}	
	
	
	return 0;
}

