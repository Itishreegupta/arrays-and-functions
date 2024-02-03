#include<iostream>
using namespace std;
int main()
{
    long int arr1[100], arr2[100], arr_Merge[200];
	int size1,size2,i,k;
    cout<<"Enter the Size for First Array: ";
    cin>>size1;
    cout<<"Enter "<<size1<<" Elements for First Array: ";
    for(i=0; i<size1; i++)
    {
        cin>>arr1[i];
        arr_Merge[i] = arr1[i];
    }
    k = i;
    cout<<endl<<"Enter the Size for Second Array: ";
    cin>>size2;
    cout<<"Enter "<<size2<<" Elements for Second Array: ";
    for(i=0; i<size2; i++)
    {
        cin>>arr2[i];
        arr_Merge[k] = arr2[i];
        k++;
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<k; i++)
        cout<<arr_Merge[i]<<" ";
        cout<<endl;
}