#include<map>
#include<string>
using namespace std;
bool is_isogram(string s) {
map<char,int> m;
for(int i=0;i<s.length();i++){
if(s[i]>=65 && s[i]<=90){//check for small letters
	if(++m[s[i]]==2)return false;
}
else	if(++m[s[i]-32]==2) return false;//check for capital letters
}
return true;
}
