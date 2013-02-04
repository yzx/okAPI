#include "okAPI.h"

int yzxSetup(
	void
) {
	int r= 1;

	return( r );
}

int yzxLoop(
	void
) {
	int r;

	yzxFoo( &r );

	return( r );
}

int yzxShutdown(
	void
) {
	int r= 1;

	return( r );
}

int yzxFoo(
	void * p
) {
	unsigned int * i= (unsigned int *)p;
	int            r= 0;

	*i= !r;

	return( r );
}


static unsigned long absTdelta(
	unsigned long   now,
	unsigned long  then,
	unsigned long  wrap,
	unsigned long  unit
) {
	unsigned long delta= 0;

	delta= ( now < then )
	     ? ( ( wrap - then ) + now )
	     : ( now - then );

	return( delta * unit );
}

