#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int partition(int a[],int l,int r){
     int pivot=a[r];
     int i=l-1,j=l;
     for(j=l;j<=r-1;j++){
        if(a[j]<pivot){
            i++;
        swap(a,i,j);}

     }swap(a,i+1,r);
     return i+1;
}

void quick(int a[],int l,int r){
if(l<r){
    int pi=partition(a,l,r);
quick(a,l,pi-1);
quick(a,pi+1,r);
}
}

void count(int a[],int n){
    int i,b[100]={0};
    for(i=0;i<n;i++){
        b[a[i]]++;
    }
    for(i=0;i<100;i++){
      if(b[i]!=0){cout<<i<<" ";}
    }
    
}

int sum(int x,int n){
    if(x==n){return n;}
    int s=0;
    s=x+sum(x+1,n);
    return s;
}

int main(){
    // int w;
    // cin >> w;
    
    // while(w--){
    //     int n;
    //     cin >> n;
    //     vector<int> v;
        
    //     for(int i = 0; i < n; i++){
    //         int num;
    //         cin >> num;
    //         v.push_back(num); 
    //     }
        
    //     sort(v.begin(), v.end()); 
        
    //     int count = 1; 
    //     for(int i = 1; i < n; i++){
    //         if(v[i] == v[i - 1]){
    //             count++;
    //         }
    //         else{
    //             break;
    //         }
    //     }
        
    //     if(count == n){
    //         cout << "-1" << endl;
    //     }
    //     else{
    //         cout << count << " " << n - count << endl;
            
            
    //         for(int i = 0; i < count; i++){
    //             cout << v[i] << " ";
    //         }
    //         cout << endl;
            
            
    //         for(int i = count; i < n; i++){
    //             cout << v[i] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

// int a[]={3,2,1,4,5};
// quick(a,0,4);
// for(int i=0;i<5;i++){
//     cout<<a[i]<<" ";
// }
     

// int a[]={4,2,1,4,5};
// count(a,5);


    
 

    


}
