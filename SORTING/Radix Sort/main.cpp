#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<vector>
#include<queue>

using namespace std;
void distribute( vector<int> &v, queue<int> digitQ[],int power)
{
    int digit=0;
    for(int i=0;i<v.size();i++)
    {
        digit=(v[i]/power)%10;
        digitQ[digit].push(v[i]);
    }

}
void collect(vector<int> &v, queue<int> digitQ[])
{
    int i=0,digit;
    for(digit=0;digit<10;digit++)
    {
        while(!digitQ[digit].empty())
        {
            v[i]=digitQ[digit].front();
            digitQ[digit].pop();
            i++;
        }
    }
}
void radix_sort(vector <int> &v,int d)
{
    int i,power=1;
    queue<int> digitqueue[10];
    for(i=0;i<d;i++)
    {
        distribute(v,digitqueue,power);
        collect(v,digitqueue);
        power*=10;
    }
     for(int i=0;i<11;i++)
        cout<<v[i]<<"\t";
}
int main()
{
    vector <int> v;
    v.push_back(1024);
    v.push_back(8392);
    v.push_back(1094);
    v.push_back(3094);
    v.push_back(4555);
    v.push_back(7777);
    v.push_back(1256);
    v.push_back(9994);
    v.push_back(3400);
    v.push_back(1800);
    v.push_back(2032);
    radix_sort(v,4);

   // for(int i=0;i<11;i++)
      //  cout<<v[i]<<"\t";
         return 0;
}
