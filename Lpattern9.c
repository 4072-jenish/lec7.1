#include<stdio.h>

main(){
	
	int i,j,num=1;
	char a='A';
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
		  if(i%2==0){
		  	if(j%2==0){
		  		printf("%c",a++);
			  }else{
			  	printf("%d",num++);
			  }
		  	
		  }else{
		  	if(j%2!=0){
		  		printf("%c",a++);
			  }else{
			  	printf("%d",num++);
			  }
		  }
		}
		
	printf("\n");	
	}
	
	
}
