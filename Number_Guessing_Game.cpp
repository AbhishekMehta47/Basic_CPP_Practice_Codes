#include <iostream>
using namespace std;
int main(){
    int a,n=7;
    cout<<"enter no.:--> ";
    cin>>a;
    if(a==n){
        cout<<"You got it right!!\n";
    }
    else if(a<n){
        cout<<"Lower than actual no.\n";
        cout<<"original no. is:--> "<<n;
    }
    else{
        cout<<"Higher than actual no.\n";
        cout<<"original no. is:--> "<<n;
    }
    cout<<endl;
    return 0;
}

