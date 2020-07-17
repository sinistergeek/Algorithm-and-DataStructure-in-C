//Qick Sort Alogrithm

#include <stdio.h>

int swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;

}


int partation(int array[],int low, int high){
int pivot = array[high];
int i = (low-1);
for(int k = low; k<high; k++)
{
if(array[k] < pivot){
i++;
swap(&array[k],&array[i]);
}

}
swap(&array[i+1],&array[high]);
return (i+1);

}


int quickSort(int array[],int low,int high){
if(low<high){
int store = partation(array,low,high);
quickSort(array,low,store-1);
quickSort(array,store+1,high);
}
}

int main(){
int array[]= {33,2,3,1,22,44,8};
int high = sizeof(array)/sizeof(array[0]);
int low = 0;
quickSort(array,low,high);
for(int j = low ; j < high ;j++){
printf(" | %d |", array[j]);
}
}

