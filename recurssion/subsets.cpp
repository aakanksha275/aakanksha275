#include<iostream>
#include<string>
using namespace std;

void subset(string s , string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    subset(ros , ans);
    subset(ros , ans+ch);
    


}

int main(){
    subset("ABC","");
    cout<<endl;
    return 0;
}