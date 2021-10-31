#include <iostream>
using namespace std;
void merge(int *arr,int left,int mid,int right,int *buf)
{
    int i=left,j=mid+1,k=i;
    while(i<=mid&&j<=right)
    {
        if(arr[i]<=arr[j]) buf[k++] = arr[i++];
        else buf[k++] = arr[j++];
    }
    while(i<=mid) buf[k++] = arr[i++];
    while(j<=right) buf[k++] = arr[j++];
    for(i=left;i<=right;++i)
    {
        arr[i] = buf[i];
    }
}
void mergesort(int *arr,int left,int right,int *buf)
{
    if(left<right)
    {
        int mid = (left+right)/2;
        mergesort(arr,left,mid,buf);
        mergesort(arr,mid+1,right,buf);
        merge(arr,left,mid,right,buf);
    }
}
int main(int argc,char *argv[])
{
    int arr[] = {2,23,34,43,45,6,7,8,5,4,56,78,80,211,222,444,111};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *buf = new int[len];
    mergesort(arr,0,len-1,buf);
    for(auto i:arr)
    {
       cout<<i<<" ";
    }
    cout<<endl;
    delete [] buf;
    return 0;
}
