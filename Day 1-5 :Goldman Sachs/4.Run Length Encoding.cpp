Link: https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

Expected Time Complexity: O(N), N = length of given string.
Expected Auxiliary Space: O(1)

 

//C++ Solution

string encode(string src)
{     
 //Your code here 
 int count=1,n=src.size();
   string ans="";
   ans+=src[0];
   for(int i=1;i<n;i++){
       if(src[i]==src[i-1])
           count++;
       else{
           ans+=count+'0';         //BY ADDING '0' IT WILL CONVERT INT TO CHAR
           ans+=src[i];
           count=1;
       }
   }
   ans+=to_string(count);          //YOU CAN ALSO USE THE DEFAULT FUNCTION to_string(c) ALSO TO CONVERT INT TO CHAR
   return ans;
 
}     
