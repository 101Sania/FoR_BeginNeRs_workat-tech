#include<iostream>
using namespace std;
int main()
{
    int a,n,Max=0;
    cin>>n;
    while(n--){
        cin>>a;
        if(a>Max)
            Max = a;
    }
    if(Max%2==0)
        cout<<"WON"<<endl;
    else
        cout<<"LOST"<<endl;
    Max = 0;
}
