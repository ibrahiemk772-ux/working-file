#include<iostream>
using namespace std;

class maxheap{
    public:
    
    int * arr;
    int size;
    int maxsize;
    maxheap(int n){
    arr = new int[n];
    size = 0;
    maxsize = n;
    }

    void insert(int data){
    if(size == maxsize){
        cout << "Heap is full" << endl;
    }
    arr[size] = data;
    int index = size;
    size++;
    int parent = (index -1)/2;
    while(index > 0 )
    {
        if(arr[parent] >= arr[index])
            break;
        swap(arr[index], arr[parent]);
        index = parent;
        parent = (index - 1) / 2;
    }
    

}
void display(){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
};



int main(){
    maxheap h(4);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(1);
    h.display();
    return 0;
}