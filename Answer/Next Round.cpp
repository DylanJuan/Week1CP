#include<stdio.h>

int main()
{
	int a,b,arr[105],i;
	scanf("%d %d",&a,&b);
	
	for(i=1;i<=a;i++){
		scanf("%d",&arr[i]);
	}
	int count=0,min=arr[b];
	for(i=1;i<=a;i++){
		if(arr[i]>=min && arr[i]!=0)count++;
	}
	printf("%d",count);
	
	
	return 0;
}
