#include<stdio.h>

main(){
	
	int i,j;
	char a='A';
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			printf("%c ",a++);
			
		}
		printf("\n");
		
	}
	
	
}
