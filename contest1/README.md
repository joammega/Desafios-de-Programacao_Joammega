# Contest 1(Força bruta, Vector, Set, Map, IosStream, SStream)

- Item A

  Given a grid of n rows and m columns representing the
loch, 6 ≤ n, m ≤ 10000, find the minimum number s of sonar
beams you must put in the square such that we can control
every position in the grid, with the following conditions:

   1) one sonar occupies one position in the grid(3x3); the sonar beam controls its own cell and the contiguous cells;
   2) the border cells do not need to be controlled, because Nessy cannot hide there (she is too big).

- Item B

  However, in this problem, you have to build a software that can calculate the donations. Initially
the total amount of money is 0 and in each time, two types of operations will be there.
    1) ‘donate K’ (100 ≤ K ≤ 105), then you have to add K to the account.
    2) ‘report’, report all the money currently in the account.

- Item C

  The first line of input contains a single positive integer n (< 20), the number of test cases. Each test
case starts with a line containing a single integer f (0 < f < 20), the number of farmers in the test
case. This line is followed by one line per farmer containing three positive integers each: the size of
the farmyard in square meters, the number of animals he owns and the integer value that expresses the
farmers environment-friendliness. Input is terminated by end of file. No integer in the input is greater
than 100000 or less than 0.

- Item D

  For a positive integer n, let f(n) denote the
sum of the digits of n when represented in base 10. It is easy to see that the sequence of numbers n, f(n), f(f(n)), f(f(f(n))), . . . eventually
becomes a single digit number that repeats forever. Let this single digit be denoted g(n).
For example, consider n = 1234567892.
    1) Then:f(n) = 1+2+3+4+5+6+7+8+9+2 = 47
    2) f(f(n)) = 4 + 7 = 11
    3) f(f(f(n))) = 1 + 1 = 2
    4) Therefore, g(1234567892) = 2.
 
- Item E

  For this problem, we are only concerned with the “jumping over the wall” part. You will be given the heights
of N walls from left to right. Mario is currently standing on the first wall. He has to jump to the
adjacent walls one after another until he reaches the last one. That means, he will make (N − 1)
jumps. A high jump is one where Mario has to jump to a taller wall, and similarly, a low jump is one where Mario has to jump to a shorter wall. Can you find out the total number of high jumps and low jumps Mario has to make?
    1) The first line of input is an integer T (T < 30) that indicates the number of test cases. Each case starts
with an integer N (0 < N < 50) that determines the number of walls. The next line gives the height
of the N walls from left to right. Each height is a positive integer not exceeding 10.

- Item F

  Given a string of 0’s and 1’s up to 1000000 characters long and indices i and j, you are to answer
a question whether all characters between position min(i, j) and position max(i, j) (inclusive) are the
same.
  
  There are multiple cases on input. The first line of each case gives a string of 0’s and 1’s. The next
line contains a positive integer n giving the number of queries for this case. The next n lines contain
queries, one per line. Each query is given by two non-negative integers, i and j. For each query, you
are to print ‘Yes’ if all characters in the string between position min(i, j) and position max(i, j) are the
same, and ‘No’ otherwise.

- Item G

  Write a program that will read in a dictionary and a list of phrases and determine which words from
the dictionary, if any, form anagrams of the given phrases. Your program must find all sets of words in
the dictionary which can be formed from the letters in each phrase. Do not include the set consisting
of the original words. If no anagram is present, do not write anything, not even a blank line.

  Input will consist of two parts. The first part is the dictionary, the second part is the set of phrases
for which you need to find anagrams. Each part of the file will be terminated by a line consisting of a
single ‘#’. The dictionary will be in alphabetic order and will contain up to 2000 words, one word per
line. The entire file will be in upper case, and no dictionary word or phrase will contain more than 20
letters. You cannot assume the language being used is English.
