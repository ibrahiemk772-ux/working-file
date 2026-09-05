#include<iostream> 
using namespace std;
void bubblesort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; i++)
        {
            if(arr[j+1] < arr[j])
            {
                swap(arr[j+1], arr[j]);
            }
        }
    }
}
int main() 
{
int arr[] = {2, 4,1,5,3};
int n = 5;
bubblesort(arr, n);
for(int i = 0; i < n; i++)
{
    cout<<arr[i];

}
return 0;
}