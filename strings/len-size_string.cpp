#include<iostream>
#include<string>
using namespace std;

int main(){

  string str = "nincompoop";
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;

    for(int i=0;i<str.size();i++)
    cout<<str[i]<<endl;

    for(int i=0;i<str.length();i++)
    cout<<str[i]<<endl;
}