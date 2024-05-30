#ifndef _INIT_H_
#define _INIT_H_

#include <proto/exec.h>
#include <proto/dos.h>
#include <stdint.h>
#include "../src/fcatomic.h"

#define FC_CACHE_MAX_LEVEL 16

struct FcCacheSkip {
    FcCache	    *cache;
    FcRef	    ref;
    intptr_t	    size;
    void	   *allocated;
    dev_t	    cache_dev;
    ino_t	    cache_ino;
    time_t	    cache_mtime;
    long	    cache_mtime_nano;
    struct FcCacheSkip	    *next[1];
};

struct FcStrSet {
    FcRef	    ref;	/* reference count */
    int		    num;
    int		    size;
    FcChar8	    **strs;
    unsigned int    control;    /* control bits for set behavior */
};

struct FontconfigLibrary
{
    struct Library libNode;
    BPTR segList;
    /* If you need more data fields, add them here */
    void *fcCacheChains[FC_CACHE_MAX_LEVEL];
    int	fcCacheMaxLevel;
    FcConfig *_fcConfig; /* MT-safe */
    FcStrSet *default_langs;
    APTR cache_lock;
    APTR _lock;
    FcBool _FcConfigHomeEnabled;
};

extern struct FontconfigLibrary *fontconfigBase;

#endif