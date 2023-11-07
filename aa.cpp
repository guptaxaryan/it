#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int coe;
    int expo;
    node* next;
};

void insertpoly(node * &head,int x,int y){
    node* nn=new node();
    nn->coe=x;
    nn->expo=y;
    nn->next=NULL;
    node*temp=head;
    //cout<<"lol";

    if(head==NULL){
        head=nn;
        return;
        //cout<<"NULL ";
    }
    
    while(temp->next!=NULL){
        temp=temp->next;
        //cout<<"fund \n";
    }
    
    temp->next=nn;
    
    

    //cout<<"sex ";
 
}

void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->coe<<"x"<<"^"<<temp->expo<<" ";temp=temp->next;
    }cout<<endl;
}

//  void reappear(node* &head){
// node* temp1=head;
// node* temp2;node* del;
// while(temp1->next!=NULL){temp2=temp1->next;
//     while(temp2->next!=NULL){
//      if(temp1->expo==temp2->expo){
//         temp1->coe=temp1->coe + temp2->coe;
//         del=temp2;
//         temp2=temp2->next;
//         del->expo=0;
//         del->coe=0;
//      }
//      else{temp2=temp2->next;}
//     }temp1=temp1->next;
// }

//  } 

// node* multiply(node* &h1,node* &h2){
//     node* temp1=h1;
//     node* temp2=h2;
//     node *h3=new node(-1,-1);
//     int c,ex;
//     while(temp1!=NULL){
//         while(temp2!=NULL)
//       {  
//         ex=temp1->expo+temp2->expo;
//         c=temp1->coe*temp2->coe;
//         insertpoly(h3,c,ex);
//         temp2=temp2->next;
        
//       }
//       temp2=h2;temp1=temp1->next;
//     }
// //reappear(h3);
    
//      return h3->next;
// }



node* add(node* &head1,node* &head2){
    node*r1=head1;
    node*r2=head2;
    node*h3=NULL;

       while(r1!=NULL && r2!=NULL){

        //cout<<"startloop \n";
        if(r1->expo==r2->expo){
            
            insertpoly(h3,r1->coe + r2->coe,r1->expo);
            r1=r1->next;
            r2=r2->next;
            //cout<<"pa \n";
        }
        else if(r1->expo > r2->expo){
            
            insertpoly(h3,r1->coe,r1->expo);
            r1=r1->next;
            //cout<<"na \n";
        }
        else{
        
        insertpoly(h3,r2->coe,r2->expo);
        r2=r2->next;
        //cout<<"ka \n";
        }
        //cout<<"pokemon \n";

       }

       //cout<<"lund";

        while(r1!=NULL){
            insertpoly(h3,r1->coe,r1->expo);
            r1=r1->next;
        }
         while(r2!=NULL){
            insertpoly(h3,r2->coe,r2->expo);
            r2=r2->next;
        }
        

       
 return  h3->next;
}

int main(){
//     int t,x;
//     cin>>t;
//     x=t;
//       vector<int>b;
//     vector<int>c;
// while(t--){
//     int n;int i,k;
//     cin>>n;
//     int a[n];
  

//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }

// sort(a,a+n);
// if(a[0]==a[n-1]){cout<<"-1"<<endl;break;}

// for(i=0;i<n;i++){
//    if(a[i]==a[n-1]){c.push_back(a[i]);}
//    else{b.push_back(a[i]);}
// }
// cout<<b.size()<<" "<<c.size();
// cout<<endl;

// for(auto x:b){
//     cout<<x<<" ";
// }cout<<endl;
// for(auto p:c){
//     cout<<p<<" ";
// }
// cout<<endl;
   


// }


 node *head=NULL;
 node*head1=NULL;
 insertpoly(head,1,2);
 insertpoly(head,2,1);
 insertpoly(head,3,3);
 display(head);
 insertpoly(head1,1,3);
 insertpoly(head1,2,1);
 insertpoly(head1,2,2);
 display(head1);
 node* h4=NULL;
 h4=add(head,head1);

 //cout<<"yy";
 display(h4);



}