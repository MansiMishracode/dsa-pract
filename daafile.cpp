#include<iostream>
using namespace std;
int sum (int arr[],int size){
   int ans=0;
   for(int i=0;i<size;i++){
      ans=arr[i]+ans;
   }
    return ans;
  
}
int main(){
   int size;
   cin>>size;

   int arr[100];
   for(int i=0;i<size;i++){
      cin>>arr[i];
   }
   int result =sum(arr,size);
   cout<<result<<endl;
   return 0;
}