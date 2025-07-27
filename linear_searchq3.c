//modify linear search to print all the indices of the target element
#include <stdio.h>
int main(){
int i,j,n,c,tar;
printf("Enter the size of the array: ");
scanf("%d",&n);
int ar[n];
printf("Enter the array: ");
for(i=0;i<n;i++){
	scanf("%d",&ar[i]);
}
printf("Enter the target: ");
scanf("%d",&tar);
for(i=0;i<n;i++){
	if(ar[i]==tar){
		printf("\nTarget at %d",i);
		}
	}
return 0;
}
