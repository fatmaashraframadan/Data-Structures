# Data-Structures

Assignment # 1
----------------------------------------
Problem.1(Big Decimal)
---------
Different variations of types int and float exist in C++ and other languages. They are usually limited by
minimum and maximum values. Sometimes it is desired to have versions of these types with unlimited
bounds. Java solves this problem by providing BigInteger and BigDecimal classes. In this problem it is
required to develop a new C++ type (class) that can hold unlimited decimal integer values and performs
arithmetic operations on them. You will develop in C++ a class, BigDecimalInt that supports writing
statements with extremely long integer values like these:
BigDecimalInt num1("123456789012345678901234567890");
BigDecimalInt num2("113456789011345678901134567890");
BigDecimalInt num3 = num2 + num1;
cout << "num1 = " << num1 << endl;
cout << "num2 = " << num2 << endl;
//236913578023691357802369135780
cout << "num2 + num1 = " << num3 << endl;
Your task is:
(1) Design the class BigDecimalInt that has the following public interface (set of operations available
to use by developers using the class): [18 points, 3 points for each function]
BigDecimalInt (string decStr); // Initialize from string and rejects bad input
BigDecimalInt (int decInt); // Initialize from integer
BigDecimalInt operator+ (BigDecimalInt anotherDec);
BigDecimalInt operator= (BigDecimalInt anotherDec);
Int size();
You will also need to overwrite the << operator as follows:
friend ostream& operator << (ostream& out, BigDecimalInt b)
Using data encapsulation, you are free to store the digits of the big decimal integer in whatever
container you like. You might store them in an array, a vector, a string or whatever. These are
details that are not important to the user of your class. You will need to build + and – operations
that work on the representation you chose.
(2) Implement the class BigDecimalInt and write five test cases (including –ve numbers) to test it.
Implement a program that runs the test cases and verifies the result.

Problem.2(Fraction)
---------
You will develop an application for performing calculations on fractions.
(1) First, develop a class Fraction that represents a fraction by one integer divided by another, e.g.,
1/3 or 3/7.
a. This class defines adding, subtracting, multiplying, dividing and comparing (<, >, ==, <= and
>=) fractions by overloading the standard operators for these operations.
b. It should also contain a function for reducing fractions. For example 2/6 is reduced after
calling the function to 1/3, etc
c. You also need to overload I/O operators to be able to input and output fractions naturally
using >> and << operators.
(2) Separate class specifications from implementation by creating Fraction.h for specs and
Fraction.cpp for implementation.
(3) Second, develop a class FractionCalculator that utilizes the class Fraction and allows the user to
input a fraction and perform calculations by adding, subtracting, etc. another fraction and then
keeping the result as a fraction for further calculations.

Problem.3(Matrices)
---------
You will develop an application for matrix calculations.
(1) It is required to design and implement a generic class Matrix, in the form of a class template
that accepts a type parameter. This way, when the class Matrix is instantiated, we decide if it
should accept float, int or double, etc.
(2) Matrix class holds a matrix of any size and allocates the required memory as needed.
(3) Matrix class should have a destructor that frees used memory at the end of lifetime of each
Matrix objects. 
(4) Matrix class specifications should be in a separate header “.h” file.
(5) It should have a pointer to pointer attribute that points to the matrix content. It should have
suitable constructors and methods for allocating the required memory space based on the
dimensions decided by the user. 
(6) Overload standard operators and I/O operators to enable Matrix class with addition, subtraction
and multiplication and suitable input and output capabilities. Add a method for matrix
transpose.
(7) Then develop a MatrixCalculator class which offers the user a menu of operations to perform
on int matrices as follows. Each of these options should be able to accept matrices of varying
dimensions, which the user inputs. For multiplication, the calculator should check that two
matrices are of dimensions n x m and m x p. 
Welcome to (Your Name) Matrix Calculator
----------------------------------------
1- Perform Matrix Addition
2- Perform Matrix Subtraction
3- Perform Matrix Multiplication
4- Matrix Transpose

Problem.4(Recursion Power)
---------

 (1) Design a recursive function to calculate a to the power n (an) by following the recurrence
equation: power(a,n) = a* power(a,n-1) 
(2) Design a recursive function to calculate a to the power n (an) by following the recurrence
equation: power(a,n) = power(a,n/2) * power(a,n/2). Optimize your function if n is odd.
(3) Write a main function to test the previous two equations.

Problem.5(Strings)
---------
The given function ListPermutations below prints all the permutations of a given string. It is required to
modify this function so that it only prints unique strings. The current function will do exhaustive
recursion to calculate all permutations. So, if the given string has duplicate characters, the output will
have duplicate words. For example, if it is given the string “Makka”, it will print “Mkkaa” four times. Try
this function and see how it works.
It is required to change the code so that it only prints unique combinations formed from the characters
of the string. So for the above mentioned example, it should print “Mkkaa” once.
Hint. To solve this, all what you need is storing each new word you form. Before printing a new word or
storing it, check if it is not already stored. You will need an array, a vector or a set to store the words
formed so far
void RecPermute(string soFar, string rest)
{
if (rest == "") // No more characters
cout << soFar << endl; // Print the word
else // Still more chars
// For each remaining char
for (int i = 0; i < rest.length(); i++) {
string next = soFar + rest[i]; // Glue next char
string remaining = rest.substr(0, i)+ rest.substr(i+1);
RecPermute(next, remaining);
}
}
// "wrapper" function
void ListPermutations(string s) {
RecPermute("", s);
}

Problem.6(Names)
---------
You will develop an application for performing operations on strings.
(1) First, develop a class StudentName that represents your full name and has only a variable name
of type string.
(2) Your class should contain a constructor that takes a string from user. The input string should
contain at least 2 spaces. If the user violates this rule, you should copy the last name many times
to make the names variable a name with 2 spaces.
e.g., “ahmed Mohamed sayed” “ahmed Mohamed sayed”
“sara ahmed” “sara ahmed ahmed”
“Khaled” “ khled Khaled Khaled”
“aya ali ahmed sayed” “ aya ali ahmed sayed”
(3) Add a function print that prints the detailed parts of the name each in one line. 
e.g ., “aya ali ahmed sayed”
detailed parts of the name are:
1) aya
2) ali
3) ahmed
4) sayed
(4) Add function replace(int i,int j) that replaces the name at position I with the name at position j
and return true if operation is valid and false if one of the two indices is out of range.
e.g., “ahmed hassan ali”
replace(1,2) true “Hassan ahmed ali”
replace(3,1) true “ali Hassan ahmed”
replace(2,4) false
(5) Write a main function and 5 test cases with different names. For each test case you should call
the replace function and the print function to check the effect of the replacement if valid.

Assignment #2 
------------

Problem 1: 

Write a program that processes FCI library books information (objects of class book). Each book has name, author, publish year and number of available versions.
- Your program should have a menu of these options:
1.	Add book
2.	Search book by name
3.	Search book by author
4.	List books in alphabetical order (Ascending)
5.	Update available number of versions of a book (user enters book name and the new  number)
6.	Find the books which have the highest number of versions and print books information.
Use the most suitable STL containers (you may use more than one container) and STL algorithms. Organize your code into classes and functions. Use class header files and class cpp files.


Problem 2: 

 Use the map<string, int> STL container to count occurrences of words.
 Use the word as the key and the count as the value.
    - User should be able to enter words as desired until the word “done” is written.
    - After entering all words, your program should print each word with its count.
    - Then, erase all words that start with letter ‘a’ and print again.



Problem 3:

In this problem, you will measure the complexity of binary search algorithm practically
And see if it matches the theoretical result of O(log n). Complexity will be measured by the
Number of comparisons it does to find a word. Your task is as follows:
1-	Implement a generic class called searcher that approximately has the following interface:

       loadData (....)                   // Loads required num of words from file 
       int binarySearch (....)	  // Looks for a given item in the data & return its index or -1  
       int testPerformance (..)  // Gets time & num of comparisons

     * Add any missing functions

2-	Preferably, implement binary search algorithm to work on vectors not arrays. It should (1) calculate the time taken to search for a given word and (2) the number of comparisons it did. 
3-	We want to measure the (1) time and (2) number of comparisons in two cases using testPerformance and the given English list of words:
•	First when the word is found. For this case, pick a random word (use random function C++ to pick an index between 0 and last index) and then search for it in the data.
•	Do this 100 times and calculate the average time and average number of comparison.
•	Second, makeup a random non-existing word and search for it and calculate the time and number of comparisons done until algorithm returns that word is not found.
•	Do this 100 times and calculate the average time and average number of comparison.
4-	Repeat the previous step using a file of 10000, 20000, 30000, ...., 80000 words 
•	List of words to use is at http://www-01.sil.org/linguistics/wordlists/english/
5-	Draw the results on a plot using excel or any drawing tool.


Problem 4: 

Given a vector of integers that represent sides of triangles, we need to find is it possible to construct at least one non-degenerate triangle using this array? 
Sides of non-degenerate triangle should follow these constraints: 
S1 + S2 > S3 and 
S2 + S3 > S1 and 
S3 + S1 > S2 
Where S1, S2, S3 are the length sides of triangle. Use any STL containers or algorithm needed.

For example: 
4, 1, 2 cannot construct a non-degenerate triangle. 
But 5, 4, 3, 1, 2 can generate with sides 2, 3, 4 a non-degenerate triangle. 


Problem 5:

We know that both Merge and Quick sorts are O (n log n) in average case. But Quick sort is faster. We like to compare their performance and study how faster Quick sort is. Is it two times faster? Or three times faster? Or what? You task will be:
1.	Implement quick and merge sort algorithms given in the lecture or book. Understand them very well. Choose a good technique for choosing the pivot of Quick sort.
2.	Implement a program that generates arrays (or better vector) of random integer data of size 5,000 items, 10,000 items, etc till 100,000 items.
3.	For each data array, run both algorithms and record the time it takes in sec or msec.
4.	Plot the performance of the algorithms against each other on the same graph.


 
Problem 6: 

Insertion sort uses linear search to find the right place for the next item to insert. Would it be faster to find the place using binary search (reduce number of comparisons)? We still have to shift 1 item at a time from the largest till the right place.
Use binary search on the already sorted items to find the place where the new element should go and then shift the exact number of items that need to be shifted and placing the new item in its place. The algorithm works the same, except that instead comparing and shifting item by item, it will compare quickly using binary search but it will still shift one by one till the right place (without comparison).
Plot the performance of the algorithm against the original insertion sort.

Assignment # 3
-------------					

Problem 1: Linked lists 
					
In this problem, you should develop a linked list class similar to that provided in the C++ STL. The public interface of your class should provide basic insertion and deletion functions. In addition, it should provide an iterator class as an inner class in order to access the data stored in the list. For example, if we have a list of three elements, and want to access the second element, we should declare an iterator and initialize it to the position of the first element, and move to the second position as shown in the code below:

list<int> myList;
myList.push_back(1);
myList.push_back(2);
myList.push_back(3);
list<int>::iterator it = myList.begin();
it++;
	
cout<< *it;
										
notice the usage of the scope operator in the declaration of the iterator, this is because the iterator class is defined as an inner class inside the list class:			
			
template<class type>
class myList {
public:
		
class iterator {
// your code for the iterator class here
						
};
// your code for the list class her	

};			
				
Your list class should be a template class.
The list class should have the following public interface:

●	list() – default constructor. 
●	list(type value, int initial_size) – constructs a list having ‘initial_size’ elements whose values are ‘value’. 
●	~list() – a destructor to clear the list and leave no memory leaks. 
●	int size() – returns the current number of elements in the list
●	void insert(type value, iterator position) 
adds an element at position specified by the iterator. For example, if the passed iterator currently points to the second element, this element will be shifted on position, and the new value should be added at the second position. 
●	iterator erase(iterator position) – erases the element specified by the iterator and return an iterator to the next element, throws exception if position points after the last element. 
●	list<type>& operator = (list<type> another_list) – overloads the assignment operator to deep copy a list into another list and return the current list by reference. 
●	iterator begin() – returns an iterator pointing to the first element. 
●	iterator end() – returns an iterator pointing after the last element.
●	You should develop an iterator class the following public interface:
○	void operator ++ () – overloads the operator ++, it should advance the iterator one position towards the end of the list, throws exception if it is currently pointing after the last element. 
○	 void operator -- () – overloads the operator --, it should move the iterator one position toward the beginning of the list, throws exception if it is currently pointing to the first element of the list. 
○	type& operator * () – overloads the dereference operator to return the value contained in the current node by refence to allow its modification.
○	bool operator == (const iterator &) – overloads the equality comparison operator, should return true if the passed operator points to the same node. 		
●	All node pointers in the list class of the iterator class should be private and inaccessible from outside of the class. 
●	No memory leaks or dangling pointers. 
●	It is highly recommended to implement it as a double linked list, however, it is up to you.
					
As mentioned above, our .end() function should return an iterator pointing to a position after the last element as the STL .end() function does. This can be done easily by having a dummy node after the actual tail, this dummy node contains no data, but mark the end of the list. So, physically, our list is never empty, which will ease the implementation of insertion and remove operations, as now we don’t have to handle an “empty list” case. However, this dummy node should be disregarded when we return the size.
					
●	Write a main function to test all the above.

Problem 2: Using STL list 
 							
In this problem, you must use C++ STL linked list. Given two sorted linked lists, merge them in the first one without using an extra list, and without keeping any duplicates.
 							
Write a main function to test.
					
Problem 3: Stacks 
					
In this problem, you should develop a stack class similar to that provided in the C++ STL. You can use arrays or your linked list class developed in the previous problem as an underlying data structure, however, you cannot use any of the C++ STL classes in this problem.
					
●	Your stack class should be template. 
●	The stack class should have the following public interface:
○	stack() – default constructor. 
○	stack(type value, int intial_size)constructs a stack having ‘initial_size’ elements whose values are ‘value’. 
○	~stack() – a destructor to clear the stack and leave no memory leaks. 
○	type& top() – returns the top element by reference. 
○	void pop() – removes the top element
○	void push(type value) – adds an element to the top of the stack. 
○	int size() – returns the number of elements in the stack. 
●	Write a main function to test all the above.

Problem 4: Using STL stack 
 							
In this problem, you must use C++ STL stack. Given an input string of brackets ‘(‘ and ‘)’, square brackets ‘*‘ and ‘+’, curly brackets ‘,‘ and ‘-’, and multiple line comment token ‘/*’ and ‘*/’, check if this string is valid or not.
 							
A string is considered valid if and only if:
For each opened bracket, there should be a closing bracket of the same type.
Each closing bracket should close the lastly opened bracket.
Multiple line comment tokens consist of two characters, and any text between them should be ignored. However, they are treated the same way as brackets regarding the rules described above.

([{}])(){}[]{[]} – valid.
({)} – invalid.
({/*)}]]]]]]}*/}) – valid.
 ({/*[][[]]]]]}) – invalid, the comment is not closed.
 [{/*******/}] – valid.
 							
Write a main function to test.

Problem 5: is Palindrome 

A String is said to be Palindrome if it is equal to itself in reverse order. You can use this logic to check if String is Palindrome or not. For example, “abba” is palindrome, but “abbc” is not palindrome.

●	Implement this function 
bool isPalindrome(string a)
●	You SHOULD use stack to solve this problem
●	Write a main function to test. 

Problem 6: Queues 
 	
In this problem, you should develop a queue class similar to that provided in the C++ STL. You can use arrays or your linked list class developed in the previous problem as an underlying data structure, however, you cannot use any of the C++ STL classes in this problem.
 							
●	Your queue class should be template. 
●	The queue class should have the following public interface:
○	queue() – default constructor.
○	queue(type value, int intial_size) – constructs a queue having ‘initial_size’ elements whose values are ‘value’. 
○	~queue() – a destructor to clear the queue and leave no memory leaks. 
○	type& front() – returns the first element by reference. 
○	void pop() – removes the first element. 
○	void push(type value) – adds an element to the back of the queue. 
○	int size() – returns the number of elements in the queue. 
 
●	Write a main function to test all the above.

Problem 7 Priority Queue 
Priority Queue is an extension of queue with following properties.
1.	Every item has a priority associated with it.
2.	An element with high priority is dequeued before an element with low priority.
3.	If two elements have the same priority, they are served according to their order in the queue.
Implement:
●	string enqueue(string value, int priority)
●	string dequeue() - dequeue according to the priority 
●	Write a main function to test.

Example: 
q.enqueue(“world”, 10)
q.enqueue(“Hello”, 5)
cout << q.dequeue() << “ “ << q.dequeue() <<endl;
Hello world 

Problem 8 Using STL queue 
 							
In this problem, you must use C++ STL queue. Reimplement part of the stack data structure using only one queue as an underlying data structure. Reimplement the class for ‘int’ data type only and with the following functions only:
 							
 int top() – returns the top element.
 void pop() – removes the top element. 
 void push(int value) – adds an element to the top of the stack. 
Write a main function to test.
 												
PROJECT


Section #1 :
 
Create template binary search tree class with this name BSTFCI and create node class with name BSTNode 

1. Add Checking Tree Balance :

- A Balanced Binary Tree is a tree where the heights of the two child sub-trees of any node differ by at most one and the left subtree is balanaced and the right subtree is balanced. 
Add method called ‘isBalance’ to BSTFCI this method will check in the BST is balance or not.

2. Tree Comparison :

-Write a function that decides if a BSTFCI T2 is a sub-tree of another BSTFCI T1.
Prototype: bool isSubTree(BSTFCI* t1, BSTFCI* t2);
Note: You may need to write another function that takes 2 BSTNodes and compares their sub-trees.
 



3. Print Range :
Add a recursive function named printRange in the class BSTFCI that stores integers and given a low key value and a high key value, it prints in sorted order all records whose key values fall between the two given keys. 
Function printRange should visit as few nodes in the BST as possible. 
You should NOT traverse all the tree in-order and print the ones in the range. This will not be considered a correct solution. You should do smart traversal to only traverse the related parts.
 

4. Tree Flipping :
- Write a flip method that takes the node which the mirror image of the tree will start from if no parameter send to the function the default value will be the root node.                                                     void flip(Node* node = root)

 


5.	Tree Application :

•	Write an index builder application that takes text consisting of lines and prints a list of the words of the text and the lines they appear on are printed next to them.
•	The application works by building a binary search tree using BSTFCI and each node contains a word and a vector of that contains the list of lines where this word exists. For each new word, the program finds it and adds the line number to the vector. If word is not found, it is added to the tree. Then traverse the tree in-order to print the nodes.
•	You need to remove punctuation marks like . and , from the text before processing it.
•	For example, the text below produces the given index, Test Your code on the given text and 1 more examples.

 

















Section #2 :

Contact Manager 
Introduction:
- You and your friends are building a Smartphone Operating System (choose its name). You are going to compete with iOS, Android, Blackberry and Windows phone. Competition is very hard, and you need to build strong features. One of the most critical parts of the Smartphone OS is the contact manager, and they decided you are the one to develop it. Are you up to the task? 

Problem Statement:
 -You are required to implement the contact manager for a smartphone. This is a program that keeps track of all your contacts' information (phone number, email ..) as well as keeping a call log (the recently sent and received calls). You can also quickly reach a contact through search.




Task 1 
-You are given a file with all your contacts. This file is called "allcontacts.in". Each line of the file will be in the following format (without quotes): 
"phone number" "contact name"
- Phone numbers contain only digits (no + or -) and can start with 0 (e.g. 010...). Contact names are in English (lower-case or upper-case) and may contain spaces. A contact name may appear more than once in the file, which means this person has multiple phone numbers. 
You are required to build a contacts list using an ordered “linked list”, with all the contacts sorted by contact name alphabetically. Each contact is an object, carrying the name of the contact, and carries all phone numbers as a “linked list”. All phone numbers in the linked list must be sorted as well. A phone number will only appear once in the file. The linked list should be sorted at all times during the execution (always add elements in sorted order). 

After building this data structure, print its contents in the format given below.
Sample "all-contacts.in" file: 
002011111 Sayed Hassan 
002022222 Mohamed Hesham 
002054321 Mina Zaki 
002012345 Mina Zaki
002098765 Bob 
Sample output:
 Bob: 002098765 
Mina Zaki: 002012345 - 002054321 
Mohamed Hesham: 002022222 
Sayed Hassan: 002011111

Task 2 
- Once you have prepared the contact list, the call log keeps track of the numbers you recently contacted. Given a list of recently contacted phone numbers, you are required to do this:
1-	If the number belongs to a contact, display the contact name.
2-	 Otherwise display the number unchanged. 
The Linked List used in Level 1 is inefficient for this task. We need a better data structure to efficiently search for a phone number and get the name. We will use a “Balanced Binary Search Tree” because it allows us to search in O(log n) while keeping the phone list dynamic. Each node in the tree will carry a phone number and a pointer to the contact. For this task you are required to implement a "Treap". It is a Randomized Balanced Binary Search Tree that performs very well in practice. Read the document attached parts 8.1 to 8.4 to understand more about them. 



We won’t need all of the functionality of the tree for this problem. The required operations are:
 • Add(phone number, pointer to contact): adds a phone number and pointer to contact in its right position in the tree. 
• Find(phone number): Searches for a phone number in the tree. If found, returns the contact, otherwise returns null.

Sample input:                                       Sample output: 
002098765 				Bob
002054321 				Mina Zaki
002054321 				Mina Zaki
012521212 				012521212
002011111 				Sayed Hassan


			
		
	 




