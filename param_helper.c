
#include <stdlib.h>
#include <string.h>
#include "param_helper.h"

void get_param_dic (struct param_dic * dic, PCHAR url) {
	PCHAR token, origin_str, found;
	INT index = 0, k = 0;
	
	// Step 1 - BEGIN
	token = strtok(url, " ");
    while(token) {
		if (token[0] == '/' &&
			token[1] == '?')
		{
			origin_str = token;
			break;
		}
        token = strtok(NULL, " ");
    }
	// Step 1 - END
	
	// Step 2 - BEGIN
	origin_str++;
	token = strtok(++origin_str, "&");
	while(token) {
		found = strstr(token, "=");
		if (found != NULL)// strstr() returns NULL if no string is found.
		{
			index = (found - token);
			memset(dic[k].key, 0, sizeof(dic[k].key));
			strncpy(dic[k].key, token, index);
			memset(dic[k].val, 0, sizeof(dic[k].val));
			strcpy(dic[k++].val, token + index + 1);
		}
        token = strtok(NULL, "&");
    }
	// Step 2 - END
}
