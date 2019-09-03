void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		leter--;
	}
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
