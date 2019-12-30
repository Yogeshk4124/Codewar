using namespace std;
int find_short(std::string str)
{
  	int l=798989;
  	string temp;
	  stringstream ss(str);
	  while(ss>>temp){
	  	if(temp.length()<l)
	  	l=temp.length();
	  }
	return l;
}
