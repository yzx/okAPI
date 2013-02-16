#include "okAPI.h"

int array[ 10 ];

static unsigned long AbsTdelta(
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

int yzxFoo(
	void * p
) {
	unsigned int * i= (unsigned int *)p;
	int            r= 0;

	*i= !r;

	r= AbsTdelta( 30, 15, 10, 1 );

	return( r );
}

int yzxUtil(
	void
) {
	int r= 1;

	yzxPRINTF( "Array size = %d\n", yzxSIZEOF( array ) );

	return( r );
}

