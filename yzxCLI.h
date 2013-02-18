#ifndef _YZX_CLI_H_
#define _YZX_CLI_H_

//! \brief Maximum number of CLI arguments
#define YZX_CLI_ARGV_MAX    (32)

//! \brief CLI function type
typedef int (*yzxCLI_FOO_t)( int argc, char *argv[  ] );

//! \brief CLI entry data type
typedef struct _yzx_cli_t_ {
	//
	char         *  name;    //!< name of the command.
	yzxCLI_FOO_t    clif;    //!< pointer to the command line interface function.
	char         *  desc;    //!< description of the command.
	char         * usage;    //!< command usage string.
}
yzxCLI_t;

//! \brief CLI array declaration
extern const yzxCLI_t all_cli[  ];

//! \brief Stub CLI function
extern int yzxNoClif(
	int    argc,
	char * argv[  ]
);

//! \brief Main Loop CLI processing
extern int yzxLoopCLI(
	void
);

#endif /* of _YZX_CLI_H_ */
