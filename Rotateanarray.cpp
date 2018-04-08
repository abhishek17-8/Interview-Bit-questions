#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> rotateArray(vector<int> &A,int  b){
               vector<int> ret;
            for(int i=0;i<A.size();i++){
                ret.push_back(A[(i+b)%(A.size())]);
            }
            return ret;
        }
    
};

int main(){
    int x;
    int number;
    cout<<"enter the number of times you want to  rotate an array:";
    cin>>number;
    vector<int> A(5);
    for(int i=0;i<5;i++){
            cin>>x;
            A[i]=x;
    }
    
    Solution S;
    vector<int> result;
    result= S.rotateArray(A,number);
    for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
}
