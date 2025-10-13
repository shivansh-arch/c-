#include<iostream>
using namespace std;

int main(){
    int arr[] = {-1,2,3};
    int maxx=arr[0];
    
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int psum=0;
        for(int j=i;j<n;j++){
            psum+=arr[j];
            maxx=max(maxx,psum);

           
            
            
            
            
        }
        
      

        cout<<endl;
        
       
    }
    cout<<maxx;
}