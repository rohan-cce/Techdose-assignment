// Time Complexity O(N*N)

#include<stdio.h>
#include<math.h>

int isPrime(int num){
    for(int j=2;j<num;j++){
        if(num%j==0){
            return 0;
        }
    }
        return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
    return 0;
}
