/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;
	
        while (i < 10)/*causes code to infinity*/
        {
                putchar(i);/*no increament of i*/
        }/*no increament of i*/

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
