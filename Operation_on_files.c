#include<stdio.h>
/*fopen fun is used to open a file and perform on it something
syntax: fopen("filename.extension","mode to open file with");
there are three mode s to open file with
1>r : read mode,r+ :read + write mode
2>w : write mode,w+ :write + read mode
3>a : appand mode it will find last character of file and start writing from there
	  a+ : read +write mode.*/ 

int main(){
	FILE* f char buffer[120];//pointer to point the file
	f=fopen("Test.txt","r");//here test,txt is file name and r is reading mode.
	fgets(buffer,120,f);//fgetc()is a function reads only one character at a time
	return 0;
}