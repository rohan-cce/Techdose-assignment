
// Time Complexity O(N^(3/2))
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int isPrime;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            isPrime=1;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    isPrime=0;
                    break;
                }
            }if(isPrime==1){
                printf("%d ",i);
            }
        }
    }
}