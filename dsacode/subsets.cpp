#include<iostream>
#include<vector>
using namespace std;
void subsets(vector<int>& temp, int arr[], int n, int target, int index)
{
 if(target == 0)
 {
    cout<<"[";
    for(int i = 0; i<temp.size(); i++)
    {
        cout<<temp[i]<<" ";
    }
        cout<<"]";
        return;
    cout<<endl;

 }
 if(index == n)

 {
    return;
 }
    temp.push_back(arr[index]);
    subsets(temp, arr, n,target-arr[index], index+1);
    temp.pop_back();
    subsets(temp, arr, n, target, index+1);
}
int main()
{
    int arr[] = {5,10, 12, 13, 15, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 30;
    vector<int> temp;
    subsets(temp, arr,n ,30, 0);
    return 0;
}
