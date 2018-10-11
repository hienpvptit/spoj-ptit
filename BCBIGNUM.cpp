#include<iostream>
using namespace std;

string cong(string s1, string s2){	//cong 2 so nguyen lon
	while (s1.length()<s2.length()) s1 = '0'+s1;
	while (s2.length()<s1.length()) s2 = '0'+s2;
	string s="";
	int t=0,nho=0,du=0;
	for (int i=s1.length()-1; i>=0; i--){
		t=s1[i]-'0'+s2[i]-'0'+nho;
		nho=t/10;
		char t1=t%10+'0';
		s.insert(0,1,t1);
	}
	if (nho==1) s='1'+s;
	return s;
}

string tru(string s1,string s2){	//tru 2 so nguyen lon
	while (s1.length()<s2.length()) s1 = '0'+s1;
	while (s2.length()<s1.length()) s2 = '0'+s2;
	string s="";
	int ok=0;
	if (s1<s2) { 
		s1.swap(s2);
		s="-";
		ok=1;
	}
	int t=0,nho=0,du=0;
	for (int i=s1.length()-1; i>=0; i--){
		t=s1[i]-'0'-(s2[i]-'0')-nho;
		if (t<0) {
		t=t+10;
		nho=1;
		} else nho=0;
		char t1=t%10+'0';
		if (ok==1) s.insert(1,1,t1);
		else s.insert(0,1,t1);
	}
	while (s[0]=='0') s.erase(0,1);
	while (s[0] == '-' && s[1]=='0') s.erase(1,1);
	if (s=="") s="0";
	return s;
}

string nhan2(string s1, string s2){	//nhan 2 so nguyen lon
	while (s1.length()<s2.length()) s1 = '0'+s1;
	while (s2.length()<s1.length()) s2 = '0'+s2;
	string kq="";
	int nho =0;
	for(int i = s1.length() + s2.length() - 1 ;i>=0;i--){
		int dem = 0;
		for(int j = s1.length() - 1;j>=0;j--){
			if(i-j -1 < s2.length() && i - j -1 >= 0){
				int x = s1[j]-'0';
				int y = s2[i-j-1]-'0';
				dem +=  x*y;
			}
		}
			dem+=nho;
		char t=dem%10+'0';
		nho = dem/10;
		kq.insert(0,1,t);
	}
	while(kq[0] == '0' && kq.length() >1) kq.erase(0,1);
	return kq;
}


int main(void)
{
	string A,B;
	cin>>A>>B;
	cout<<cong(A,B)<<endl;
	cout<<tru(A,B)<<endl;
	cout<<nhan2(A,B);
 return 0;
}

