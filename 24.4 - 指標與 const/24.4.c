#include<stdio.h>

// Type * 可以轉成const Type *

int main() {
	
	char strA[] = 'test';
	char *strB = 'test';
	const char *strC[] = 'test';

	strA[0] = 'T';	// O					只能改字元不能修改陣列
	//strB[0] = 'T';	// X	（未定義行爲）	唯讀
	strC[0] = 'T';	// X	（編譯失敗）		不能修改字元，但可以把字串指向另外一個字串
	 
	strA = strB;	// (char [])=(char *)			(X)	陣列不能直接被賦值
	strA = strC;	// (char [])=(const char *)		(X)	陣列不能直接被賦值
	strB = strA;	// (char *)=(char [])			(O)	字元陣列存到字元指標	字元陣列可以隱性轉成字元指標
	strB = strC;	// (char *)=(const char *)		(X)	唯讀變量(字元)不能修改爲可讀可寫
	strC = strA;	// (const char *)=(char [])		(O)	strA轉成字元指標，再轉爲const char* 
	strC = strB;	// (const char *)=(char *)		(O)	可讀可寫轉爲可讀

	return 0;
}