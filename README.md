<h3>Set</h3>
<b>divide string.cpp: </b>My task is to read an string and split the string into n-1 string which contains consecutive caracter from the main string, remove the newly generated duplicate string and calculate the number of remaining string. (n is the size of the string) <br><br>
<b>Solution procedure of divide string.cpp: </b><br>
step1: split the character using a temporary string and insert into predeclared set<br>
step2: calculte the size of the set<br>
<b>Reference problem: </b>https://codeforces.com/contest/1833/problem/A
<h3>Pair</h3>
<b>Short with idndex:</b> first array contains particular value and second array contains the index of the first array. My task is to short the first array with respect to index.<br><br>
<b>Sample input:</b><br>
&emsp;array: 5 2 1 3 4<br>
&emsp;index: 1 2 3 4 5<br><br>
<b>Sample output:</b><br>
&emsp;array: 1 2 3 4 5<br>
&emsp;index: 3 2 4 5 1<br><br>
<b>Solution procedure:</b><br>
&emsp;Step1: create a vectored pair whose 1st element = array element and 2nd element = index.<br>
&emsp;Step2: short the vector.-> only first element of pair will be shorted.
<b>Explanation of solution:</b> The problem may be solved using bubble sort. In case of this solution, the time complexity is o(n<sup>2</sup>sup). if you solve the problem using pair, the time complexity will be o(nlogn) which is more optimized than first solution.
