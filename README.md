# Lab02

Structs and Arrays of Structs

## Background

In this lab we'll take a look at creating our first abstract data type using a C++ construct known as a `struct`. In some languages, such as Pascal, this is often referred to as a record. The `struct` is used to group together related data. Unlike an array, whose elements are all of the same data type, the `struct` contains a number of elements (a.k.a. fields), but they need not be of the same data type. 

## Objectives

The objectives of this lab are:

1. To introduce the concept of a structure
1. To develop and manipulate an array of structures
1. To use structures as parameters
1. To use hierarchical (nested) structures

## Getting Started

As usual, these steps assume you have a GitHub account and that you have linked that account to our GitHub Classroom. If this isn't the case, please review the steps necessary as outlined in Lab00.

1. Accept this assignment by visiting https://classroom.github.com/a/Z8CVCUtM
1. Once the repository is created on GitHub, use Git Bash to clone your repository to your local development machine.
1. Still from within your Git Bash shell, navigate to your cloned repository and create a branch named `develop`:

 ```bash
 git checkout -b develop
 ```

Now you are ready to begin development in this lab.

## Tasks

Following are a number of tasks necessary to meet the lab's objecives.

### Pre-Lab Reading

In this lab we study the structure. Like arrays, structures allow the programmer to group data together. However, unlike an array, structures allow you to group together items of different data types. To see how this could be useful in practice, consider what a student must do to register for a college course. Typically, one obtains the current list of available courses and then selects the desired course or courses. The following is an example of a course you may choose:

CHEM 310 Physical Chemistry 4 Credits

Note that there are four items related to this course: the course discipline (CHEM), the course number (310), the course title (Physical Chemistry), and the number of credit hours (4). We could define variables as follows:

Variable Definition | Information Held
---------------------|-----------------
`string discipline` | 4-letter abbreviation for discipline 
`int courseNumber` | Integer valued course number
`string courseTitle` | First 20 characters of course title 
`short credits`  | Number of credit hours

All of these variables are related because they can hold information about the same course. We can package these together by creating a structure. Here is the declaration:

```c++
{
 std::string discipline;
 int courseNumber;
 std::string courseTitle;
 short credits;
};	//note the semi-colon here
```

The tag is the name of the structure, course in this case. The tag is used like a data type name. Inside the braces we have the variable declarations that are the members of the structure. So the code above declares a structure named course which has four members: `discipline`, `courseNumber`, `courseTitle`, and `credits`.

The programmer needs to realize that the structure declaration does not define a variable. Rather it lets the compiler know what a course structure is composed of. That is, the declaration creates a new data type called course. We can now define variables of type course as follows:

```c++
course pChem;
course colonialHist;
```

Both `pChem` and `colonialHist` will contain the four members previously listed. We could have also defined these two structure variables on a single line:

```c++
course pChem, colonialHist;
```

Both `pChem` and `colonialHist` are called instances of the `course` structure. In other words, they are both user defined variables that exist in computer memory. Each structure variable contains the four structure members.

#### Accessing Structure Members

Certainly the programmer will need to assign the members values and also keep track of what values the members have. C++ allows you to access structure members using the dot operator. Consider the following syntax:

```c++
colonialHist.credits = 3;
```

In this statement the integer 3 is assigned to the `credits` member of `colonialHist`. The dot operator is used to connect the member name to the structure variable it belongs to.

Now let us put all of these ideas together into a program. [Sample Program 11.1](SampleProgram11-1.cpp) uses the course structure just described. This interactive program allows a student to add requested courses and keeps track of the number of credit hours for which they have enrolled. The execution is controlled by a `do-while` loop.

Make sure that you understand the logic of this program and, in particular, how structures are used. Notice the line at the end of the while loop that reads

```c++
while(toupper(addclass) == 'Y');
```

What do you think the purpose of `toupper` is?

As a second example, suppose we would like a simple program that computes the area and circumference of two circles input by the user. Although we can easily do this using previously developed techniques, let us see how this can be done using structures. We will also determine which circle’s center is further from the origin. Take a look at [Sample Program 11.2](SampleProgram11-2.cpp)

#### Arrays of Structures

In the previous sample program we were interested in two instances of the `circle` structure. What if we need a much larger number, say 100, instances of this structure? Rather than define each one separately, we can use an array of structures. An array of structures is defined just like any other array. For example suppose we already have the following structure declaration in our program:

```c++
struct circle
{
 float centerX; // x coordinate of center 
 float centerY; // y coordinate of center 
 float radius;
 float area;
 float circumference;
 float distance_from_origin; // distance of center from origin
};
```

Then the following statement defines an array, `circn`, which has 100 elements. Each of these elements is a `circle` structure variable:

```c++
circle circn[100];
```

Like the arrays encountered in previous coursework, you can access an array element using its subscript. So `circn[0]` is the first structure in the array, `circn[1]` is the second, and so on. The last structure in the array is `circn[99]`. To access a member of one of these array elements, we still use the dot operator. For instance, `circn[9].circumference` gives the `circumference` member of `circn[9]`. If we want to display the center and distance from the origin of the first 30 circles we can use the following:

```c++
for (int count = 0; count < 30; count++)
{
 cout << circn[count].centerX << endl;
 cout << circn[count].centerY << endl;
 cout << circn[count].distance_from_origin;
}
```

When studying arrays you may have seen two-dimensional arrays which allow one to have "a collection of collections" of data. An array of structures allows one to do the same thing. However, we have already noted that structures permit you to group together items of different data type, whereas arrays do not. So an array of structures can sometimes be used when a two-dimensional array cannot.

#### Initializing Structures

We have already seen numerous examples of initializing variables and arrays at the time of their definition in the previous labs. Members of structures can also be initialized when they are defined. Suppose we have the following structure declaration in our program:

```c++
struct course
{
 string discipline;
 int courseNumber;
 string courseTitle;
 short credits;
};
```

A structure variable `colonialHist` can be defined and initialized:

```c++
course colonialHist = {"HIST", 302, "Colonial History", 3};
```

The values in this list are assigned to course’s members in the order they appear. Thus, the string `"HIST"` is assigned to `colonialHist.discipline`, the integer 302 is assigned to `colonialHist.courseNumber`, the string `"Colonial History"` is assigned to `colonialHist.courseTitle`, and the short value 3 is assigned to `colonialHist.credits`. It is not necessary to initialize all the members of a structure variable. For example, we could initialize just the first member:

```c++
course colonialHist = {"HIST"};
```

This statement leaves the last three members uninitialized. We could also initialize only the first two members:

```c++
course colonialHist = {"HIST", 302};
```

There is one important rule, however, when initializing structure members. If one structure member is left uninitialized, then all structure members that follow it must be uninitialized. In other words, we cannot skip members of a structure during the initialization process.

It is also worth pointing out that you cannot initialize a structure member in the declaration of the structure. The following is an illegal declaration:

```c++
// illegal structure declaration struct course
{
string discipline = "HIST";              // illegal
int courseNumber = 302;                  // illegal 
string courseTitle = "Colonial History"; // illegal 
short credits = 3;                       // illegal
};
```

If we recall what a structure declaration does, it is clear why the above code is illegal. A structure declaration simply lets the compiler know what a structure is composed of. That is, the declaration creates a new data type (called `course` in this case). So the structure declaration does not define any variables. Hence there is nothing that can be initialized there.

#### Hierarchical (Nested) Structures

Often it is useful  to nest one structure inside of another structure. Consider [Sample Program 11-3.cpp](SampleProgram11-3.cpp).

Note that the sample programs in this lab so far have not been  modularized. Everything is done within the  `main` function.  In practice, this is not good structured programming. It can lead to unreadable and  overly repetitious code. To solve this problem, we need to be able to pass structures and structure members to functions. In this next section, you will see how to do this.

#### Structures and Functions

Just as  we  can  use  other  variables as  function  arguments, structure  members may be used  as function  arguments. Consider  the following structure  declaration:

```c++
struct circle
{
    float centerX;       // x coordinate of center 
    float centerY;       // y coordinate of center 
    float radius;
    float area;
};
```

Suppose we  also  have  the  following function  definition in the  same  program:

```c++
float computeArea(float r)
{
    return PI * r * r;	// PI must previously be defined as constant float
}
```

Let `firstCircle` be a variable of the `circle` structure  type.  The following function  call  passes `firstCircle.radius` into `r`. The  return  value  is stored  in `firstCircle.area`:

```c++
firstCircle.area = computeArea(firstCircle.radius);
```

It is also  possible to pass  an entire  structure  variable into a function  rather  than an individual member.

```c++
struct course
{
    string discipline;
    int courseNumber;
    string courseTitle;
    short credits;
};

course pChem;
```

Suppose the following function  definition uses  a course structure  variable as its parameter:

```c++
void displayInfo(course c)
{
cout << c.discipline << endl; cout << c.courseNumber << endl; cout << c.courseTitle << endl; cout << c.credits << endl;
}
```

Then the following call passes the `pChem` variable into `c`:

```c++
displayInfo(pChem);
```

There  are many  other topics  relating to functions  and structures such  as returning a structure  from a function and pointers  to structures. Although  we do not have time to develop these concepts in this lab,  you are encouraged to explore these topics further.

### Exercises

#### Working with Basic Structures

The excercises in this section have you modifying [rect_struct.cpp](rect_struct.cpp).

1. Fill in the code as directed by the `TODO:` comments. When you have completed this exercise, stage your changes and commit your code:

   ```bash
   git add rect_struct.cpp
   git commit -m"LAB02 - Complete Exercise 1.1"
   ```

1. Add code to the program so that the modified program will determine whether or not the rectangle entered by the user  is a square.

   _Sample Run_

   ```text
   Enter the length of a rectangle: 7
   Enter the width of a rectangle: 7
   The area of the rectangle is 49.00
   The perimeter of the rectangle is 28.00
   The rectangle is a square.
   ```

   When you have completed this exercise, stage your changes and commit your code:

   ```bash
   git add rect_struct.cpp
   git commit -m"LAB02 - Complete Exercise 1.2"

#### Initializing Structures

The exercises in this section have you modifying [init_struct](init_struct.cpp).

1. Fill in the code as directed by the `TODO:` comments. Your goal is to match the following sample run when executed with the same input.

   _Sample Run_

   ```text
   Please input the yearly income for Tim McGuiness: 30000
   Name: Tim McGuiness
   Social Security Number: 255871234
   Taxes due for this year: $10500.00
   
   Please input the yearly income for John Kane: 60000
   Name: John Kane
   Social Security Number: 278990582
   Taxes due for this year: $17400.00
   ```

   When you have completed this exercise, stage your changes and commit your code.

   ```bash
   git add init_struct.cpp
   git commit -m"LAB02 - Complete exercise 2.1"
   ```

#### Arrays of Structures

The exercises in this section have you modifying [array_struct.cpp](array_struct.cpp).

1. Fill in the code as directed by the `TODO:` comments. Your goal is to match the following sample run when executed with the same input.

   ```text
   Enter this year’s income for tax payer 1: 45000
   Enter the tax rate for tax payer # 1: .19
   Enter this year’s income for tax payer 2: 60000
   Enter the tax rate for tax payer # 2: .23
   Enter this year’s income for tax payer 3: 12000
   Enter the tax rate for tax payer # 3: .01
   Enter this year’s income for tax payer 4: 104000
   Enter the tax rate for tax payer # 4: .30
   Enter this year’s income for tax payer 5: 50000
   Enter the tax rate for tax payer # 5: .22

   Tax Payer # 1: $ 8550.00
   Tax Payer # 2: $ 13800.00
   Tax Payer # 3: $ 120.00
   Tax Payer # 4: $ 31200.00
   Tax Payer # 5: $ 11000.00
   ```
   
   When you have completed this exercise, stage your changes and commit your code.

   ```bash
   git add array_struct.cpp
   git commit -m"LAB02 - Complete exercise 3.1"
   ```

#### Nested Structures

The exercises in this section have you modifying [nestedRect_struct.cpp](nestedRect_struct.cpp). This code  is very similar  to the rectangle program from Exercise 1.1. However, this time you will complete the code  using  nested  structures.

1. Fill in the code as directed by the `TODO:` comments. Your goal is to match the following sample run when executed with the same input.

    _Sample Run_

    ```text
    Enter the length of a rectangle: 9
    Enter the width of a rectangle: 6
    The area of the rectangle is 54.00
    The perimeter of the rectangle is 30.00
    ```

    When you have completed this exercise, stage your changes and commit your code.

    ```bash
    git add nestedRect_struct.cpp
    git commit -m"LAB02 - Complete exercise 4.1"
    ```
