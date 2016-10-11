
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "param_helper.h"

int main(void)
{
	int i = 0;
	struct param_dic params[PARAMS_MAX_LEN];
	char url[] = "GET /?ddda=1ee&b=dd2&cd=dd3&dd=4dd&dddf=00&ff HTTP/1.1";
    
	memset(params, 0, sizeof(struct param_dic) * PARAMS_MAX_LEN);
	get_param_dic(params, url);

	for (; i < PARAMS_MAX_LEN ; i++ )
	{
		printf("\r\n%d - %s=%s", i, params[i].key, params[i].val);
	}
}