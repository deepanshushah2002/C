#include<iostream>
using namespace std;
void copy(int arr[],int size)
{
    int crr[size];
    for(int i=0;i<size;i++)
{
    crr[i]=arr[i];
}
for(int i=0;i<size;i++)
{
    cout<<crr[i]<<"  ";
}
}
int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[100];
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    copy(arr,size);

}
