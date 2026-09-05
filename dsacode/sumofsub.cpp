#include <iostream>
using namespace std;
void sumofsub(int arr[], int n, int target, int index, int subset[], int size, int sum)
{
    if(index == n)
    {
        if(sum == target)
        {
            cout<<"[";
            for(int i = 0; i< size; i++)
            {
                cout<<subset[i]<<" ";

            }
            cout<<"]";
        }
        return;
    }
    subset[size] = arr[index];
    sumofsub(arr, n, target , index+1, subset, size+1, sum + arr[index]);
    sumofsub(arr, n, target, index+1, subset, size, sum);

}
int main()
{
    int arr[] = {5,10, 12, 13, 15, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 30;
    int subset[100];

    sumofsub(arr, n, target, 0, subset, 0, 0);
   
    return 0;
}