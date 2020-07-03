//Insertion Sort Algorithm
#include <stdio.h>
int n=7;

int sorting( int array[])
{
//j is for iterating array  through it's element
int j;
//check the value from right to left
for(j=1;j<n;j++){

int current_value = array[j];

//check the value from right to left
int i = j-1;

//arrary[i]>current_value yeild increasing order
//array[i]<current_value decreasing order
while(i >= 0 && array[i] > current_value)
{

//move the value right to left
//here i+1 =2;where i=1; 
array[i+1]=array[i];

//i--, simply decrease the index of array 
i--;

//give value for i+1=array[2]=current_value=
array[i+1]=current_value;

}

}

//print the value after the sorting is complete
int i;
printf("\n\n After sorting :");
for(i=0;i<n;i++)
{
printf(" %d ",array[i]);
}
}
int main(){
int array[7]={33,67,22,11,1,1,0};

//print the vlaue before sorting
int i;
printf("Before sorting :");
for(i=0;i<n;i++){
printf(" %d ",array[i]);
}
sorting(array);


}
