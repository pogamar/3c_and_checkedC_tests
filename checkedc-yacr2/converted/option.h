
/*
 *
 * option.h
 *
 */


/*
 *
 * Includes.
 *
 */

#ifndef OPTION_H
#define OPTION_H


/*
 *
 * Defines.
 *
 */


/*
 *
 * Types.
 *
 */


/*
 *
 * Globals.
 *
 */

#ifdef OPTION_CODE

#else	/* OPTION_CODE */

#endif	/* OPTION_CODE */


/*
 *
 * Prototypes.
 *
 */

#ifdef OPTION_CODE

void
Option(int,
       char (*[]));

#else	/* OPTION_CODE */

extern void
Option(int argc, _Array_ptr<char *> argv : count(argc));

#endif	/* OPTION_CODE */

#endif	/* OPTION_H */
