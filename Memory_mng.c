#include<stdio.h>//to include functions like printf and scanf and all basic functions of c
#include<string.h>
#include<stdlib.h>//For memory manipulation
#include<math.h>//to perform several math tasks
#include<time.h>//to include time related task
/*string types
strlen(string_name)	Returns the length of string name.
strcpy(s1, s2)	Copies the contents of string s2 to string s1.
strcmp(str1, str2)	Compares the first string with the second string. If strings are the same it returns 0.
strcat(s1, s2)	Concat s1 string with s2 string and the result is stored in the first string.
strlwr()	Converts string to lowercase.
strupr()	Converts string to uppercase.
strstr(s1, s2)	Find the first occurrence of s2 in s1
*/
int main(){
	int a=malloc(20);
	printf("%d",a);
	return 0;
}