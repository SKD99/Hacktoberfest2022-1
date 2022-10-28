#include <iostream>
using namespace std; 
int firstPosition(int arr[], int n, int key)
{
   int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
  //first Occurrence  
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;        
        }
            else if(key>arr[mid]){
                s=mid+1;
                }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int LastPosition(int arr[], int n, int key)
{
   int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
  // Last Occurrence
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;        
        }
            else if(key>arr[mid]){
                s=mid+1;
                }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
int even[6]={1,2,3,3,3,5};
cout<<"First Occurrence of 3 is at Index "<<firstPosition(even,6,3)<<endl;
cout<<"Last Occurrence of 3 is at Index "<<LastPosition(even,6,3)<<endl;
 int no_of_Occurrence=(LastPosition(even,6,3)-firstPosition(even,6,3))+1;
cout<<no_of_Occurrence<<" "<<endl;
return 0;
}