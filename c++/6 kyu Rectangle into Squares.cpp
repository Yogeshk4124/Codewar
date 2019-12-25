#include <vector>
using namespace std;
class SqInRect
{
  public:
  static std::vector<int> sqInRect(int lng, int wdth){
  if(lng==wdth)return {};
	vector<int>c;
  while(lng!=0 && wdth!=0)		
		if(lng>wdth){c.push_back(wdth); lng=lng-wdth;}
		else   {c.push_back(lng); wdth=wdth-lng;}
	return c;
  }
};
