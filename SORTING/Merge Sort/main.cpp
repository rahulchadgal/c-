#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void merge_sort(int *a,int l,int h);
void divide(int *a,int l,int m,int h);
void divide(int *a,int l,int m,int h)
{
    int n=h-l+1;
    int *b=new int[n];
    int left=l, right=m+1, i=0;
    while(left<=m&& right<=h)
    {
        if(a[left]<=a[right])
        {
            b[i++]=a[left++];
        }
        else
        {
            b[i++]=a[right++];
        }
    }
    while(left<=m)
    {
        b[i++]=a[left++];
    }
    while(right<=h)
    {
        b[i++]=a[right++];
    }
    for(int k=0;k<n;k++)
    {
        a[l+k]=b[k];
    }
    delete []b;
}
void merge_sort(int *a,int l,int h)
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
    merge_sort(a,l,m);
    merge_sort(a,m+1,h);
    divide(a,l,m,h);
    }
  //  for(int i=0;i<12;i++)
   //    cout<<a[i]<<"\t";
}
int main()
{
    int x[]={4,2,5,4,7,8,2,4,6,1,9,3};
     int *a=x;
     //for(int i=0;i<12;i++)
      //  cout<<a[i]<<"\t";
    merge_sort(a,0,11);
cout<<endl;
   for(int i=0;i<12;i++)
        cout<<a[i]<<"\t";
    return 0;
}
