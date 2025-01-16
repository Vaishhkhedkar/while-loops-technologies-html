#include<stdio.h>
int main(){
    int arr[5]={12,11,13,5,6},n=5;
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for (int i=1;i<n;i++){

    int current=arr[i];//element
    int sorted=i-1;//index
    printf("sorted before val=%d\n",sorted);
    while(sorted>=0 && arr[sorted]>current)
    {
arr[sorted+1]=arr[sorted];
printf("sort val in loop=%d\n",sorted);
sorted=sorted-1;
    }
    printf("sorted after val=%d\n",sorted);
    arr[sorted+1]=current;
    for (int i=0;i<n;i++)
    {
printf("%d",arr[i]);
    }
    printf("\n");
    }
    return 0;
}