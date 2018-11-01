/*
 * =====================================================================================
 *
 *       Filename:  my_print.c
 *
 *    Description:  for static lib of linux
 *
 *        Version:  1.0
 *        Created:  11/01/2018 08:40:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  王旭林 (Brian Wang), wangxulin108@gmail.com
 *   Organization:  fphonor
 *
 * =====================================================================================
 */
#include <stdio.h>

void cout(const char * message) {
    fprintf(stdout, "%s\n", message);
}
