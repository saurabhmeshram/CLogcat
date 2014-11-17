#include "head.h"


char *log_level_str[] = 
{
	"LOG_ALL",
	"LOG_DEBUG",
	"LOG_ERR",
	"LOG_INFO",
	"LOG_WARN",
};


int32_t main(void)
{
	log_level_t a = LOG_ERR;
	printf("Log level : [%d]\n", a);
	printf("Log level : [%s]\n", log_level_str[a]);
	printf("Log level : [%d]\n", x);
	get_time();
	return 0;
}
