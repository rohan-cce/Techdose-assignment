#include <stdio.h>
int partition(int a[],int l,int h){
    int pivot=a[l];
    int start=l;
    int end=h;
    while(start<end){
        while(a[start]<=pivot) start++;
        while(a[end]>pivot) end--;
        if(start<end){
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    int temp=a[l];
    a[l]=a[end];
    a[end]=temp;
    return end;
}
void quicksort(int a[],int l,int h){
    if(l<h){
        int loc=partition(a,l,h);
        quicksort(a,l,loc-1);
        quicksort(a,loc+1,h);
    }
}
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[100],n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before sorting\n");
    printArr(a,n);
    int l=0;
    int h=n-1;
    quicksort(a,l,h);
    printf("After sorting\n");
    printArr(a,n);
    return 0;
}