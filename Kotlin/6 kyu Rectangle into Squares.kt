package squares

fun sqInRect(lng:Int, wdth:Int):List<Int>? {
	var a=lng
	var b=wdth
	if(a==b)return null
	var c:List<Int> = listOf()
    while(a!=0 && b!=0)		
		if(a>b){c+=listOf(b); a=a-b;}
		else   {c+=listOf(a); b=b-a;}
	return c
}
