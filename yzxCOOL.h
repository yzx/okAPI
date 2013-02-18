#ifndef _YZX_COOL_H_
#define _YZX_COOL_H_

//! \brief COOL function type
typedef int (*yzxCOOL_FUN_t) ( void );

//! \brief COOL entry data type
typedef struct _yzx_cool_s_ {
	//
	char          * brief;    //!< brief description
	yzxCOOL_FUN_t      up;    //!< setup function
	yzxCOOL_FUN_t   again;    //!< main loop function
	yzxCOOL_FUN_t    down;    //!< shutdown function
}
yzxCOOL_s;

//! \brief COOL array declaration
extern const yzxCOOL_s all_cool[  ];

//! \brief Stub COOL function
extern int yzxNoFun(
	void
);

//! \brief Setup driver function
extern int yzxSetup(
	void
);

//! \brief Main loop driver function
extern int yzxLoop(
	void
);

//! \brief Shutdown driver function
extern int yzxShutdown(
	void
);

#endif /* of _YZX_COOL_H_ */
