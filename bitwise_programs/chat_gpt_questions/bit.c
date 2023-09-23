#include <stdio.h>

/* 
 * Bit Basics:


Toggle Bits:

Write a program to toggle the 3rd and 5th bits of a given number.
Count Set Bits:

Create a function to count the number of bits that are set (1s) in an integer.
Single Non-repeated Element:

You're given an array where every element repeats twice except one. Find that unique element using bitwise operations.
Swapping Numbers:

Swap two numbers without using a temporary variable and only using bitwise operators.
Detect Opposite Signs:

Write a function that determines if two integers have opposite signs without using any comparison or arithmetic operations.
Power of Two:

Check if a given number is a power of two using bitwise operations.
Find the Rightmost Set Bit:

Given an integer, write a function to find the position of the rightmost set bit. If there is no set bit, return -1.

*/

/*
 * Least significant bit is usually the right most bit.
 * The appoarch here is to check if it is turned on by anding (&)
 * it with one. 
 *
 * Example
 *
 * 1 - 0001
 * 2 - 0010
 * 3 - 0011
 * 4 - 0100
 * 5 - 0101
 * 6 - 0110 (from 5 (0101) to 6 (0110)) we move the 1 over
 * 7 - 0111 
 * 8 - 1000
 * 9 - 1001
 * 10 - 1010
 *
 * Thus we do :
 *   0001 (1)
 * & 0111 (6)
 * ---------
 *		1 means the least significant bit is set
 */
void check_lsb(unsigned int to_check) {

	if(to_check & 1 == 1) {
		printf("LSB is turned on\n");
	} else {
		printf("LSB is not turned on\n");
	}

}

/*
 * Left shift increases the value
 * Right shift decreases the value
 */
void shift_bits(unsigned int to_shift) {
	printf("Value to shift : %d\n", to_shift);
	to_shift = to_shift << 2;
	printf("Value after shifting left by 2 : %d\n", to_shift);
	to_shift = to_shift >> 2;
	printf("Value after shifting back right by 2 : %d\n", to_shift);
}

/*
 * Similar to checking the LSB.
 * If LSB is 1 = odd
 * if LSB is 0 = even
 *
 */
void check_odd_even(unsigned int to_check) {

	if((to_check & 1) == 0)
		printf("Value is even\n");
	if((to_check & 1) == 1)
		printf("Value is odd\n");
}

/

/*
 * To toggle nth postion, we take one, and shift it to the left by
 * nth shifts.
 */
void toggle_nth_bit(unsigned int to_toggle, unsigned int location) {


}

int main() {
	check_lsb(7);
	shift_bits(2);
	check_odd_even(11);
	check_odd_even(26);
}
