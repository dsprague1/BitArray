#include <iostream>

using namespace std;

struct DJC_Bitarray
{
	int i_m_array;

	DJC_Bitarray()
	{i_m_array = 0;}
	~DJC_Bitarray()
	{}

	int Bitnum(int i_bitnum)
	{
		if(i_bitnum > 0 && i_bitnum < 32)
		{
			int i_shiftamount = 1;
			for(int i = 0; i < i_bitnum; i++)
				i_shiftamount = i_shiftamount<<1;
			return i_shiftamount;
		}
	}

	void SetBit(int i_bitnum, bool b_val)
	{
		int i_shiftamount = Bitnum(i_bitnum);
		if(b_val == true)
			i_m_array = i_m_array|i_shiftamount;

		if(b_val == false)
		{
			i_shiftamount = ~i_shiftamount;
			i_m_array = i_m_array&i_shiftamount;
		}
	}

	int GetBit(int i_bitnum)
	{
		if((i_m_array >> i_bitnum)%2 == 0)
			return 0;
		if((i_m_array >> i_bitnum)%2 != 0)
			return 1;
	}

	int FindFirst()
	{
		for(int i = 0; i < 32; i++)
		{
			if((i_m_array >> i)%2 == 0)
				continue;
			else if((i_m_array >> i)%2 != 0)
				return i;
		}
	}
};

void print_binary(int i_val)
{
	if(i_val <= 1)
	{
		cout << i_val;
		return;
	}

	print_binary(i_val >> 1);
	cout << i_val%2;
}

void main()
{
	DJC_Bitarray * A = new DJC_Bitarray;
	int temp = 1;
	temp = temp << 1;
	cout << temp << "\n";
	temp = temp << 1;
	cout << temp;
	system("pause");
}