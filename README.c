# reverse-parse
#include <stdio.h>
#include <string.h>
 main()
  {
	char s[100];int i;
	gets(s);
	int l=strlen(s);
	for(i=l-1;i>=0;i--)
	{
	 printf("%c",s[i]);
	 printf("-");
	}
}
