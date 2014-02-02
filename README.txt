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