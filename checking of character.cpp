#include <iostream>
using namespace std;
int main() {
    char a;
    cout <<"enter an alphabet : ";
    cin>>a;
    if(a=='a' || a=='e' ||a=='i' ||a=='o' ||a=='u'){
        cout<<"is vowel";
    }
    else{
        cout<<"is consonant";
    }
   
    return 0;
}