#include<stdio.h>
#include<stdlib.h>
int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}
int small(int*arr,int x){
    int temp;
    for (int i = 0; i < x; i++){
        if(arr[i]+1!=arr[i+1] && arr[i]!=1){
            temp=arr[i];
            return temp-1;
        }
    }
}
int main(){
    int input;
    int *arr;
    scanf("%d",&input);
    for (int i = 0; i < input; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < input; j++)
    {
        printf("%d\t",arr[j]);
    }
    printf("\n");    
    qsort(arr,input,sizeof(*arr),comp);
    printf("%d",small(arr,input));    
    return 0;
}