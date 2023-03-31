/*print the nth fibanacci sequence*/
#include<iostream>
// #include<math.h>
using namespace std;
int main()
{
    int N;
    int a=-1;
    int b=1;
    int c;
    
    cout<<"Enter the term:"<<endl;
    cin>>N;

    for(int i=0;i<N;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;


    }
    
    return 0;
}




