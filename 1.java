public class ConvertToBase3 {

 public static String convertToBase3(int N){
 String result = "";
 while(S>0){
 int rem = S%3;
 S = S/3;
 result = rem + result;
 }
 return result;
 }
