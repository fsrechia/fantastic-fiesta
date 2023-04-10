# fantastic-fiesta

This is just a codename for the Siemens Programming Skills Challenge received on April 6th


## 3 FooBar

Write a C/C++ or Java program that prints each number from 1 to 100 on a new line.

For each multiple of 3, print "Foo" instead of the number.
For each multiple of 5, print "Baa" instead of the number.
For multiple numbers simultaneously of 3 and 5, print "FooBaa", instead of the number.

Your solution should be using as few lines of code as possible, but you should produce efficient code.
Você deve inserir um link como resposta

## 4 ConcatRemove

Consider a string containing lowercase characters from the Portuguese alphabet. You can perform two types of operations on this string:
1. Concat a lowercase character from the Portuguese alphabet at the end of the string.
2. Remove the last character from the string. If the string is empty, it will remain empty.

Given an integer k and two strings s and t, determine if you can convert s to t using exactly k operations described above on s. If possible, the program prints 'yes', otherwise it prints 'no'.

For example, string s = [a, b, c] and string t = [d, e, f]. The number of moves k = 6. To convert s to t, we first remove all characters using 3 moves. Then we concatenate each of the characters of t in the order. In the sixth move, you will have the expected string s. If more movements are available than necessary, they can be eliminated by performing multiple removals on an empty string. If there are fewer movements, it would not be possible to create the new string.

Develop a C/C++ or Java language program that implements and uses the ConcatRemove (s, t, k) function. It should return the results 'yes' or 'no'.
The function has the following parameters:
s: starting string
t: desired string
k: an integer that represents the number of operations

Input format
The first line contains the string s, the starting string.
The second line contains the string t, the desired string.
The third line contains an integer k, the number of operations.

Constrains
a) 1 <= | s | <= 100
b) 1 <= | t | <= 100
c) 1 <= k <= 100
d) s and t consists of lowercase letters of the Portuguese alphabet, ascii [a-z]

Output format
Print 'yes' if you can get the string t by executing exactly k operations on the string s, and print 'no' otherwise.

Example 1
bla bla bla bla
blablabcde
8
yes

Explanation
It took 5 operations to reduce the string "blablablabla" to "blablab". Then, 3 concatenation operations (c, d, e) were needed to obtain the string "blablabcde".
In this way, as it was possible to convert s to t using exactly k = 8 operations, the program printed "yes".

Example 2
tab
tab
7
yes

Explanation
It took 4 operations to reduce the string s (remember that a removal operation on an empty string, keeps the string empty). Then, 3 concatenation operations were performed (a, b, a). Since it was possible to convert s to t using exactly k = 7 operations, the prog
Você deve inserir um link como resposta

## 5 ConcatRemove unit test
Write an Unit Test using C/C++ or Java for the function ConcatRemove(s,t,k)

## 6 SQL query generate a report for Eva

Consider the following problem

Two tables are provided: Students and Notes.

Students contains three columns: ID, Name and Value.

Coluna  | Tipo
ID          | Integer
Name    | String
Value     | Integer

The table Notes contains three Integers columns: Grade, Min_Value and Max_Value filled according example bellow:

Grade | Min_Value | Max_Value
1          | 0                 |  9
2          | 10               | 19
3          | 20               | 29
4          | 30               | 39
5          | 40               | 49
6          | 50               | 59
7          | 60               | 69
8          | 70               | 79
9          | 80               | 89
10        | 90               | 100

Joana gives Eva the task of generating a report containing three columns: Name, Grade and Value. Joana does not want the names of students who received a grade lower than 8. The report must be in descending order by grade, that is, the highest grades are inserted first. If there are more than one student with the same grade (8-10) assigned to them, sort those students in particular by their names in alphabetical order. Finally, if the grade is less than 8, use "NULL" as the name and list them in grades in descending order. If there are more than one student with the same grade (1-7) assigned to them, sort those students in particular by their grades in ascending order.

Write an SQL query to help Eva.

Input example
ID | Name           | Value
1   | Julia             | 81
2   | Carol            | 68
3   | Maria           | 99
4   | Andreia       | 78
5   | Jaqueline     | 63
6   | Marcela       | 88

Output example
Maria 10 99
Marcela 9 88
Julia 9 81
Andreia 8 78
NULL 7 63
NULL 7 68
Note: Print "NULL" in the name if the grade is less than 8.

Explanation
Consider the following table with the grades assigned to students:

ID  | Name       | Value  | Grade
1    | Julia         | 81       |   9
2    | Carol        | 68       |   7
3    | Maria       | 99       |   10
4    | Andreia    | 78       |   8
5    | Jaqueline  | 63       |   7
6    | Marcela    | 88       |   9

Thus, the following students obtained grades 8, 9 or 10:
Mary (10)
Marcela (9)
Julia (9)
Andreia (8)
Você deve inserir um link como resposta

## 7 Object Oriented Programming

An application has four classes: A, B, C and D. Classes B and C are subclasses of A. In classes A, B and C there are different attributes and a method called checkBalance() with the same signature but which performs operations that return values ​​of type double, however, different. Class D is the main class. Within the main() method of class D, the following instructions were typed:

 A* obj = new B();
double v = obj->checkBalance();

A* obj1 = new C();
double v1 = obj1->checkBalance();

When these lines were executed, the variable v received the value 100.00 and the variable v1 received the value 125.00. Note that both obj and obj1 are type A objects, however, in addition to having different attributes, when calling the checkBalance() method through these objects, the return contained in variables v and v1 was different. This shows an example of:

Encapsulation NO

Method Overload - NO

Multiple inheritance - NO

Generalization - NO

Polymorphism - YES

## 8 SQL query to grab distinct pet names

Information about pets is kept in two separate tables:

TABLE dogs
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL

TABLE cats
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL

Write an SQL query that select all distinct pet names.
Você deve inserir um link como resposta


## 9 bq problems (3 separate questions)

Consider a software utility called ‘bq’ that allows the user to read runtime, persistent data structures.

Commands:

bq                               | Starts utility from linux command prompt
___________________________________________________________________________________________
rel <relation name> | Specify which data structure, also known as a relation, to access
___________________________________________________________________________________________
di                                | Display data structure of relation identified
___________________________________________________________________________________________
key
key <key values>      | Request system to prompt for key values for the relation identified, or                                              specify the key to  read
___________________________________________________________________________________________
re k                             | Read the record associated with the key value identified
___________________________________________________________________________________________
re f                              | Read the first record
___________________________________________________________________________________________
re l                              | Read the last record
___________________________________________________________________________________________
re n                             | Read the next record
___________________________________________________________________________________________
re p                             | Read the previous record
___________________________________________________________________________________________
x                                 | Exit the utility
___________________________________________________________________________________________


Upload into your Github / Gitlab or Bitbucket account a solution for the following problems:

Problem #1
I have a relation ABC.

What are the sequence of commands to determine its structure?

Problem #2

I have a relation XYZ.
Its structure is noted below:

XYZ =  { file (B1) of } record
  B1   : integer;     { block number   B1
  Name : Char8;       { B1 name
end;

What are the sequence of commands to read the first and last records of relation XYZ?

Problem #3
Continuing with relation XYZ

What are the sequences of commands to read key value 10 and the next 2 records?

## 10 length calculation

Make a program in C/C++ or Java language that calculates the length of a string informed by the user (do not use any pre-existing function or method for this, such as len(), count(), strlen() or lenght());
Você deve inserir um link como resposta

## 11 string reverse

Make a program in C/C++ or Java language that reverses a string informed by the user without using any temporary variable, buffer or any pre-existing function or method for this.

## 12 Linux Operating System: Beginner, Intermediate, Expert

Expert


## 13 VI Editor: Beginner, Intermediate, Expert


## 14 What is the use of the Q_OBJECT macro?

According to this documentation: https://www.qt.io/product/qt6/qml-book/ch17-qtcpp-qobject
It enables meta-object abilities such as signals and slots.
This can be used, for instance, to allow communication between objects, and so on.

## 15 What is a signal in Qt and what makes it different from an event? Give an example of usage.

From some little amount of research I did:

- a signal is an implementation of the observer pattern. It is typically used to communicate state changes between objects. For instance:
1. We program a UI button to generate a signal
2. Another object connects to this signal to observe it
3. When the end-user clicks this button, the observer is notified
4. The observer may choose to do whatever it wants with this info
A signal may be easily generated programmatically.

- an event is typically generated by an external source, for instance keyboards and mouses. It also implements the observer pattern, but we cannot generate it programmatically without emulating some kind of external source.

## 16 Given the statements below, select only the correct ones:

1. Signals and Slots can only be connected once (using the same sender and receiver).
2. It is possible to clone an object of class QObject.
3. When a QWidget is inserted inside a QLayout, the QLayout becomes a parent of the QWidget.
4. qmake is used to compile the project.
5. Qt Resource System is used for storing binary files in the application's executable.
6. QString uses a 16-bit system for saving characters.
7. Every class that inherits from QObject must have the Q_OBJECT macro.
8. The code will not compile if you implement a Signal in the header file.
9. qDebug is not needed to debug classes.