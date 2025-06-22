#include <stdio.h>

int main() {
	int a,i,j=0;
	scanf("%d",&a);
	int arr[a];
	for( i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=a-1;i>=0;i--)
    {
     
        printf("%d ",arr[i]);

    }
	
	return 0;
}
