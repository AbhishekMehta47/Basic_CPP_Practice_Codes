#include <iostream>
using namespace std;
int main(){
    float a,b;
    char c;
    cout<<"enter: 1st no.-->sign-->2nd no. ";
    cin>>a>>c>>b;
    if(c=='+'){
        cout<<a+b;
    }
    else if(c=='-'){
        cout<<a-b;
    }
    else if(c=='*'){
        cout<<a*b;
    }
    else if(c=='/'){
        cout<<a/b;
    }
    else{
        cout<<"Invalid";
    }
    return 0;
}

