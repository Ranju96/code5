#include <iostream>

using namespace std;
void drawPyramid(int n)
{
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
}

int main()
{  
    int array[] = {5,6,5,4,7};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i = 0; i<n; i++)
    {
       drawPyramid(array[i]);
        
    } 
    return 0;
}

