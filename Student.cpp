#include "Student.h"
#include <iostream>
#include<cstring>

// Assign studentId and name
void Student::assignDetails(int no , char name[]) {
  studentID = no ;
  strcpy(studentName,name);
}

// Display StudentId and Name
void Student::display() {
 
}
