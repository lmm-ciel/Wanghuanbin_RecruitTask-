#include "Matrix.h"

int* M_add(){
	int n,m;
	int a[101][101],b[101][101],c[101][101]={0};
	cout<< "����ӷ���������������2 3��" << endl;
	cin >> n >> m;
	cout<< "�������飺" << endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> b[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			c[i][j]=a[i][j]+b[i][j];
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return (int*)c;
} 

int* M_subtract(){
	int n,m;
	int a[101][101],b[101][101],c[101][101]={0};
	cout<< "���������������������2 3��" << endl;
	cin >> n >> m;
	cout<< "�������飺" << endl;	
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> b[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			c[i][j]=a[i][j]-b[i][j];
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return (int*)c;
}

int* M_multiply(){
	int n,m,k;
	int a[101][101],b[101][101],c[101][101]={0};
	cout<< "����˷���������a����������������b�����������3 4 4 3��" << endl;
	cin >> n >> m >> k;
	cout<< "�������飺" << endl;	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			cin >> b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			for(int z=0;z<m;z++){
				c[i][j]+=a[i][z]*b[z][j];
			}
			cout << c[i][j] << " ";
		}
		cout << endl;
	} 
	return (int*)c;
}

int* M_scalar_multiply(){
	int n,m,multiple;
	int a[101][101],c[101][101]={0};
	cout<< "�������ˣ����������кͳ�����2 3 10��" << endl;
	cin >> n >> m >> multiple;
	cout<< "�������飺" << endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			c[i][j]=a[i][j]*multiple;
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return (int*)c;
}

int main()
{
	M_add();
	M_subtract();
	M_multiply();
	M_scalar_multiply();
}


