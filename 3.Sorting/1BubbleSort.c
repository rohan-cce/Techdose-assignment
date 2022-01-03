 #include <stdio.h>

void BubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                flag=1;
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        if(flag==0)
        break;
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
    BubbleSort(a,n);
    printf("After sorting\n");
    printArr(a,n);
    return 0;
}