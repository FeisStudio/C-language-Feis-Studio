#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

//int main() {
//	char source[5] = "test";
//	char destination[5];
//	
//	destination = source;// (X) ���gʧ��
//
//	printf("%s\n", destination);
//
//	return 0;
//}

//int main() {
//	char source[5] = "test";
//	char *destination;
//
//	// �\�}�u��shallow copy) [ͬһ��]
//	destination = source;
//
//	printf("%s\n", destination);
//
//	return 0;
//}

//int main() {
//	char source[5] = "test";
//	char destination[5];
//
//	// ���}�u��deep copy)
//	int i;
//	for (i = 0; i < 5; i++) {
//		destination[i] = source[i];
//	}
//
//	printf("%s\n", destination);
//
//	return 0;
//}

int main() {
	const char *source = "test";
	//char source[5] = "test";
	char destination[5];

	strcpy(destination, source);

	printf("%s\n", destination);

	return 0;
}
