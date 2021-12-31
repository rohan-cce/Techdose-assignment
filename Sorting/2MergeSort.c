#include <stdio.h>
void merge(int a[],int l,int mid,int h){
    int b[10]; 
    int i=l;
    int j=mid+1;
    int k=l;
    while(i<=mid && j<=h){
        if(a[i]<=a[j]){
            b[k]=a[i++];
        }else{
            b[k]=a[j++];
        }
        k++;
    }
    if(i>mid){
        while(j<=h){
            b[k++]=a[j++];
        }
    }else{
        while(i<=mid)
        {
            b[k++]=a[i++];
        }
    }
    for(k=l;k<=h;k++){
        a[k]=b[k];
    }
}

void mergesort(int a[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
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
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Before sorting\n");
    printArr(a,n);
    int l=0;
    int h=n-1;
    mergesort(a,l,h);
    printf("After sorting\n");
    printArr(a,n);
    return 0;
}