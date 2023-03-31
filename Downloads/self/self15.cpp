/*check if given  number is armstrong or not*/
/*
153
(1^3=1 + 5^3=125 +3^3=27) =153*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int N;
    int sum=0;
    int originalN=N;
    

    cout<<"Enter the number:"<<endl;
    cin>>N;

    while(N>0)
    {
        int rem= N%10;
        sum+= pow(rem,3);
        N=N/10;
    }
    if(sum == originalN)
    {
        cout<<"Armstrong number"<<endl;

    }else{
         cout<<"Armstrong number"<<endl;


    }
    
    return 0;
}
