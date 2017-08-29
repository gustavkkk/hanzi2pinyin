// hz2mw.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "hz2py2.h"

int main(int argc, char* argv[])
{
	int argv2len;
	int i, j;
	char query[4] = "怎";

#ifndef _DEBUG
	if (argc < 2)
		return 0;

	printf("%s ", argv[1]);
	argv2len = strlen(argv[1]);
	for (i = 0; i < argv2len; i += 2) {
		memcpy(query, &(argv[1][i]), 2);
		query[3] = '\0';
		//printf( "%s,%s ",query,getcnchar(query  ) ) ;
		printf("%s_", getcnchar(query));
	}
	printf("\n");
#else
	char *txt = "我不知道怎么做";
	printf("%s ", txt);
	argv2len = strlen(txt);
	for (i = 0; i < argv2len; i += 2) {
		memcpy(query, &(txt[i]), 2);
		query[3] = '\0';
		//printf( "%s,%s ",query,getcnchar(query  ) ) ;
		printf("%s_", getcnchar(query));
	}
	printf("\n");
#endif

	return 0;
}

