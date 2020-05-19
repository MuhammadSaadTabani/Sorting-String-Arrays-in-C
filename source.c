#include<stdio.h>

void main(void) {
	char vowel[5] = { 'e','a','u','o','i' };
	char ch;
	for (int i = 1; i < 5; i++) {
		for (int j = 0; j < 5 - i;j++) {
			if (vowel[j] > vowel[j + 1]) {
				ch = vowel[j];
				vowel[j] = vowel[j + 1];
				vowel[j + 1]= ch;
			}
		}
		
	}
	for (int i = 0; i < 5; i++) {
		printf("%c,", vowel[i]);
	}
}
