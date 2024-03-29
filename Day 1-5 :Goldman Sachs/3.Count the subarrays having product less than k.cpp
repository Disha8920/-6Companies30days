Link: https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/

//C++ Solution

class Solution{
 public:
   int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) 
   {
       long long int start=0,end=0,count=0,prod=1;
       while(end<n){
           prod*=a[end];
           while(start<n and prod>=k){
               prod=prod/a[start];
               start++;
           }
           if(prod<k)
           count+=end-start+1;
          
           end++;
       }
       return count;
   }
};
