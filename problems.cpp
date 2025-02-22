#include <iostream>
#include <assert.h>
#include <string>

std::string boolToString(bool val)
{
	return val ? "TRUE" : "FALSE";
}


bool isPrime(int num)
{
	bool prime = true;

	for(int i = 2; i < num/2; ++i)
	{
		if(num%i == 0)
		{
			prime = false;
			break;
		}
	}

	return prime;
}


/* Problem One:
 If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 Find the sum of all the multiples of 3 or 5 below 1000.
 */

void runProblemOne()
{
	int sum = 0;
	
	for(int i=1; i <1000; ++i)
	{
		if(i%3==0 || i%5==0)
		{
			sum = sum + i;
		}
	}

	std::cout << "-- Problem One  - Answer is: " << sum << std::endl;
}


/*
Each new term in the Fibonacci sequence is generated by adding the previous 
two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms.
 */
void runProblemTwo()
{
	long prevFib = 1;
	long currFib = 2;
	long sum = currFib;

	do
	{
		long tmp;

		tmp = currFib;
		currFib = currFib + prevFib;
		prevFib = tmp;

		if(currFib%2==0)
		{
			sum = sum + currFib;
		}

	}while(currFib <= 4000000);


	std::cout << "-- Problem Two  - Answer is: " << sum << std::endl;
}

/*
 What is the largest prime factor of the number 600851475143?
 */
void runProblemThree()
{
	long num = 600851475143;
	long curr_largest;

	std::cout << "-- Problem Three - Answer is: " << curr_largest << std::endl;	
}


void run_tests() 
{
	assert(isPrime(1));
	assert(isPrime(5));
	assert(!isPrime(8));

	std::cout << "-- Tests ok!" << std::endl << std::endl;
}


int main(int argc, char **argv) 
{
    if (argc > 1 && std::string(argv[1]) == "--run-tests") {
        run_tests();
    } else {
	runProblemOne();
  	runProblemTwo();
  	//runProblemThree();
    }

    return 0;
}
















