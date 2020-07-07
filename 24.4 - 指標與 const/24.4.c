#include<stdio.h>

// Type * 可以轉成const Type *

int main() {
	
	char strA[] = 'test';
	char *strB = 'test';
	const char *strC[] = 'test';

	strA[0] = 'T';	// O					只能改字元不能修改陣列
	strB[0] = 'T';	// X	（未定義行爲）
	strC[0] = 'T';	// X	（編譯失敗）		不能修改字元，但可以把字串指向另外一個字串

	strA = strB;	// (char [])=(char *)			(X)
	strA = strC;	// (char [])=(const char *)		(X)
	strB = strA;	// (char *)=(char [])			(O)
	strB = strC;	// (char *)=(const char *)		(X)
	strC = strA;	// (const char *)=(char [])		(O)
	strC = strB;	// (const char *)=(char *)		(O)

	return 0;
}