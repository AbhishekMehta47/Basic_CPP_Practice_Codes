#include <iostream>
using namespace std;
int main(){
    int n,m,f;
    int a=0;
    cout<<"enter 1st term:--> ";
    cin>>f;
    cout<<"enter nth term:--> ";
    cin>>n;
    for(int i=f;i<=n;i++){
        m=i*i;
        a=a+m;
    }
    cout<<"sum of series is:--> "<<a;
    return 0;
}

