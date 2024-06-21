#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
                int n;

                        srand(time(0));
                                n = rand() - RAND_MAX / 2;
                                        if (n == 0)
                                        {
                                                printif("The number: %f is zero \n", n);
                                        }
                                        else if (n > 0)
                                        {
                                                printif("The number: %f is positive \n", n);
                                        }
                                        elseif (n < 0)
                                        {
                                                printif("The number: %f is negative \n", n);
                                        }
                                        return (0);
