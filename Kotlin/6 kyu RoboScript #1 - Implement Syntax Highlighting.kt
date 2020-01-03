fun coder(s:String,ans:String):String{
  if(s=="")return ans
  if(s[0].isDigit())
    return ans+"""<span style="color: orange">"""+s+"</span>"
  else
  when(s[0]){
      'F' -> return ans+"""<span style="color: pink">"""+s+"</span>"
      'R' -> return ans+"""<span style="color: green">"""+s+"</span>"
      'L' -> return ans+"""<span style="color: red">"""+s+"</span>"  
    }
  return ans;
}
fun highlight(str:String):String{
  var a:MutableList<Char> =mutableListOf('`')
  var s:String=""
  var ans=""
    for(i in str){
      if((i==a.lastOrNull()||i.isDigit()&&(a.last()).isDigit())&&(i!='('&&i!=')'))    a.add(i)
      else{
          while(a.last()!='`'){
            s=a.last()+s
            a.removeAt(a.size-1)
            }
          ans=coder(s,ans)
          if(i!='('&&i!=')')a.add(i)
          else ans+=i
            s=""
                }
    }
        while(a.last()!='`'){
    s=a.last()+s
        a.removeAt(a.size-1)          
  }
  return coder(s,ans)
}
