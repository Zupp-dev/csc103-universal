void swap(int& a, int& b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

// vim:foldlevel=2
