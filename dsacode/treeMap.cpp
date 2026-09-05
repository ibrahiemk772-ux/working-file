#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int , string> m;
    m[1] = "dawood";
    m[2] = "ibrahiem";
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
