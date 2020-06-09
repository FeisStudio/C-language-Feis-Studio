#include<stdio.h>
//變數名稱
////第一种：全域變數(Global variable)
////		1.宣告在函式定義外
////		2.因為容易造成名稱污染，請避免使用全域變數
//int i;
//
//int main()
//{
//	return 0;
//}
//
////第二种：区域變數(Local variable)
////		宣告在函式定義内
//int main()
//{
//	int i;
//	return 0;
//}
//
////第三种：函式叄數(Formal parameter)
//int f(int i) 
//{
//	return 0;
//}

//int i = 1;
//int main()
//{
//	printf("%d\n", i);
//	//1
//	int i = 2;
//	printf("%d\n", i);
//	//2
//	{
//		printf("%d\n", i);
//		//2
//		int i = 3;
//		printf("%d\n", i);
//		//3
//	}
//	printf("%d\n", i);
//	//2
//	return 0;
//}

//int i = 5;
//int f() {
//	i = i + 1;
//	printf("%d\n", i);
//	//6
//	return 0;
//}
//
//int main() {
//	printf("%d\n", i);
//	//5
//	int i = 6;
//	i = i + 1;
//	f();
//	printf("%d\n", i);
//	//7
//	return 0;
//}


int main() {
	int i = 3;
	printf("%d\n", i);
	//3
	if (i == 3) {
		i = i + 1;//4
		int i = 6;//6
		printf("%d\n", i);//6
		i = i + 1;//7
	}
	if (i == 3) {
		printf("%d\n", i);
	}
	return 0;
}



