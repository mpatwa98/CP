#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  string gcdOfStrings(string str1, string str2){
    if(str1+str2!=str2+str1){
      return "";
    }
    else{
      int pos=__gcd(str1.size(),str2.size());
      return str1.substr(0,pos);
    }
  }
};

int main()
{
  string str1,str2;
  cin>>str1>>str2;
  Solution obj;
  cout<<obj.gcdOfStrings(str1,str2);

  return 0;
}