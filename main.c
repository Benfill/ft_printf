#include    <stdlib.h>

// int		nbrlen(nbr)
// {
// 	int		count;

// 	count = 0;
// 	if (nbr <= 0)
// 	{
// 		nbr *= -1;
// 		count++;
// 	}	
// 	while (nbr > 0)
// 	{
// 		nbr /= 10;
// 		count++;
// 	}
// 	return (count);
// }

int main() 
{
    printf("%d", nbrlen(-10));
}