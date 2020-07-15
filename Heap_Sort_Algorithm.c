//
// Heap Algorithm
//
#include <stdio.h>

int main(){

//initialization of variable
int array[10]={13,9,12,8,4,7,2,3,1,0};
int no = 10;
int i,j,c, root_heap, temp;


//loop for taking out main root heap
for(i=1; i < no; i++){
c=i;
do
{
//root heap
root_heap = (c-1)/2;
if(array[root_heap]<array[c])
{
temp = array[root_heap];
array[root_heap] = array[c];
array[c] = temp;
}
c = root_heap;
}while (c !=0);
}
//--------
printf("\n Heap array :");
for(i = 0; i < no; i++){
printf(" %d ", array[i]);
}
//deletion of heap from root heap
for(j=no; j >=0; j--)
{
temp = array[0];
array[0] = array[j];
array[j] = temp;
root_heap = 0;

do{
//Right side of heap
c = 2* root_heap + 1;

if((array[c]<array[c+1]) && c < j-1)
c++;
//comparing top to down
if(array[root_heap]<array[c] && c<j)
{
temp = array[root_heap];
array[root_heap] = array[c];
array[c] = temp;
}
root_heap = c;

} while(c<j);
}
//print
printf("\n Sorted Array");
for(i = 0; i < no; i++)
{
printf(" %d ", array[i]);
}

}
