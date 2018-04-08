#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
using namespace std;
class Solution{
    public:
      int coverPoints(vector<int> &A,vector<int> &B){
          int result=0;
          if(A.size()<=1)   
          return 0;
          assert(A.size()==B.size());
          
          for(int i=1;i<A.size();i++){
              result += max( A[i]-A[i-1], B[i]-B[i-1] );
          }
      return result;
      }
};

int main(){
    vector<int> X{0,1,1};// x- coordinates
    vector<int> Y{0,1,2};// y-coordinates
    
    Solution S;
    int result= S.coverPoints(X,Y);
    cout<<result<<"\n";
    return 0;
}