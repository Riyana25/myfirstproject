/*Check if given numbefr is prime number or not*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    int div=2;

    cout<<"Enter the number:"<<endl;
    cin>>N;
    bool flag=0;

    for(div=2;div<N;div++)
    {
        if(N%div == 0)
        {
            cout<<"No prime number";
            flag =1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"prime number";

    }
     
return 0;
}