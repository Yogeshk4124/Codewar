#include <string>
using namespace std;
map<string,int> m={
  {"zero", 0},{"one", 1},{"two", 2},{"three", 3},{"four", 4},{"five", 5},{"six", 6},{"seven", 7}, 
  {"eight", 8},{"nine", 9},{"ten", 10},{"eleven", 11},{"twelve", 12},{"thirteen", 13},{"fourteen", 14}, 
  {"fifteen", 15},{"sixteen", 16},{"seventeen", 17},{"eighteen", 18},{"nineteen", 19},{"twenty", 20}, 
  {"thirty", 30},{"forty", 40},{"fifty", 50},{"sixty", 60},{"seventy", 70},{"eighty", 80},{"ninety", 90}, 
  {"hundred", 100},{"million", 1000000},{"thousand", 1000}};
bool isv(char ch) { return (ch=='-'); } 
long parse_int(std::string a) {
  int ans=0,s=0;
  replace_if(a.begin(), a.end(),isv, ' ');
  stringstream ss(a);
  string w1,w2,w3,p="zero";
while (ss >> w1) {
  if(m[w1]>99)
  {
    if(m[w1]>m[p]){
    ans=(ans+s)*m[w1];
    s=0;p=w1;continue;
    }
    else{
      if(s==0)ans+=m[w1];
      else ans+=s*m[w1];
      p=w1;s=0;continue;
    }
  }
  s+=m[w1];
}
if(m[w1]<100)ans+=s;
  return ans;
}
