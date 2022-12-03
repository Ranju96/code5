#include <iostream>

using namespace std;
int checkPrimeOrNot(int n){ 
        
        for(int i=2; i<n; i++){
                if(n%i == 0){
                        return 1;
                }
        }
    return 0;
}
int main()
{
    int array[] = {2,5,4,8,6,7};
    int n = sizeof(array)/sizeof(array[0]);
    int count=0;
    for(int i=0; i<n; i++)
    {
       int check = checkPrimeOrNot(array[i]); 
       if(check==1)
       {
           count++;
       }
       
    }
    cout<<count;
    return 0;
}

