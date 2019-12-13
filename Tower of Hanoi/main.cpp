#include <iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
int i=0;
void tower_of_hanoi(int c, char source,char destination, char intermediate)
{
    if(c==1)
    {

        printf("Move top disc from pole %c to pole %c\n",source,destination);
        i++;

    }
    else
    {
        tower_of_hanoi(c-1,source,intermediate,destination);
        tower_of_hanoi(1,source,destination,intermediate);
        tower_of_hanoi(c-1,intermediate,destination,source);
    }
}
int main()
{
    tower_of_hanoi(4 ,'A','C','B');
    cout<<endl<<i;
    return 0;
}
