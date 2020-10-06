#include <stdio.h>
int main(){
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	
	int c;
	printf("nhap c=");
	scanf("%d",&c);
	
	if(a<b){
		if(a<c);
		printf("%d la min",a);
	}else{
		if(c<a){
			printf("%d la min",c);
	}else{
		if(b<c){
			printf("%d la min",b);
	}else{
		if(c<b){
			printf("%d la min",c);
}
	}
	}
		
	}
	
    return 0;
}

