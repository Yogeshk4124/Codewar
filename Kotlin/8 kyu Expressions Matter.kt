class Kata {
    companion object {
     fun expressionsMatter(a : Int, b : Int, c : Int) : Int {
        var s:Int=0;
		 if(a+(b*c)>s)s=a+(b*c)
		 if((a+b)*c>s)s=(a+b)*c
		 if((a*b)+c>s)s=(a*b)+c
		 if(a*(b+c)>s)s=a*(b+c)
		 if(a*b*c>s)s=a*b*c
		 if(a+b+c>s)s=a+b+c
		 return s
     }
    }
}
