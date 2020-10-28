#include <stdio.h>
#include <string.h>
#define MAX 100

void squeeze (char s[], int c);

int main () {
 char str0[MAX], c;
 int i;

 for (i = 0; (c = getchar()) != '\n'; i++)
   str0[i] = c;
 str0[i] = '\0';

 c = '#';

 squeeze (str0, c);

 printf("%s\n", str0);
}

void squeeze (char s[], int c) {
 int i, j;

 for (i = j = 0; s[i] != '\0'; i++)
   if (s[i] != c)
     s[j++] = s[i];
 s[j] = '\0';
}
