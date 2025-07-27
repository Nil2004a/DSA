//write a function that takes an array and a target value, and returns 0 if found else returns -1
#include<stdio.h>
int linearSearch(int ar[], int n, int target){
	int i;
	for(i=0;i<n;i++){
		if(ar[i]==target){
		return 0;
		}
	}
		return -1;
}
int main(){
int a,tar,ls,i;
printf("Enter the size of the array: ");
scanf("%d",&a);
int arr[a];
printf("Enter the array");
for(i=0;i<a;i++){
	scanf("%d",&arr[i]);
}
printf("Enter the target element: ");
scanf("%d",&tar);
ls=linearSearch(arr,a,tar);
if(ls==0){
	printf("Search success");
}else{
	printf("Search failed");
}
return 0;
}

