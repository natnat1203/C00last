void  ft_putchar(char C);
void  ft_putstr(char *)
{
  int ;
  
  i = 0;
  while (str[i])
  {  
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	(void)argc;
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
