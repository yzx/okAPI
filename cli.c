#include "okAPI.h"

#define CLI_ARGV_MAX    (32)

typedef int (*CLI_FOO_t)( int argc, char *argv[  ] );

typedef struct _cli_t_ {
	//
	char      *  name;    //!< name of the command.
	CLI_FOO_t    clif;    //!< pointer to the command line interface function.
	char      *  desc;    //!< description of the command.
	char      * usage;    //!< command usage string.
}
CLI_t;

#define _CLI(n, c, d, u) int c ( int argc, char *argv[  ] );
#include "_cli.h"
_CLI("", NoClif, "", "")
#undef _CLI

#define _CLI(n, c, d, u) { n, c, d, u },
static const CLI_t all_cli[  ]= {
#include "_cli.h"
	_CLI(0, 0, 0, 0)
};
#undef _CLI

#define CLI_NUM (SIZEOF(all_cli)-1)

int NoClif(
	int    argc,
	char * argv[  ]
) {
	return( 0 );
}

