#include<stdio.h>
int main(){
int n,i,a[10],t,j;

printf("enter how many elements\n");
scanf("%d",&n);


printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

// Logic
for(i=1;i<n;i++) {
for(j=i;j>0;j--) {

if(a[j]<a[j-1]) {
t=a[j];
a[j]=a[j-1];
a[j-1]=t; } // if over

 } // J loop
} // I loop 


printf("the sorted elements are\n"); for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}