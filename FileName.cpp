#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

char* Change(char str[], char str2[], char str3[], int size, char newstr[]) {
	char rz[] = " ,.!?;";
	char* p = strtok(str, rz);	int r = 0;
	while (p != NULL) {
		if (strcmp(p, str2) == 0) {
			for (int i = 0; i < strlen(str3); i++) {
				newstr[r] = str3[i]; r++;
			}
		}
		else {
			for (int i = 0; p[i] != NULL; i++) {
				newstr[r] = p[i]; r++;
			}
		}		newstr[r] = ' '; r++;
		p = strtok(NULL, rz);
	}	newstr[r] = '\0'; r++;
	return newstr;
}

int main() {
	const int Size = 1000;
	char str[Size]; cin.getline(str, Size);
	char str2[50]; cin.getline(str2, 50);
	char str3[50]; cin.getline(str3, 50);

	return 0;
}