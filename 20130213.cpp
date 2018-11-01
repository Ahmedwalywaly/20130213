#include <iostream>

//Mohamed Foda Abdullah;
//201302013;

 using namespace std;
 

 const char YES = 'y'; 

 class Odometer {


 private: 

 double miles_driven; 
 double fuel_efficiency; 
 double odometer; 


 public: 

 Odometer() { 
 miles_driven = 0.0; 
 fuel_efficiency = 0.0; 
 odometer = 0.0; 

 }  

 void input(){  
 cout<< "Enter trip details! ";
 cout<<endl;
 cout<<"Effeciency of fuel(MPG)?"<<endl; 
 cin>>fuel_efficiency; 
 cout<<"Miles driven?"<<endl; 
 cin>>miles_driven; 
 
 } 


 void set_mile(double &new_miles, double &new_fuel){ 
 new_miles=miles_driven; 
 new_fuel=fuel_efficiency; 

 } 



 void set_odo(double &temp_odometer){ 
 cout<<"Set new odo, please : "<<endl; 
 cin>>odometer; 
 temp_odometer = odometer; 

}
 

 void output(double gas_burned){  
 using namespace std;
 cout.setf(ios::fixed); 
 cout.setf(ios::showpoint); 
 cout.precision(2); 
 cout << "You've burned "<<gas_burned<<" of gas so far."; 

 } 


 void get_fuel_efficiency(double temp_odometer, double new_fuel,double& gas_burned){ 
 gas_burned = temp_odometer / new_fuel; 

 } 

 double add_to_odometer(double &temp_odometer,double new_miles){ 
 temp_odometer = odometer + new_miles; 
 return 0.0; 

 } 


 char play_again(char y_or_n){ 
 cout<<endl;
 cout<<"Add another trip?"<<endl; 
 cin>>y_or_n; 
 return y_or_n; 

 } 


 double reset_odo(double &temp_odometer,char reset_variable){ 
 cout<<"Reset odometer(y,n)?"<<endl; 
 cin>>reset_variable;

 if (reset_variable==YES){ 
 temp_odometer = 0;}

} 

 }; 



 int main (){ 

 Odometer trip; 
 char y_or_n; 
 char variable,reset_variable; 
 double gas_burned; 
 double new_miles,new_fuel,temp_odometer,new_odo;

 do{ 

 trip.input(); 
 trip.set_mile(new_miles,new_fuel); 
 trip.set_odo(temp_odometer); 
 trip.add_to_odometer(new_miles,temp_odometer); 
 trip.get_fuel_efficiency(temp_odometer,new_fuel,gas_burned);
 trip.output(gas_burned); 
 variable = trip.play_again(y_or_n); 

 if (variable == YES){ 
 trip.reset_odo(temp_odometer,reset_variable);

 } 


 }while(variable == YES); 

 return 0; 

 } 


