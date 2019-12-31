#include <string>
using namespace std;
std::string sum_strings(std::string a, std::string b) {
  if(a==""&&b=="")return "0";
  if(a=="")return b;
  if(b=="")return a;
  string ans="";
  string s1,s2;
   int max,min,c=0;
   if(a.length()>b.length()){
  max=a.length();
  min=b.length();
  s1=a;s2=b;
  }
  else{
  min=a.length();
  max=b.length();
  s1=b;
  s2=a;
  }
  for(int i=max-1;i>=0;i--){
  if(--min>=0){
  ans=to_string((s1[i]-'0'+s2[min]-'0'+c)%10)+ans;
  c=(s1[i]-'0'+s2[min]-'0'+c)/10;
  }
  else
  {
  ans=to_string((s1[i]-'0'+c)%10)+ans;
  c=(s1[i]-'0'+c)/10;
  }
  }
  if(c>0)  ans=to_string(c)+ans;
  while(ans[0]=='0' && ans.length()!=1)  ans.erase(ans.begin());
  return ans;
  }
