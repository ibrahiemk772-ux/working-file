#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<string> helper(int n, int m)
    {
      if(n == 0) return {""};
      if(n == 1)
      return {"0", "1", "8"};
      vector<string> middle = helper(n-2, m);
      vector<string> result;
      for (string  s : middle)
      {
        if(n != m)
        {
            result.push_back("0" + s + "0");
           


        }
         result.push_back("1" + s + "1");
         result.push_back("6" + s + "9");
         result.push_back("8" + s + "8");
         result.push_back("9" + s + "6");
         


      }
      return result;
    }
    vector<string> findStrobogrammatic(int n)
    {
        return helper(n, n);
    }
};
int main()
{
    solution obj;
    int n = 2;
    vector<string> ans = obj.findStrobogrammatic(n);
    for(string s : ans)
    {
        cout<<s<<" ";
    }
    cout<<endl;
    return 0;
}
