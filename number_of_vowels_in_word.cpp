#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,k;
    int n=0;
    cout<<"enter word:--> ";
    cin>>s;
    for(int i=0;i<=(s.size()-1);i++){
        k=s[i];
        if(k=="a" || k=="e" || k=="i" || k=="o" || k=="u" || k=="A" || k=="E" || k=="I" || k=="O" || k=="U"){
            n+=1;
        }
    }
    cout<<"no. of vowels in word:--> "<<n<<endl;
    return 0;
}

