#include<iostream>
using namespace std;

int TPLien_Thong(int A[101][101], int n) {
   char*DanhDau = new char [n];
   char ThanhCong;
   int Dem=0, i,j, MLT=0;
   for( i = 0; i<n; i++)         //Kh?i t?o m?i d?nh chua du?c d�nh d?u
      DanhDau[i] = 0;
   do {   
    j = 0;
      while(DanhDau[j]==1)   //B1: T�m 1 d?nh chua du?c d�nh d?u
         j++;
      DanhDau[j] = 1;      //��nh d?u d?nh t�m du?c
      Dem++;         //Tang s? d?nh du?c d�nh d?u l�n 1
      MLT++;         //Tang mi?n li�n th�ng l�n 1
      do {
         ThanhCong =0;   //Gi? s? kh�ng c�n kh? nang loang
         for(i = 0; i<n; i++)
         if(DanhDau[i]==1)
            for(j = 0; j<n; j++)
            if (DanhDau[j] == 0 && A[i][j] > 0) {
               DanhDau[j] = 1;
               ThanhCong =1;   //C�n kh? nang loang
               Dem++;
               if(Dem == n) return MLT;
            }
      }while (ThanhCong == 1);   //L?p khi c�n kh? nang loang
   } while(Dem<n);         //L?p khi c�n t?n t?i d?nh chua du?c d�nh d?u
   return MLT;
}

int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		int A[101][101];
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
				cin>>A[i][j];
		int LT,vt,max=1;
		for(int i=0;i<N;i++)
		{
			int B[101][101];
			for(int p=0;p<N;p++)
				for(int q=0;q<N;q++)
					B[p][q]=A[p][q];
			for(int j=0;j<N;j++)
			{
				B[i][j]=0;
				B[j][i]=0;			
			}
			LT = TPLien_Thong(B,N);
			if(LT!=1)
				LT-=1;
			if(LT>max)
			{
				max = LT;
				vt = i;
			}
		}
		if(max==1)
			cout<<0;
		else
			cout<<vt+1;
		if(T!=0)
			cout<<endl;
	}
 return 0;
}

