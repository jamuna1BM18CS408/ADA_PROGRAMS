#include <bits/stdc++.h> 
using namespace std; 
int getMedian(int ar1[],int ar2[], int n) 
{ 
    int i = 0; 
    int j = 0; 
    int count; 
    int m1 = -1, m2 = -1; 
 for (count = 0; count <= n; count++) 
    {
        if (i == n) 
        { 
            m1 = m2; 
            m2 = ar2[0]; 
            break; 
        } 
     else if (j == n) 
        { 
            m1 = m2; 
            m2 = ar1[0]; 
            break; 
        } 
         if (ar1[i] < ar2[j]) 
        {       
            m1 = m2;  
            m2 = ar1[i]; 
            i++; 
        } 
        else
        { 
            m1 = m2;  
            m2 = ar2[j]; 
            j++; 
        } 
    }   
    return (m1 + m2)/2; 
}   
int main() 
{ 
    int n1;
    int ar1[50],ar2[50]; 
	cout<<"enter n1";
    cin>>n1;   
	for(int i=0;i<n1;i++)
	cin>>ar1[i]; 
    int n2;
    
    cout<<"enter n2";
    cin>>n2;
    
    for(int j=0;j<n2;j++)
	cin>>ar2[j]; 
    if (n1 == n2) 
        cout<<"Median is "<< getMedian(ar1, ar2, n1) ; 
    else
        cout<< "Doesn't work for arrays"<< " of unequal size" ; 
    getchar(); 
    return 0; 
} 
 
