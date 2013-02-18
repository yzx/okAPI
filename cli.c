#include "okAPI.h"

int yzxNoClif(
	int    argc,
	char * argv[  ]
) {
	return( 0 );
}

int yzxLoopCmnd(
	void
) {
//	static char          buffer[ 256 ];
//	static unsigned char    idx= 0;
//	static unsigned char  state= 1;
//	unsigned char             c;
	int                       r= 0;

#if 0
	if( FIFO_Get( &uart_fifo, &c ) ) {
	    if( state ) {
	        if( c == 0xA ) {
	            idx= 0;
	        }
	        else if( c == 0xD ) {
	            buffer[ idx ]= 0;
	            idx= 0;
	            state= 0;
	            Command( );
	        }
	        else {
	            buffer[ idx ]= c;
	            ++idx;
	        }
	    }
	    else {
	        if( c == 0xA ) {
	            state= 1;
	        }
	    }
	}
#endif
	return( r );
}

