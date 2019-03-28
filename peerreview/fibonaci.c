#include <stdio.h>


int main()
{
    int prev = 0;
	    int current = 1;
		    printf("%i%s", prev, " ");
			    printf("%i%s", current, " ");
				    for(int i = 0; i < 4; ++i)
					    {
						        int next = prev + current;
								        printf("%i%s", next, " ");
										        prev = current;
												        current = next;
														    }
															    return 0;
																}
