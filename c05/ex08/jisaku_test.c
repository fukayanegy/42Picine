void	kotae()
{
	int	queen[10];
	int	board[10][10];
	int	i;
	int	f;

	i = 0;
	while (i < 10)
	{
		f = 0;
		while (f < 10)
		{
			board[i][f] = 0;
			f++;
		}
		i++;
	}
	set_queen(queen, board, 0);
}

void	set_queen(int queen[10], int board[10][10], int i)
{
	int	j;

	if (i == 10)
	{
		printout(queen);
		return ;
	}

	j = 0;
	while (j < 10)
	{
		if (board[i][j])
		{
			queen[i] = j;
			syokika
		}
	}
}

int	printout(int queen[10])
{
	int	i;

	
}