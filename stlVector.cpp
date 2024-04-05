#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<int> v;
	cout<<"capacity ->"<<v.capacity()<<endl;
	
	v.push_back(1);
	cout<<"Capacity ->"<<v.capacity()<<endl;
	
	v.push_back(2);
	cout<<"Capacity ->"<<v.capacity()<<endl;
	
	cout<<"Size ->"<<v.size()<<endl;
	
	cout<<"Element at 2nd Index"<<v.at(2)<<endl;
	
	cout<<"Front"<<v.front()<<endl;
	cout<<"Back"<<v.back()<<endl;
	
	cout<<"Before pop"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}
	
	v.pop_back();
	
	cout<<"After pop"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}
	
}