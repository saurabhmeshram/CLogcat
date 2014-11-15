#ifndef __HEAD_H__
#define __HEAD_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

int x;

typedef enum log_level
{
	LOG_DEBUG,
	LOG_ERR,
	LOG_INFO,
	LOG_VERB,
	LOG_WARN,
}log_level_t;

#endif

