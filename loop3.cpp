#include<stdio.h>
main()
{
	
	int p=1;
	int d;
	printf("enter the number \n");
	scanf("%d",&d);
	printf("total number present%d\n",d);
	while(p<=d){
	printf("number %d\n",p);		
	p++;
	}
	printf("...the end...");
}