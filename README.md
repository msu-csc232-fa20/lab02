# Lab02

Structs and Arrays of Structs

## Background

In this lab we'll take a look at creating our first abstract data type using a C++ construct known as a `struct`. In some languages, such as Pascal, this is often referred to as a record. The `struct` is used to group together related data. Unlike an array, whose elements are all of the same data type, the `struct` contains a number of elements (a.k.a. fields), but they need not be of the same data type. 

## Objectives

The objectives of this lab are:

1. To introduce the concept of a structure
1. To develop and manipulate an array of structures
1. To use structures as parameters
1. To use hierarchical (nested)  structures

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

Following are a number of tasks necessary to complete this lab.

### Study Sample Code

In this lab we study the structure. Like arrays, structures allow the programmer to group data together. However, unlike an array, structures allow you to group together items of different data types. To see how  this could be useful in practice, consider what a student  must do to register for a college course. Typically, one obtains the current list of available courses and then selects the desired course or courses. The following is an example of a course you may choose:

CHEM 310 Physical Chemistry 4 Credits

Note that there are four items related to this course: the course  discipline (CHEM), the course number (310), the course title (Physical Chemistry), and the number of credit hours  (4). We could define variables as follows:

Variable Definition  | Information Held
---------------------|-----------------
`string discipline`  | 4-letter abbreviation for discipline 
`int courseNumber`   | Integer  valued course  number
`string courseTitle` | First 20 characters of course  title 
`short credits`      | Number of credit  hours

All of these variables are related because they can hold information about the same course. We can package these together by creating a structure. Here is the declaration:

```c++
{
    std::string discipline;
    int courseNumber;
    std::string courseTitle;
    short  credits;
};	//note the semi-colon here
```

The tag is the name of the structure, course in this case. The tag is used like a data type name. Inside  the braces we have the variable declarations that are the members of the structure. So the code above  declares a structure named course which has four members: `discipline`, `courseNumber`, `courseTitle`, and `credits`.

The programmer needs to realize that the structure declaration does not define a variable. Rather it lets  the compiler know what a course structure is composed of. That is, the declaration creates a new data type  called course. We can now define variables of type course as follows:

```c++
course pChem;
course colonialHist;
```

Both `pChem` and  `colonialHist` will  contain  the four members previously listed. We could have also  defined these two structure variables on a single line:

```c++
course pChem, colonialHist;
```

Both `pChem` and `colonialHist` are  called instances of the `course` structure. In other words, they are both user defined variables that exist in computer memory. Each structure variable contains the four structure members.

#### Accessing Structure Members

Certainly the programmer will need to assign the members values and also keep track of what values the  members have. C++ allows you to access structure members using the dot operator. Consider the following syntax:

```c++
colonialHist.credits = 3;
```

In this statement the integer 3 is assigned to the `credits` member of `colonialHist`. The dot operator is used to connect the member name to the structure variable it belongs to.

Now let us put all of these ideas  together into a program. [Sample Program 11.1](SampleProgram11-1.cpp) uses the course structure just described. This interactive program  allows a student to add requested courses and keeps track of the number of credit hours for which they have enrolled. The execution is controlled by a `do-while` loop.

Make sure that you understand the logic of this program and, in particular, how structures are used. Notice the line at the end of the while loop that reads

```c++
while(toupper(addclass) == 'Y');
```

What do you think the purpose of `toupper` is?

As a second example, suppose we would like a simple program that computes the area and circumference of two circles input by the user. Although we can easily do this using  previously developed techniques, let us see how this can be done using structures. We will also determine which circle’s center is further from the origin. Take a look at [Sample Program 11.2](SampleProgram11-2.cpp)

#### Arrays of Structures

In the previous sample program we were interested in two instances of the `circle` structure. What if we  need  a much  larger number, say 100, instances of this structure? Rather than define each one separately, we can use an array of structures. An array of structures is defined just like any other array. For example suppose we already have the following structure declaration in our program:

```c++
struct circle
{
    float centerX;  // x coordinate of center 
    float centerY;  // y coordinate of center 
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

Like the arrays encountered in previous coursework, you can access an  array element using its subscript. So `circn[0]` is the first structure in the array,  `circn[1]` is the second, and so on. The last structure in the array is `circn[99]`. To access a member of one of these array elements, we still use the dot operator. For instance, `circn[9].circumference` gives the `circumference` member of `circn[9]`. If we want to display the center and distance from the origin of the first 30 circles we can use the following:

```c++
for (int count = 0; count < 30; count++)
{
    cout << circn[count].centerX << endl;
    cout << circn[count].centerY << endl;
    cout << circn[count].distance_from_origin;
}
```

When studying arrays you may have seen two-dimensional arrays which allow one to have "a collection of collections" of data.  An array of structures allows one to do the same  thing.  However, we have already noted that structures permit you to group together items of different data type, whereas arrays do not. So an array of structures can sometimes be used when a two-dimensional array cannot.

