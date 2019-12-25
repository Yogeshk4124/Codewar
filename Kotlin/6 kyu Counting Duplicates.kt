fun duplicateCount(text: String): Int {
    var c:Int = 0
	var m = mutableMapOf<Char,Int>();
	for(i in text){
			if(m[i.toLowerCase()]==null)m.put(i.toLowerCase(),1)
			else if(m.getValue(i.toLowerCase())!= -9){
			c++;
			m[i.toLowerCase()]= -9;
			}}
	return c;
}
