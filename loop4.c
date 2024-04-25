#include<stdio.h>
main()
{
	int p;
	printf("enter the number \n");
	scanf("%d",&p);
	printf("total number %d\n",p);
	
	while(p>=1){
		if(p%2!=0){
			printf("odd number %d\n",p);
		}
		
				p--;
	}
	
	
}