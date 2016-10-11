
#ifndef __PARAM_HELPER_H__
#define __PARAM_HELPER_H__

#include <stdio.h>

#undef KEY_MAX_LEN
#define KEY_MAX_LEN	16

#undef VAL_MAX_LEN
#define VAL_MAX_LEN	16

#undef PARAMS_MAX_LEN
#define PARAMS_MAX_LEN	18

typedef char *	PCHAR;
typedef char	CHAR;
typedef int		INT;

struct param_dic
{
	CHAR key[KEY_MAX_LEN];
	CHAR val[VAL_MAX_LEN];
};

void get_param_dic (struct param_dic * dic, PCHAR url);

#endif // __PARAM_HELPER_H__
