32 bit integer-based bit array

This bit array is constructed using an integer as a 32 position
array.  Each position can be accessed and adjusted using bitwise
operators.

	int Bitnum(int i_bitnum)
	
	This function takes an int that defines which "array 
	position" of the integer is going to be accessed.  
	There is a for loop that increments until it is equivalent
	to the array position, multiplying a shift amount variable
	by two each time around to produce the correct value for
	bit shifting. The multiplication is accomplished by shifting
	the shift value by 1 each time around the loop. It then 
	returns the bit shifting value.

	void SetBit(int i_bitnum, bool b_val)

	SetBit takes an int and a bool as a parameter to define
	the "array position" desired and the value to place
	into that position.  It operates by calling Bitnum
	to convert the array position given into the correct shift 
	amount, then performs the necessary operation to set the
	bit.  In the case of setting the bit to 1, the integer
	that represents the array is logical OR'd with the 
	shift amount.  In the other case opf setting the bit
	to 0, the shift amount is inverted then logical AND'd
	with the integer.

	int GetBit(int i_bitnum)

	This function takes an integer parameter that defines which
	location in the array the user wishes to access.  There
	are two logical statements containing the modulo 2 bitwise
	shift of the array by the input parameter.  If the result
	of the compounded operation is 0, the function returns 0.
	If it is anything else, it returns 1.

	int FindFirst()
	
	FindFirst increments through the array until it finds the
	first 1 bit, then returns the index of the 1 bit.  This is
	accomplished using a for loop that increments from 1 to 
	32 and using that incrementer to bitshift the array and
	make a check for 1.
	