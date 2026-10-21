#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1;
    string s2="";
    cout<<"enter word:--> ";
    cin>>s1;
    for(int i=(s1.size()-1);i>=0;i--){
        s2+=s1[i];
    }
    cout<<"word in reverse:--> "<<s2<<endl;
    return 0;
}

