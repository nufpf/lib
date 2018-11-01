/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  Test of my static lib
 *
 *        Version:  1.0
 *        Created:  11/01/2018 09:08:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  王旭林 (), wangxulin108@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "my_lib.h"


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    int c = add(15, -21);
    cout("I am a func from mylib ...");
    return 0;
}				/* ----------  end of function main  ---------- */

