#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define pb push_back


 
const ll mod=1e9+7;
 
using namespace std;
 
const int N=1e3+10;



const int inf=1e9;

static bool should_i_swap(const pair<int,int>&a ,const pair<int,int> &b){
	
	return a.second<b.second;// b ki second  value a se badi rakhni hai  
}








int main(){


	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}


    
    long long  sum=0;
    
    long long maxi=INT_MIN;
    
    for(int i=0;i<n;i++){
    	sum+=a[i];

    	maxi=max(maxi,sum);
    	if(sum<0){
    		sum=0;
    	}

    }

	cout<<maxi;
}
















