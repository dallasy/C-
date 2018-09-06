//
//  main.cpp
//  hello
//
//  Created by 黃家楹 on 2018/8/28.
//  Copyright © 2018年 dallas. All rights reserved.
//

#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

    // insert code here...
// GradeBook classdefinition
class GradeBook
{
public:
    // construstor initializes courseName with string supplied as argument
    explicit GradeBook( string name)
    : courseName ( name ) // member initializer to initialize courseName
    {
        // empty body
    } // end GradeBook constructoe
    
    //function to set the course name
    void setCourseName( string name )
    {
        courseName = name; // store the course name in the object
    } // end function setCourseName

      // function that gets the course name
    string getCourseName () const
    {
        return courseName; // return the object 's courseName
    } // end function getCourseName
    // display a welcome message to the GradeBook user
    void displayMessage () const
    {
        //call getCourseName to get the courseName
        cout << "Welcome th the grade book for\n" << getCourseName () << "!"
        << endl;
    } // end function displayMessage
private:
    string courseName; // course name for this GradeBook
}; // end class GradeBook

// function maun begins program execution
int main(int argc, const char * argv[]) {
    // create two GradeBook objects
    GradeBook gradebook1("CS101 Introduction to C++ Programming");
    GradeBook gradebook2("CS102 Data Structure in C++");
    
    // display initial value of courseName for each GradeBook
    cout << "gradebook1 created for course:" << gradebook1.getCourseName()
        << "\ngradebook2 created for course" << gradebook2.getCourseName()
        << endl;
} // end main
