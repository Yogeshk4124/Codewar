fun solution(input: String, d: CharArray): String {
var str:String="";
var s=input.lines()
first@ for(i in 0..s.size-1){
		for(j in 0..s[i].toString().length-1)
				if(d.contains(s[i][j].toChar()))
				{
                str += (s[i].substring(0,j)).trimEnd()+"\n";
                continue@first;
                }
		str+=s[i]+"\n"
	}
	str=str.dropLast(1)
	return str
}
