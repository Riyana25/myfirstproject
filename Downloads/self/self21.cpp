#include<iostream>
#include<math.h>
using namespace std;

class Sum{
    private:
    int x,y,z;

    public:
    bool setter(int a,int b ,int c)
    {
         x =max(a, max(b,c));
        

        if(x == a)
        {
            y=b;
            z=c;
        }else if(x == b)

        {
            y=a;
            z=c;
        }else{
            y=a;
            z=b;

        }

        if(x*x == y*y + z*z)
        {
            return true;
        }else
        return false;


    }

};

int main()
{
    class Sum obj;
    int a,b,c;
    cout<<"Enter a b and c"<<endl;
    cin>>a>>b>>c;

    if( obj.setter(a,b,c) )
    {
        cout<<"pythagorous triplet";

    }else{
        cout<<"It is not";
    }
    return 0;
    

}
