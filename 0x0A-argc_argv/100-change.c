#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * coinConverter - Helper function that calculates the minimum number of coins needed
 * @amount: The amount in cents for which to calculate coins
 *
 * Return: The minimum number of coins needed
 */
int coinConverter(int amount)
{
	int count = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int j;

for (j = 0; j < num_coins; j++)
{
while (amount >= coins[j])
{
amount -= coins[j];
count++;
}
}
return (count);
}
/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int amount, coins_needed;

if (argc != 2)
{
printf("Error\n");
return (1);
}
amount = atoi(argv[1]);
if (amount < 0)
printf("0\n");
else
{
coins_needed = coinConverter(amount);
printf("%d\n", coins_needed);
}
return (0);
}
