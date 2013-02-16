#include "okAPI.h"

typedef int (*COOL_FUN_t) ( void );

typedef struct _cool_s_ {
	//
	char       * brief;    //!< brief description
	COOL_FUN_t      up;    //!< setup function
	COOL_FUN_t   again;    //!< main loop function
	COOL_FUN_t    down;    //!< shutdown function
}
COOL_s;

#define _COOL(b, u, a, d) \
int u ( void ); \
int a ( void ); \
int d ( void );
#include "_cool.h"
_COOL("", yzxNoFun, yzxNoFun, yzxNoFun)
#undef _COOL

#define _COOL(b, u, a, d) { b, u, a, d },
static const COOL_s all_cool[  ]= {
#include "_cool.h"
	_COOL("", yzxNoFun, yzxNoFun, yzxNoFun)
};
#undef _COOL

int yzxNoFun(
	void
) {
	return( 0 );
}

int yzxSetup(
	void
) {
	int r= 0;
	return( r );
}

int yzxLoop(
	void
) {
	int r= 0;
	return( r );
}

int yzxShutdown(
	void
) {
	int r= 0;
	return( r );
}

