#include <vector>
using namespace std;
char add_letters(vector<char> letters)
{
if(letters.size()==0)  return'z';
int s=0;
for(int i=0;i<letters.size();i++)  s+=(letters[i])-'`';
if(s%26==0)  return 'z';
return 96+(s%26);
}
