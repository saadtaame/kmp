# kmp
A C++ implementation of the Knuth-Morris-Pratt algorithm for sequences of integers. The program reads two integers m, the length of the pattern, and n, the length of the sequence to search in. The program then reads the pattern and the sequence and prints positions (0 based) where the pattern occurs as a contiguous sub-sequence of the original sequence.

Sample input/output:

input:
<pre>
2 10
3 5
3 3 5 3 -1 3 3 5 5 1
</pre>

output:
<pre>
match at 1
match at 6
</pre>
