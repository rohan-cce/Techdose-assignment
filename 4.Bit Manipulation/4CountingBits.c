//Practice Link -> https://leetcode.com/problems/counting-bits/
int* countBits(int num, int* returnSize){
    num++;
    *returnSize = num;
    int* a = (int*)malloc(sizeof(int)*num);
    a[0] = 0;
    for(int i = 1; i < num; i++)
        a[i] = (i&1)? a[i>>1]+1 : a[i>>1];
    return a;
} 