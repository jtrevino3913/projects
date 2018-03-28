#include <iostream>
#include <string>
#include <cstdlib>      /* for random numbers */

using std::cout;
using std::cin;
using std::string;

void roll6sdie() {
srand( time(NULL) );
double rtol;
int die = 6;
int roll = rand() % die +1;
cout << endl << "The die rolled a " << roll << "\n" << endl;	
if (roll > 5) {
cout << "Worked" << endl << endl;
} else {
cout << "Failed" <<  endl << endl;
}
}

void roll6sdie1() {
srand( time(NULL) );
double rtol;
int die = 6;
int roll = rand() % die +1;
cout << endl << "The die rolled a " << roll << "\n" << endl;	
if (roll == 5) {
cout << "Worked: No damage dealt" << endl << endl;
} else if (roll == 6) {
cout << "Worked: No damage dealt" <<  endl << endl;
} else if (roll < 5) {
cout << "Invulnerability: Damage dealt is reduced by 2" <<  endl << endl;
} 
}

void rolldie() {
srand( time(NULL) );
double rtol;
int die = 6, die2 = 6;
int roll = rand() % die +1, roll2 = rand() % die2 +1;
rtol = roll + roll2;
cout << endl << "The die rolled a " << roll << " and a " << roll2 << "\n\nRoll Total: "<< rtol << "\n\n";	
if (rtol == 2) {
cout << "Critical Miss: Damage dealt by 1\n";
} else if (rtol == 12) {
cout << "Critical Hit and Knock Back: Damage dealt is increased by 1 and Knock Back is equal to total Damage dealt\n";
} 
}

void defensesim(){
char  again2;
cout << "  Defense Simulation  (I for Impervious S for Super Senses, anything else for no)\n";
cin >> again2;
if (again2 == 73) {
roll6sdie1();
} else if (again2 == 83) {
roll6sdie();
return;
}
}

void attacksim(){
char again4;
srand( time(NULL) );
rolldie();
cout << "Defense Simulation? (Y for yes, anything else for no)\n";
cin >> again4;
if (again4 == 89) {
defensesim();
}
}

void simul(){
char again3;
cout << "\n  Simulation\n(A for Attack D for Defense, anything else for no)\n";
cin >> again3;
if (again3 == 65) {
attacksim();
} else if (again3 == 68) {
defensesim();
}
}

void gamefight() {
double at,nu,de;
cout << "\nAttack: \n";
cin >> at;
cout << "Defense: \n";
cin >> de;
nu = de - at;
if (nu == 2) {
cout << "Roll Needed: " << nu; 
cout << "\nPercent of Hitting: %99.99" << endl;
simul();
} else if (nu == 3) {
cout << "Roll Needed: " << nu;
cout << "\nPercent of Hitting: %97.22" << endl;
simul();
} else if (nu == 4) {
cout << "Roll Needed: " << nu;
cout << "\nPercent of Hitting: %91.66" << endl;
simul();
} else if (nu == 5) {
cout << "Roll Needed: " << nu;
cout << "\nPercent of Hitting: %83.33" << endl;
simul();
} else if (nu == 6) {
cout << "Roll Needed: " << nu;
cout << "\nPercent of Hitting: %72.22" << endl;
simul();
} else if (nu == 7) {
cout << "Roll Needed: " << nu;
cout << "\nPercent of Hitting: %58.33" << endl;
simul();
} else if (nu == 8) {
cout << "Roll Needed: " << nu;
cout << "\nPercent of Hitting: %41.66" << endl;
simul();
} else if (nu == 9) {
cout << "Roll Needed: " << nu;
cout << "\nPercent of Hitting: %27.77" << endl;
simul();
} else if (nu == 10) {
cout << "Roll Needed: " << nu;
cout << "\nPercent of Hitting: %16.66" << endl;
simul();
} else if (nu == 11) {
cout << "Roll Needed: " << nu;
cout << "\nPercent of Hitting: %8.33" << endl;
simul();
} else if (nu == 12) {
cout << "Roll Needed: " << nu;
cout << "\nPercent of Hitting: %2.77" << endl;
simul();
}
}

void rolldie0() {
srand( time(NULL) );
double rtol;
int die = 6, die2 = 6;
int roll = rand() % die +1, roll2 = rand() % die2 +1;
rtol = roll + roll2;
cout << endl << "The die rolled a " << roll << " and a " << roll2 << "\n\nRoll Total: "<< rtol << "\n\nRoll Again? (Y for yes, anything else for no)" << endl << endl;
}

void startgame() {
char again;
cout << "Roll to start the game? (Y for yes, anything else for no)\n";
cin >> again;
while (again == 89) {
srand( time(NULL) );
rolldie0();
cin >> again;
}
}

int main() {
char again;
srand( time(NULL) );
startgame();
for (int i=1; i < 100; ++i){
gamefight();
}
}
