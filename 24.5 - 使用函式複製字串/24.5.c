#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

//int main() {
//	char source[5] = "test";
//	char destination[5];
//	
//	destination = source;// (X) 編譯失敗
//
//	printf("%s\n", destination);
//
//	return 0;
//}

//int main() {
//	char source[5] = "test";
//	char *destination;
//
//	// 淺複製（shallow copy) [同一份]
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
//	// 深複製（deep copy)
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
