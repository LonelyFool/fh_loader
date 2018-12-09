#ifndef __PLATFORM_H__
#define __PLATFORM_H__

#ifdef WINDOWS
#include "stdafx.h"
#include <windows.h>
#include <direct.h>
#include <io.h>

#define GETCWD _getcwd
#define O_RDWR _O_RDWR
#define O_SYNC _O_SEQUENTIAL
#define sleep(x) Sleep(x*1000)

#define fseek _fseeki64
#define ftell _ftelli64
#else
#include <sys/types.h>
#include <sys/stat.h>
#include <termios.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

#define GETCWD getcwd
#define mkdir(x) mkdir(x, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH)
#define _stat64(a, b) stat
#endif

#endif
