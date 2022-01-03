#include<stdio.h>
#include<math.h>5
int fact(int n){
    long int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }return f;
}
int main(){
    int n,r,ncr;
    scanf("%d %d",&n,&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("%d",ncr);
}