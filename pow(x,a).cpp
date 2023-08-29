#include <bits/stdc++.h>
using namespace std;

long long pow(long long x,long long a){
    int num=1;
    while(a>0){
        if(a&1){
            num=num*x;
        }
        x=x*x;
        a>>=1;
    }
    return num;
}

int main()
{
    long long int num=pow(9,2);
    cout<<num;
    return 0;
}
