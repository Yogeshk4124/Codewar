#include <string>
#include <regex>
using namespace std;
std::string format_duration(int l) {
if(l==0)return "now";
  stringstream ss;
  if(l>=31536000){
    if(l%31536000==0)ss<<l/31536000<<" year";
    else ss<<l/31536000<<" year";
    if(l/31536000>1)ss<<"s";
    l=l%31536000;
  }
  if(l>=86400){
    if(l%86400==0)ss<<" and "<<l/86400<<" day";
    else ss<<", "<<l/86400<<" day";
    if(l/86400>1)ss<<"s";
    l=l%86400;
  }
  if(l>=3600){
    if(l%3600==0)ss<<" and "<<l/3600<<" hour";
    else ss<<", "<<l/3600<<" hour";
    if(l/3600>1)ss<<"s";
    l=l%3600;
  }
  if(l>=60){
    if(l%60==0)ss<<" and "<<l/60<<" minute";
    else ss<<", "<<l/60<<" minute";
    if(l/60>1)ss<<"s";
    l=l%60;
  }
  if(l>0)
  {
    ss<<" and "<<l<<" second";
    if(l>1)ss<<"s";
  }
  regex a(", and");
string s=regex_replace(ss.str(),a," and");
if(s[0]==' ')
return s.substr(5,s.length()-1);
if(s[0]==',')
return s.substr(2,s.length()-1);
else
return s;
}
