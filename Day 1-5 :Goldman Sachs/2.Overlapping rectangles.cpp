Link: https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/

Expected Time Complexity:O(1)
Expected Auxillary Space:O(1)

//C++ Solution

class Solution {
 public:
   int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
       // code here
       //If one rectangle is on left side of the left edge of the other rectangle
       if(L1[0]>R2[0] || L2[0]>R1[0])
           return false;
       //If one rectangle is above the other
       if(L1[1]<R2[1] || L2[1]<R1[1])
           return false;
       return true;
   }
};
