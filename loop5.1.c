#include<stdio.h>
main()
{
	int d;
	int p;
		printf("enter the first year \n");
	scanf("%d",&d);
	printf("first year is %d\n",d);
	
	
			printf("enter the last year \n");
	scanf("%d",&p);
	printf("last year is %d\n",p);
	
	
	while(d<=p){
		
		if((d%4==0 && d%100!=0)||(d%400==0)){
			
			printf("leap year is %d\n",d);
		}
		d++;
	}
}