void	ft_putchar(char c);

void	ft_print_aplhabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		leter++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
