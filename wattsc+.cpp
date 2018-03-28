/* Volts and Amps to WATTS and OHMS */ 
/* Created by Doom2099 */
#include <iostream>
#include <string>
using std::cout;
using std::cin;


int main(){
double volts = 0.0,watts = 0.0,amps = 0.0,resist = 0.0;

cout << "This is for finding watts and resistance \n\n";

for (int i=1; i < 100; ++i){
cout << "Enter Volts: ";
cin >> volts;
cout << "\nEnter Amps: ";
cin >> amps;

watts = volts * amps;
resist = volts / amps;
cout << "\nYour Device uses: " << watts << " Watts\n" << "and it's Resistance in ohms: " << resist << "\n" << endl;
} return 0;
}
