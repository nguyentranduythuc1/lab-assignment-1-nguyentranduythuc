/*
1.	Write a program that receives an n-digit number then output
its n digits from least to most significant:
Ex:
 ____________________________________
| Input: 132768                      |
| Output: 8 6 7 2 3 1                |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here



    int num;
	
    while(testcase != 0)
    {
        num = testcase % 10;
	
        printf(" %d ", num);
		testcase = (testcase-num)/10;
    }

	
	return 0;
}