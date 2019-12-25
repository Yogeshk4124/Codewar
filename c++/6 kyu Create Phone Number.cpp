#include <string>
using namespace std;
string createPhoneNumber(const int arr [10]){
  string s;
for(int i=0;i<10;i++)
{
	if(i==0)s+='(';//add opening bracket
	if(i==3)s+=") ";//add closing bracket and space
	if(i==6)s+='-';//add - 
	s+=(arr[i]+'0');
}
return s;
}
