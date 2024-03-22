#include <iostream>
using namespace std;
class Solution{
    //Function to find the leaders in the array
    public:
    vector<int> leaders(int a[], int n){
        vector<int>ans;
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]<a[j]) 
                {
                   flag=true;
                   break;
                }
                
            } 
              if(!flag) ans.push_back(a[i]);
              flag=false;
        } 
        ans.push_back(a[n-1]); 
        return ans;
    }
};
int main()
{
}