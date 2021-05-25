#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string num = "53124";
    sort(num.begin(),num.end(),greater<char>());
    cout<<num;

}