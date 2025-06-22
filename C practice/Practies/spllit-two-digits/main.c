#include <stdio.h>

int main() {
    
int n,i,j,tensplace,onesplace;//variable declaration
scanf("%d",&n);//getting the value of n
int a[n];//intializing array to store multiple values
for(i=0;i<n;i++){//this fore loop is used for getting the index of the array
scanf("%d",&a[i]);//to store the array index
}
  
for(j=0;j<n;j++)//this for loop is to take the value of the current index
{
    
    tensplace=a[j]/10;//to get he value in the tens place
    onesplace=a[j]%10;// to get the value in the onesplace
    printf("\n%d %d ",tensplace,onesplace);//print them with the space b/w them
}


	return 0;
}
