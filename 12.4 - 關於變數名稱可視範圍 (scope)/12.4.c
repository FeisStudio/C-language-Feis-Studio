#include<stdio.h>
//׃�����Q
////��һ�֣�ȫ��׃��(Global variable)
////		1.�����ں�ʽ���x��
////		2.�������������Q��Ⱦ��Ո����ʹ��ȫ��׃��
//int i;
//
//int main()
//{
//	return 0;
//}
//
////�ڶ��֣�����׃��(Local variable)
////		�����ں�ʽ���x��
//int main()
//{
//	int i;
//	return 0;
//}
//
////�����֣���ʽ����(Formal parameter)
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



