fun incrementString(str: String) : String {
  var ss:String=str.replace("\\d".toRegex(),"")
  if(ss==str) return ss+"1"
  var num = ((str.replace("[^0-9]".toRegex(), "")).toInt()+1).toString()
  if(str.length <= (ss+num).length )return ss+num
  else return ss+"0".repeat(str.length-(ss+num).length)+num;
