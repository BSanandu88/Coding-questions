 /* You need to sort elements of an array where the array can be of following data-types:

Integer
String
floating number
Your task is to complete the given two functions: sortArray() and printArray()

Input:
The input line contains T, denoting the number of testcases. Each testcase contains 2 lines. The first line contains n(size of array) and q(type of array) separated by space. Below is the description about q.

q = 1, means elements of the array are of integer type
q = 2, means elements of the array are of string type
q = 3, means elements of array are of floating digit type  
The second line contains n elements of the array separated by space.

Output:
For each testcase in new line, print the elements in sorted form of given type of array separated by space.

Constraints:
1 <= T <= 50
1 <= n <= 100
1 <= q <= 3

Example:
Input:
3
3 3
34.23 -4.35 3.4
4 1
123 -2311 837 0
5 2
focus on challenges in implementing

Output:
-4.35 3.4 34.23 
-2311 0 123 837 
challenges focus implementing in on

Explanation:
Testcase 1: The array is of floating type. After sorting the elements of array are as such:  -4.35 3.4 34.23 */

template <class T>
void sortArray(T a[], int n)
{ 
	//Add your code here.
	sort(a,a+n);
}

template <class T>
void printArray(T a[], int n)
{
	//Add your code here.
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
    cout<<endl;
}