//Bubble Sorting Algorithm

#include <stdio.h>

int main(){

int a[8]={33,2,11,22,44,88,73,1};
int i,j;
int n=8;
//optimizing the code
int flag=0;
for(i=0; i<n-1;i++){

for(j=0; j<n-1-i;j++){

if(a[j]>a[j+1]){
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
flag=1;
}
}
if(flag==0);
break;
}
for (i=0;i<n;i++)
{
printf(" %d ",a[i]);

}

}
