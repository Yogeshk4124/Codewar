fun rgb(r: Int, g: Int, b: Int): String {
  	var s = "";
  	var c=charArrayOf('0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F');
  	if(r<0)	s+="00";
  	else if(r>255) s+="FF"
	else s+=c[r/16].toString()+c[r%16]
	if(g<0)	s+="00";
  	else if(g>255) s+="FF"
	else s+=c[g/16].toString()+c[g%16]
	if(b<0)	s+="00";
  	else if(b>255) s+="FF"
	else s+=c[b/16].toString()+c[b%16]
	return s;
}
