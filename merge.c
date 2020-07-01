//Merge sort algorithm!!

#include <stdio.h>
//merge--> function
int merge(int array[],int lower_bound,int mid_point,int upper_bound)
{
//here initialization the varaible
int i = lower_bound;
int j = mid_point+1;
int k = lower_bound;
//Store the new sorted array
int store_sorted_array[100];

while(i<=mid_point && j<=upper_bound)
{

if (array[i]<array[j])
{
store_sorted_array[k]=array[i];
i++;k++;
}
else 
{
store_sorted_array[k]=array[j];
i++;j++;
}
//left overcase
if(i > mid_point)
{
if(j<=upper_bound)
{
store_sorted_array[k]=array[j];
k++;j++;
}
else
{
if(i<=mid_point){
store_sorted_array[k]=array[i];
k++;i++;
}
}

}
}
}
//merge sort function
int merge_sort(int array[],int lower_bound,int upper_bound)
{
//At least lowerbound has two element
if(lower_bound<upper_bound){
//mid-point for the array
int mid_point = (lower_bound+upper_bound)/2;

merge_sort(array,lower_bound,mid_point);
merge_sort(array,mid_point+1,upper_bound);

merge(array,lower_bound,mid_point,upper_bound);

}
}


int main()
{
int array[100] ={12,3,41,4,24,23};
int lower_bound;
int upper_bound;
int store_sorted_array[100];
int n= 8;
int i;
for(i=0; i<n; i++)
{
printf("%d",array[i]);
}
merge_sort(array,lower_bound,upper_bound);
}

