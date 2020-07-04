#include <stdio.h>
int n =9;
int array[9]={12,33,22,11,14,8,3,1,0};
int next_array[9];

int merg_divide_element(int array[],int lower_bound,int average, int upper_bound)
{
int l1 = lower_bound;
int l2 = average+1;
int j= lower_bound;

while(l1 <= average && l2 <= upper_bound)
{
if(array[l1]<=array[l2]){

next_array[j]=array[l1];
j++;l1++;
}else
{
next_array[j]=array[l2];
l2++;j++;

}

}
if(l1>average){
while(l2<=upper_bound)
{
next_array[j]=array[l2];
j++;l2++;
}
}else
{
while(l1<=average){
next_array[j]=array[l1];
j++;l1++;
}

}
for(j=lower_bound;j<=upper_bound; j++){
array[j] = next_array[j];
}
}


int divide_element(int array[],int lower_bound,int upper_bound){

if(lower_bound<upper_bound){
int average = (lower_bound+upper_bound)/2;

divide_element(array,lower_bound,average);
divide_element(array,average+1,upper_bound);
merg_divide_element(array,lower_bound,average,upper_bound);
}


}
int main(){

int lower_bound=0;
int upper_bound=9;
divide_element(array,lower_bound,upper_bound);
int i;
for(i=1;i<=n;i++)
{
printf(" %d ",array[i]);  
}
}

