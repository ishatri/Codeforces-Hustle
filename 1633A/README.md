A. Div. 7
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
You are given an integer ๐. You have to change the minimum number of digits in it in such a way that the resulting number does not have any leading zeroes and is divisible by 7.

If there are multiple ways to do it, print any of them. If the given number is already divisible by 7, leave it unchanged.

Input
The first line contains one integer ๐ก (1โค๐กโค990) โ the number of test cases.

Then the test cases follow, each test case consists of one line containing one integer ๐ (10โค๐โค999).

Output
For each test case, print one integer without any leading zeroes โ the result of your changes (i.โe. the integer that is divisible by 7 and can be obtained by changing the minimum possible number of digits in ๐).

If there are multiple ways to apply changes, print any resulting number. If the given number is already divisible by 7, just print it.

Example
inputCopy
3
42
23
377
outputCopy
42
28
777
Note
In the first test case of the example, 42 is already divisible by 7, so there's no need to change it.

In the second test case of the example, there are multiple answers โ 28, 21 or 63.

In the third test case of the example, other possible answers are 357, 371 and 378. Note that you cannot print 077 or 77.


