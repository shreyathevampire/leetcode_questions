/*You are given an array of characters which is basically a sentence. However there is no space between different words and the first letter of every word is in uppercase. You need to print this sentence after following amendments:
(i) Put a single space between these words.
(ii) Convert the uppercase letters to lowercase*/


#include<bits/stdc++.h>
using namespace std;
int main(){

  string s = "GeeksForGeek";

  for(int i = 0;i<s.length();i++){
    if(s[i] >= 'A' && s[i]<='Z'){
        s[i] = s[i]+32;
        if(i!= 0 )
          cout<<" ";
        cout<<s[i];
    }
    else
    cout<<s[i];


  }

  return 0;
}

