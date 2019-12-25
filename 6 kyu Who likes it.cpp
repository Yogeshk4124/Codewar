#include<iostream>
#include<vector>
using namespace std;

string likes(const std::vector<std::string> &names)
{
   string s="";
  stringstream ss;
  int n=names.size()-2;
  ss<<n;
  
  if(names.size()==0)
    return "no one likes this"; // Do your magic!
	else if(names.size()==1)
	return names[0]+" likes this";
	else if(names.size()==2)
	return names[0]+" and "+names[1]+" like this";
	else if(names.size()==3)
	return names[0]+", "+names[1]+" and "+names[2]+" like this";
	else
	return names[0]+", "+names[1]+" and "+ss.str()+" others like this";
    }
