/*   Remove Spaces from a String
     Given a string as input, output it without spaces.
      For example:
      string = "ab c  d e fgh i  j kl mn  opqr  stuvwxyz"
      result = "abcdefghijklmnopqrstuvwxyz"                     */

#include <iostream>
using namespace std;
    int i;
string R(string s){
   string b;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ' '){
            continue;
        }else{
             b += s[i];
        }
    } 
    return b;
}
int main() {
    string text;
    getline(cin,text);
    string a = R(text);
    cout << a;    
    return 0;

}
