#include <iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
int divide(int *a,int l,int h)
{
    int pivot=a[l];
    int m=l;
    for(int k=l+1;k<=h;k++)
    {
        if(a[k]<pivot)
        {
           swap(a[k],a[++m]);
        }
    }
    swap(a[l],a[m]);
    return m;
}
void quick_sort(int *a,int l, int h)
{
    if(l<h)
    {
        int q=divide(a,l,h);
        quick_sort(a,l,q-1);
        quick_sort(a,l+1,h);
    }
}
int main()
{
    int x[]={22,33,11,24,52,37,48,95,49,34,53,31};
    int *a=x;
    quick_sort(a,0,12);
    for(int i=0;i<12;i++)
        cout<<a[i]<<"\t";
    return 0;
}
