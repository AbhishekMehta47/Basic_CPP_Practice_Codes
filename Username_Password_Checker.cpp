#include <iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    if(a=="admin"){
        if(b=="1234"){
            cout<<"Login Successful";
        }
	else{
            cout<<"Wrong Password";
	}
    }
    else{
        cout<<"Wrong Username";
    }
    return 0;
}

