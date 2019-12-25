using namespace std;
string get_middle(string input) 
{
 stringstream c;
if(input.length()%2==0){
  c<<input[(input.length()-1)/2];
  c<<input[(input.length()+1)/2];
  }
  else{c<<input[input.length()/2];}
  return c.str();
}
