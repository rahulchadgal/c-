#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
int LCS(char *X, char *Y, int m, int n)
{
    int lis[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0||j==0)
                lis[i][j]==0;
            else if(X[i-1]==Y[j-1])
                lis[i][j]=lis[i-1][j-1]+1;
            else
                lis[i][j]=max(lis[i-1][j],lis[i][j-1]);

        }
    }
    return lis[m][n];
}

int main()
{
    cout << LCS("rahul","rahul",5,5) << endl;
    return 0;
}
