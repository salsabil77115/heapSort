#include <iostream>

using namespace std;
void max_heap(int arr[],int Size,int i){
int right=2*i+2;
int left=2*i+1;
int largest=i;
if(left<Size&&arr[largest]<arr[left]){
    largest=left;
}
 if(right<Size&&arr[largest]<arr[right]){
    largest=right;
}
if(largest!=i){
    swap(arr[i],arr[largest]);
    max_heap(arr,Size,largest);
}


}

void heap_sort(int arr[],int n){
 for(int i=n/2-1;i>=0;i--){
        max_heap(arr,n,i);
    }
    for(int j=n-1;j>=0;j--){
        swap(arr[0],arr[j]);
        max_heap(arr,j,0);

    }




}
int main()
{

    int Size;
    int k ;
    cout<<"enter size for array:";
    cin>>Size;
    int arr[Size];
    cout<<"enter your array:"<<endl;
    for(int i=0;i<Size;i++){
    cin>>arr[i];}
   heap_sort(arr,Size);
   cout<<"Sorted array is : ";
   for(int i=0;i<Size;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}
