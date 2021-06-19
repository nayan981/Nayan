#include<iostream>
#include<climits>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
void bubblesort(vector<int> arr){
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr.size()-i;j++){
			if(arr[j]>arr[j+1])
			{
				int k= arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=k;
			}
		}
	}
	for(int i=0;i<arr.size();i++){
	
			cout<<arr[i]<<endl;
			
	
	}
}

int linearsearch(vector<int> arr,int m){
	for(int i=0;i<arr.size();i++){
		if(arr[i]==m)
		return arr[i];
		
	}
	return 0;
}



 bool binary_search(vector<int> arr, int m){
 	int left =0;
 	int right= arr.size()-1;
 	while(left<=right){
	 
 		int mid = (left+right)/2;
 		if(m==arr[mid])
 		return true;
 		else if(arr[mid]>m)
 			right=mid-1;
 		else 
 			left =mid+1;
		 }
	 
	 return false;
 }



int main(){
	
		cout<<"The array is 30 67 4 89 3 12";
	int k ;
	cout<<"Enter element to be searched ";
	cin>>k;
	
	vector<int> arr;
	arr.push_back(30);
	arr.push_back(67);
	arr.push_back(4);
	arr.push_back(89);
	arr.push_back(3);
	arr.push_back(12);
	

	
	//bubblesort(arr);
	//int m =linearsearch(arr,6);
	
//	if(m!=0)
//	cout<<"yes";
//	else cout<<"no"<<endl;
	 cout<<binary_search(arr,4);
}
