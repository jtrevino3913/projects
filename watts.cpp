/* Volts and Amps to WATTS and OHMS */ 
/* Created by Doom2099 */
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
double	volts = 0.0;
double	watts = 0.0;
double	amps = 0.0;
double  resist = 0.0;
char c='Y';
  
cout << "This is for finding watts and resistance \n\n";

while(c=='y'||c=='Y')
{
cout << "Enter Volts: ";
cin >> volts;
cout << "\nEnter Amps: ";
cin >> amps;

watts = amps * volts;
resist = volts / amps;
cout << "\nYour Device uses: " << watts << " Watts\n" << "and it's Resistance in ohms: " << resist << endl;
cout<<"Do you want to calculate the Resistance and Watt for other values of Voltage and Amps? (Y/N)\n";
cin>>c;
}
return 0;
}
