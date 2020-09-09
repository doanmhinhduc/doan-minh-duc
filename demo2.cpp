#include <stdio.h>
int main(){
	int 
	a,b,c;
	printf("nhap a =");
	scanf("%d",&a);
	printf("nhap b =");
	scanf("%d",&b);
	printf("nhap c =");
	scanf("%d",&c);
	
	if(a>c){
		printf("max:%d",a);
	}else{
		printf("max:%d",c);
	}
	if(b>c){
	    printf("max:%d",b);
	}else{
		printf("max:%d",c);
	}	
}
