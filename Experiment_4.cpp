#include <iostream>
using namespace std;

int main (){ 
    int n; 
    int count = 0; 
    int Frame1[40]; 
    int Frame2[40]; 
    int j = 0;      
    int i;          

    cout<< "Enter the size of Frame1 \n" ; 
    cin>>n ;        
    
    cout<< "Enter the number of bits for frame1 \n" ; 
    for(i=0 ; i<n ; i++ ){  
        cin>>Frame1[i]; 
    } 

    for(i=0 ; i<n ; i++){ 
        if(Frame1[i]==1){ 
            count++;        
            Frame2[j]=Frame1[i]; 
            j++; 
        }else{ 
            count=0; 
            Frame2[j]=Frame1[i]; 
            j++; 
        } 
        
        if(count==5){ 
            count =0; 
            Frame2[j]=0; 
            j++; 
        } 
    } 

    cout<< "The stuffed value is ";  
    for(int k=0; k<j; k++){          
        cout<<Frame2[k];
    }
    cout<<endl; 
    return 0;
}


