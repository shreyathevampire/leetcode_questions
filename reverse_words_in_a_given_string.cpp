#include<bits/stdc++.h>
using namespace std;
int main(){

  string s = "geeks for geek";
  char buf[1024];
  memset(buf,'\0',1024);
  
  /*this converts the string into char pointer whose contents are then copied to the char array(buf) for
  performing swapping on words                
  */
  strcpy(buf,s.c_str());
  cout<<"buf = "<<buf<<endl;
  char *token[1024];
  int k=0;
  token[k++] = strtok(buf," ");
  while((token[k] = strtok(NULL," ")) != NULL){
    k++;
  }
  token[k] = NULL;
  // for(int i=0;i<k;i++){
  //   cout<<token[i] <<" ";
  // }
  for(int i=0,j=k-1;i<j;i++,j--){
    swap(token[i],token[j]);
  }
  for(int i=0;i<k;i++){
    cout<<token[i] <<" ";
  }

  return 0;
}
