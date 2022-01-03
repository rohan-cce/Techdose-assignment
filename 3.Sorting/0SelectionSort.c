#include <stdio.h>
void SelectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main(){
    int a[100],n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array Before sorting \n");
    printArr(a,n);
    SelectionSort(a,n);
    printf("Array After sorting\n");
    printArr(a,n);
    return 0;
}