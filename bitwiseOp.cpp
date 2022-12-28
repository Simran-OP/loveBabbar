#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=6, b=4;
    cout<<"And only true when all true"<<(a & b)<<endl;
    cout<<"Or only f when all f"<<(a | b)<<endl;
    cout<<"complement"<<(~a )<<endl;
    cout<<"XOR"<<(a^b)<<endl;

    cout<<(17>>1)<<" 17/2 "<<17/2<<endl;
    cout<<(17>>2)<<" 17/4 "<<17/4<<endl;
    cout<<(19<<1)<<" 19*2 "<<19*2<<endl;
    cout<<(21<<2)<<" 21*4 "<<21*4<<endl;
      

    return 0;
}