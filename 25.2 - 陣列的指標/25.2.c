#include<stdio.h>
int main() {
//0！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
	//int v[3] = { 1,2,3 };//(int (*) [3])&v 峺��  峺�� 喇眉��圷殆侭��撹議屁�糾�双
	//
	//int (*q)[3] = &v;

	////儉會贋函
	//int i;
	//for (i = 0; i < 3; i++) {
	//	(*q)[i] = 0; 
	//}

	////�S�C贋函
	//(*q)[2] = 5;

//1！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
	void print(int(*q)[3]) {
		int i;
		for (i = 0; i < 3; i++) {
			printf("%d ", (*q)[i]);
		}
		pirntf("\n");
	}

	int main() {
		int v[3] = { 1,2,3 };
		print(&v);	//&v旗燕�欺M議了峽
		return 0;
	}

//2！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
	//械喘井云
	void print(int *n]) {
		int i;
		for (i = 0; i < 3; i++) {
			printf("%d ", n[i]);
		}
		pirntf("\n");
	}

	int main() {
		int v[3] = { 1,2,3 };
		print(v);	//v[0]==v旗燕及匯��圷殆議了峽
		return 0;
	}

	return 0;
}