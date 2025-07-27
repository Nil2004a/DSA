//Write a program to print the smallest number greater than the target using linear search
#include<stdio.h>
int main(){
int n,i,tar,c;
printf("Enter the size of the array: ");
scanf("%d",&n);
int ar[n];
printf("Enter the array: ");
for(i=0;i<n;i++){
	scanf("%d",&ar[i]);
}
printf("Enter the target: ");
scanf("%d",&tar);
c=0;
int arc[c];
for(i=0;i<n;i++){
	if(ar[i]>tar){
		arc[c]=ar[i];
		c++;
	}
}
int ls;
ls=arc[0];
for(i=0;i<c;i++){
	if(arc[i]<ls){
		ls=arc[i];
		}
	}
printf("The required number is: %d",ls);
return 0;
}
