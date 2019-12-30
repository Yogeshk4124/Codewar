using namespace std;
class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b){
      	stringstream ss;
  	char c[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  	if(r<0)	r=0;
  	if(g<0)	g=0;
  	if(b<0)	b=0;
  	if(r>255)	r=255;
    if(g>255)	g=255;
  	if(b>255)	b=255;
   	ss<<c[(int)r/16]<<c[r%16]<<c[(int)g/16]<<c[g%16]<<c[(int)b/16]<<c[b%16];
	return ss.str();
  }
};
