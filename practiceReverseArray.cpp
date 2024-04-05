#include<iostream>
#include<vector>

using namespace std;

vector <int> reverse(vector<int>v){
	
	int m = 2;
	int s=m+1, e=v.size()-1;
	while(s<=e){
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;
}

void print(vector<int>v){
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	
	vector<int> v;
	
	v.push_back(11);
	v.push_back(3);
	v.push_back(4);
	v.push_back(1);
	v.push_back(8);
	v.push_back(9);
	
	for(int i:v){
		cout<<i<<" "<<endl;
	}
	
	vector<int> ans=reverse(v);
	
	cout<<"reverse array"<<endl;
	print(ans);
}