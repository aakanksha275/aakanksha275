#include<iostream>
#include<string>
using namespace std;

void piConvert(string s){
    if(s.length()==0)
        return;

    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        piConvert(s.substr(2));
    }
    else{
        cout<<s[0];
        piConvert(s.substr(1));
    }

}

int main(){
    piConvert("pipxrjpppicpiddipi");
    return 0;
}