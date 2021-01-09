#ifndef __KERNEL_H__
#define __KERNEL_H__

extern int target_num;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
int guess(int _guess);

int guessNumber(int n);

#endif