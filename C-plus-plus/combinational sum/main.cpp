#include <bits/stdc++.h>
using namespace std;

void recur(vector<vector<int>>&ans,vector<int>res,vector<int> num,int i, int sum,int n)
{
   if(sum<0) return ;
   if(sum==0)
   {
       ans.push_back(res);
       return;
   }
   if(i>=n) return;

   res.push_back(num[i]);
   recur(ans,res,num,i+1,sum-num[i],n);
   res.pop_back();
   while(i<n-1&&num[i]==num[i+1])i++;
   recur(ans,res,num,i+1,sum,n);
}


int main()
{
    vector<vector<int>> ans;
    vector<int> num;
    num.push_back(1);num.push_back(6);
    num.push_back(1);num.push_back(2);num.push_back(5);num.push_back(7);num.push_back(10);
    vector<int> res;

    sort(num.begin(),num.end());
    int sum=8;
    recur(ans,res,num,0,sum,7);

    for(unsigned int i=0;i<ans.size();i++)
    {
      cout<<"(";
      for(unsigned int j=0;j<ans[i].size();j++)
      {
          cout<<" "<<ans[i][j];
      }
      cout<<")";
    }
    if(ans.size()==0) cout<<"empty";
     cout<<endl;

    return 0;
}
