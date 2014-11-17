#include "head.h"
#include <time.h>
int get_time()
{
struct timeval val;
time_t tmp;
if(-1 == gettimeofday(&val, NULL))
{
	printf("gettimeofday Failed\n");
	exit(EXIT_FAILURE);
}
printf("Time: %d:%d\n", val.tv_sec);

tmp = (time_t) val.tv_sec;
//ctime((time_t) val.tv_sec);
ctime(&tmp);
printf("Time: %d:%d:%d\n", tmp.tm_hour, tmp.tm_min, tmp.tm_sec);
return 0;

}
