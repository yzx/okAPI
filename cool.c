#include "okAPI.h"

int yzxNoFun(
	void
) {
	return( 0 );
}

int yzxSetup(
	void
) {
	int i= 0;
	int r= 0;

	while( all_cool[ i ].brief ) {
	    if( ( r= all_cool[ i ].up(  ) ) ) {
	        break;
	    }
	    ++i;
	}
	return( r );
}

int yzxLoop(
	void
) {
	int i= 0;
	int r= 0;

	while( all_cool[ i ].brief ) {
	    if( ( r= all_cool[ i ].again(  ) ) ) {
	        break;
	    }
	    ++i;
	}
	return( r );
}

int yzxShutdown(
	void
) {
	int ret;
	int   i= 0;
	int   r= 0;

	while( all_cool[ i ].brief ) {
	    if( ( ret= all_cool[ i ].down(  ) ) ) {
	        ++r;
	    }
	    ++i;
	}
	return( r );
}

