int is_big_endian(void)
{
	int nb;
	char* str_nb;

	nb = 1;
	str_nb = (char*)&nb;
	return(str_nb[sizeof(int)-1] == 1);
}
