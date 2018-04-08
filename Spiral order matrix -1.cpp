#include<iostream>
#include<vector>
using namespace std;
class Solution{
      public:
          vector<int> spiralorder(const vector< vector<int> > &A){
                 vector <int> result;
                 int rows=A.size();
                 int columns=A[0].size();
                 int top=0;
                 int left=0;
                 int bottom=rows-1;
                 int right=columns-1;
                 int dir=0;

                LOOP: while(top<=bottom && left<=right){
                            if(dir==0){
                                for(int j=left;j<=right;j++)
                                    result.push_back(A[top][j]);
                                    top++;
                                    dir=1;
                                    goto LOOP;
                            }
                            else if(dir==1){
                                for(int i=top;i<=bottom;i++)
                                    result.push_back(A[i][right]);
                                    right--;
                                    dir=2;
                                    goto LOOP;
                            }
                            else if(dir==2){
                                for(int j=right;j>=left;j--)
                                    result.push_back(A[bottom][j]);
                                    bottom--;
                                    dir=3;  
                                    goto LOOP;
                            }
                            else if(dir==3){
                                for(int i=bottom;i>=top;i--)
                                    result.push_back(A[i][left]);
                                    left++;
                                    dir=0;
                                    goto LOOP;
                            }
                        }
                return result;
          }
};
int main(){
    int x;
    vector<vector<int> > A(3,vector<int> (3) );
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            cin>>x;
            A[i][j]=x;
        }
    Solution S;
    vector<int> result;
    result=S.spiralorder(A);
    for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
    }

