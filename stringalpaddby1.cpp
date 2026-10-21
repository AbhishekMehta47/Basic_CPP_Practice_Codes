#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,h,s;
    string s2="";
    int l;
    cout<<"enter a word:--> ";
    cin>>s1;
    l=s1.size();
    for(int i=0;i<=(l-1);i++){
        h=s1[i] +1;
        //s=h+1;
        s2+=h;
    }
    cout<<"altered word:--> "<<s2;
    return 0;
}

