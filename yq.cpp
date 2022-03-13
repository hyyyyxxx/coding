#include<iostream> 
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int n;
	bool check = 0;
	string SProvince,SCity,Str;
	freopen("yq_in.txt","r",stdin);
	freopen("yq_out.txt","w",stdout);
	while(cin>>SProvince){
		cin>>SCity;
		cin>>n;
		if(SProvince != Str){
			if(check){
				printf("\n");
			}
			check=1;
			cout<<SProvince<<endl;
		}
		Str=SProvince;
		cout<<SCity;
		printf("\t%d\n",n);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
