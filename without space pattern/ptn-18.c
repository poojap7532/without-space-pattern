#include<stdio.h>
//0
//0 1
//0 1 0
//0 1 0 1
//0 1 0 1 0
int main(){
	int r,c;
	
for(r=5; r>=1; r--){
	for(c=5; c>=r; c--){
	if(c%2==0){
				printf(" 1");
			}
	else{
				printf(" 0");
			}
	}
		 printf("\n");
}	
	
	
	return 0;
}




