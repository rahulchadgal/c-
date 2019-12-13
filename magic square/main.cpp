#include <iostream>
#include<conio.h>

using namespace std

int main()
{
    int n, A[100][100],i,j,data=1,x=0,y=0;
    cout << "Enter the size of magic square (only odd numbers)" << endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            A[i][j]=0;
        }
    }
    i=0,j=n/2;
    while(data<=(n*n))
    {
        A[i][j]=data,x=i,y=j,i-=1,j+=1;


        if(i<0)
        {
            i=n-1;
        }
        if(j>=n)
        {
            j=0;
        }
        if(A[i][j]!=0)
        {
            i=x+1,j=y;
        }
        data++;
    }
    cout<<"_________M A G I C    S Q U A R E__________"<<endl;
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;

    }

    return 0;
}
