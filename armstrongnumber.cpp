#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int l,m,k,n,h;
    string ns;
    int s=0;
    cout<<"enter no.:--> ";
    cin>>ns;
    n=stoi(ns);
    l=ns.size();
    for(int i=0;i<=(l-1);i++){
        h=ns[i];
        k=h-'0';
        m=pow(k,l);
        s=s+m;
    }
    if(s==n){
      cout<<"yes it is an Armstrong's no.";
    }
    else{
      cout<<"No it is not an Armstrong's no.";
    }
    return 0;
}

