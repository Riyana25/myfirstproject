/*print the given number in reverse order*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    int reverse=0;
    

    cout<<"Enter the number:"<<endl;
    cin>>N;

    while(N>0)
    {
        int rem= N%10;
        reverse = reverse*10 + rem;
        N=N/10;
    }
    cout<<reverse<<endl;
    return 0;
}
