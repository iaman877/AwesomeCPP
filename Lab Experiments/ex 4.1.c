/* Implement  Inheritance  as  shown  in  the  diagram. ClassStudent has members functions student_Details() and 
display_Student_Details() and name,   roll   no,   and   gender   as   data   members. Internal_Exam   and  
External_Exam   classes have separate  functions  to  get  and  display  Internal  and External marks for 6 subjects. 
Define Result classto evaluate   and   display   the   results   suitably   (40%  Internal + 60% External).   */
/* ----------------------------------------------------------------------------------------------------------- */

#include <iostream> 
#include <string> 
using namespace std; 
class student 
{ 
 int roll; 
 string name; 
 string gender; 
public: 
void student_Details() 
{ 
  cout<<"\nEnter Name  "; 
  cin>>name; 
  cout<<"\nEnter Roll  "; 
  cin>>roll; 
  cout<<"\nEnter Gender  "; 
  cin>>gender; 
} 
void show_student_Details() 
{ 
 cout<<"\nName  "<<name; 
 cout<<"\nRoll "<<roll; 
 cout<<"\nGender "<<gender; 
}  
}; 
class Internal_Exam:public student 
{ 
protected: 
 float imarks[6]; 
public: 
  float sum; 
void get_imarks() 
{ 
for(int i=0;i<6;i++) 
{ 
 cout<<"\nEnter Marks of subject "<<i+1<<" - "; 
 cin>>imarks[i]; 
} 
} 
void display_imarks() 
{ 
for(int i=0;i<6;i++) 
{ 
    cout<<"\nMarks of subject "<<i+1<<" - "<<imarks[i]; 
    sum=sum+imarks[i]; 
    cout<<"Marks in the inter is : "<<sum<<endl; 
 }
 }               
}; 
class External_Exam:public student 
{ 
protected: 
float emarks[6]; 
public: 
float esum; 
void get_emarks() 
{ 
for(int i=0;i<6;i++) 
{ 
  cout<<"\nEnter Marks of subject "<<i+1<<" - "; 
  cin>>emarks[i]; 
} 
} 
void display_emarks() 
{ 
for(int i=0;i<6;i++) 
{ 
  cout<<"\nMarks of subject "<<i+1<<" - "<<emarks[i]; 
  esum=esum+emarks[i]; 
  cout<<"Total marks in the External is:"<<esum<<endl; 
} 
} 
}; 
class Result:public External_Exam,public Internal_Exam 
{ 
float result[6]; 
public: 
void display_result() 
{ 
 for(int i=0;i<6;i++) 
{ 
 result[i]=((0.4*sum)+(0.6*esum));  
 cout<<"\nResult subject "<<i+1<<" - "<<result[i]; 
} 
} 
}; 
int main() 
{ 
  Result stud; 
  stud.Internal_Exam::student_Details(); 
  stud.Internal_Exam::show_student_Details(); 
  stud.get_imarks(); 
  stud.display_imarks(); 
  stud.get_emarks(); 
  stud.display_emarks(); 
  stud.display_result(); 
  return 0; 
}
