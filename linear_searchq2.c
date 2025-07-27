//write a program to count how many times a given number appears in the array using linear search
#include<stdio.h>
int occurance(int ar[],int n,int target){
	int c,i;
	for(i=0;i<n;i++){
		if(ar[i]==target){
			c++;
		}
	}
	return c;
}
int main(){
	int i,a,tar;
	printf("Enter the size of the array: ");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the array: ");
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
		}
	printf("Enter the target: ");
	scanf("%d",&tar);
	int ls=occurance(arr,a,tar);
	printf("%d occured %d times",tar,ls);
	return 0;
}
