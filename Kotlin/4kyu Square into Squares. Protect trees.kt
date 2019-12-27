package solution

var s:String="" 
fun solver(n:Long,i:Long):Boolean{
  if(n == 0.toLong())return true;
    
    for(j in i downTo 1){  
        if(j*j<=n){ 
        s= j.toString()+" "+s;
      if(solver(n-(j*j),j-1))  return true;
      else  s= s.drop(j.toString().length +1);
      }
      }
      return false;
}

object Decomp {
    
    fun decompose(n: Long): String {
    s=""
    if(solver(n*n,n-1))  return s.trim();
  else return "null"
  }
}
