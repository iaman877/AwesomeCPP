/* Read  molecular  values  for  Oxygen,  Hydrogen  and  Sulphur  in  three  different  classes  named Oxygen,  Hydrogen  and  
Sulphur.  These  classes  have  a  common  non-member  friend  function which  is  used  to  find  out  the chemical compounds
(Sulphuric  acid,  Sulphurous acid, Thiosulphuric acid) that canbe formed based on the given input molecular values. */
/*  --------------------------------------------------------------------------------------------------------------   */
#include <iostream> 
using namespace std; 
class hydrogen; 
class sulphur; 
class oxygen 
{ 
  int o_moles; 
  float o_molecules; 
public: 
void getO() 
{ 
     cout<<"\nMoles of Oxygen  "; 
     cin>>o_moles; 
     cout<<"Weight of Oxygen  "; 
     cin>>o_molecules; 
} 
friend void calc(oxygen,hydrogen,sulphur); 
}; 
class hydrogen 
{ 
     int h_moles; 
     float h_molecules; 
public: 
void getH() 
{ 
        cout<<"\nMoles of Hydrogen  "; 
        cin>>h_moles; 
        cout<<"Weight of Hydrogen  "; 
        cin>>h_molecules; 
} 
friend void calc(oxygen,hydrogen,sulphur); 
}; 
class sulphur 
{ 
  int s_moles; 
  float s_molecules; 
public: 
void getS() 
{ 
    cout<<"\nMoles of sulphur  "; 
    cin>>s_moles; 
    cout<<"Weight of sulphur  "; 
    cin>>s_molecules; 
} 
friend void calc(oxygen,hydrogen,sulphur); 
}; 
void calc(oxygen o, hydrogen h, sulphur s) 
{ 
float x=((o.o_moles*o.o_molecules)+(h.h_moles*h.h_molecules)+(s.s_moles*s.s_molecules)); 
cout<<x; 
if(x==100) 
cout<<"\nSulphuric Acid"; 
if(x==116) 
cout<<"\nThiosulphuric Acid"; 
if(x==84) 
cout<<"\nSulphurous Acid"; 
} 
int main() 
{ 
  oxygen o; 
  hydrogen h; 
  sulphur s; 
  o.getO(); 
  h.getH(); 
  s.getS(); 
  calc(o,h,s); 
  return 0; 
}
