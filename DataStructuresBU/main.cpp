/*
 * main.cpp
 *
 *  Created on: Jul 7, 2019
 *      Author: cmshalom
 */
#include <iostream>
#include <string>
using namespace std;

// the 0-th and 1-st Fibonacci numbers are both equal to 1.
extern int fibonacciRecursive(int n, int &steps);              // computes recursively
extern int fibonacciWithMemoization(int n, int &steps);        // computes recursively with memoization
extern int fibonacciWithDynamicProgramming(int n, int &steps); // computes using dynamic programming

void print (string algorithm, int n, int result, int steps) {
	cout << algorithm << ":" << "F[" << n << "]=" << result << ", computed in " << steps << steps;
}

int main (int argc, char **argv) {

	int steps;
	int f = fibonacciRecursive(10, steps);
	print("Recursive", 10, f, steps);

	f = fibonacciWithMemoization(10, steps);
	print("Recursive with Memoization", 10, f, steps);

	f = fibonacciWithDynamicProgramming(10, steps);
	print("Dynamic Programming", 10, f, steps);

	f = fibonacciWithMemoization(100, steps);
	print("Recursive with Memoization", 100, f, steps);

	f = fibonacciWithDynamicProgramming(100, steps);
	print("Dynamic Programming", 100, f, steps);

}
