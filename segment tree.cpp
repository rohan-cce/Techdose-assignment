#include<bits/stdc++.h>
using namespace std;

vector<int> st;

void buildSegTree(int st_idx,vector<int>& arr,int start,int end){
    if(start > end){
        return; //invalid case
    }
    if(start ==  end){ //Leaf Node
        st[st_idx] = arr[start];
        return;
    }
    //Internal Node
    int middle = start + (end-start)/2;
    buildSegTree(2*st_idx,arr,start,end,middle);
    buildSegTree(2*st_idx+1,arr,middle+1,end);
    st[st_idx]=st[2*st_idx]+st[2*st_idx+1];
}

int query(int qs,int qe,int st_idx,int start,int end){
    if(qs>end or qe<start)
        return 0;
    if(start>=qs and end<=qe)
        return st[st_idx];
    //partial over lap
    int middle = start + (end-start)/2;
    int leftSum = query(qs,qe,2*st_idx,start,middle);
    int rightSum = query(qs,qe,2*st_idx+1,middle+1,end);
    return leftSum+rightSum;
}

void updateNode(int st_idx,int start,int end,int int pos,int newVal){
    if(start<pos or end<pos) 
        return;
    if(start==end){
        st[st_idx]=newVal;
        return;
    }
    //internal node 
    int middle = start + (end-start)/2;
    updateNode(2*st_idx,start,middle,pos,newVal);
    updateNode(2*st_idx+1,middle+1,end,pos,newVal);
    st[st_idx]=st[2*st_idx]+st[2*st_idx+1];

}

int main(){
    int n=6;
    vector<int> arr = {1,3,2,-2,4,5};
    st.resize(4*n+1);
    int st_idx = 1 ;//start index of seg tree
    int start = 0,end=n-1;
    
    //Build SegTree
    buildSegTree(st_idx,arr,start,end);
    cout<<"\n segment tree is:-\n";
    for(int i=0;i<=4*n;++i)
        cout<<arr[i];
    cout<<"\n";

    cout<<"query  is 0-based indexed";
    cout<<"RangeSum(2,4):"<<query(2,4,st_idx,start,end)<<"\n";
    cout<<"RangeSum(1,4):"<<query(1,4,st_idx,start,end)<<"\n";
    cout<<"RangeSum(3,3):"<<query(3,3,st_idx,start,end)<<"\n";

arr[2]=100;
updateNode(st_idx,start,end,2,100);
    cout<<"\n segment tree is:-\n";
    for(int i=0;i<=4*n;++i)
        cout<<arr[i];
    cout<<"\n";

    cout<<"query  is 0-based indexed";
    cout<<"RangeSum(2,4):"<<query(2,4,st_idx,start,end)<<"\n";
    cout<<"RangeSum(1,4):"<<query(1,4,st_idx,start,end)<<"\n";
    cout<<"RangeSum(3,3):"<<query(3,3,st_idx,start,end)<<"\n";
    return 0;   
}