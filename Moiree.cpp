#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include<stdlib.h>

using namespace std;
void znajdz(string wzor, string tekst)
{
	int M;
	int N;
	int r=0;
	
	M=wzor.length();
	N=tekst.length();
	
	int shift[128];
	for(int i=0; i<128; i++){
		shift[i]=M;
	}
	
	for (int i=M-1;i>=0;i--){
		if(shift[wzor[i]]<M){
			continue;
		}else{
			shift[wzor[i]]=M-1-i;
		}
	}
	if(N>=M){
		int j=M-1;
		int i=M-1;
		while(j>0){
			while(tekst[i]==wzor[j]){
				while(tekst[i]==shift[r]){
					r++;
				};
				
				if(M-j>r){
					i=i+(M-j);
					
				}
				else(i=i+shift[r]);
				if(i>tekst.length()) 
				cout<<"No match";
				}
				i--;
				j--;
				cout<<i<<" ";	
					};
			}else cout<<"No match";
}
int main(){
	string tekst="jeden_dwa_trzy_cztery_piec";
	string wzor;
	cout<<"Text:"<<tekst<<endl;
	cout<<endl;
	cout<<"Pattern to look for:"<<endl;
	cin>>wzor;
	cout<<endl<<"Pattern found at: ";
	znajdz(wzor, tekst);
	cout<<endl;
	system("pause");
	return 0;
}
