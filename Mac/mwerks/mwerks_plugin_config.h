/*
** Config file for dynamically-loaded ppc/cfm68k plugin modules.
*/

/* #define USE_GUSI1		/* Stdio implemented with GUSI */
#define USE_GUSI2		/* Stdio implemented with GUSI */
#if defined(USE_GUSI1) || defined(USE_GUSI2)
#define USE_GUSI
#endif
#define WITH_THREAD		/* Use thread support (needs GUSI 2, not GUSI 1) */
#define WITHOUT_FRAMEWORKS /* Use old-style Universal Header includes, not Carbon/Carbon.h */
#define USE_MSL			/* Use MSL libraries */
#ifdef USE_MSL
#define MSL_USE_PRECOMPILED_HEADERS 0	/* Don't use precomp headers: we include our own */
#include <ansi_prefix.mac.h>
#endif
