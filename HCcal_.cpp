#include <iostream>
#include <string>
#include <cstdlib>      /* for random numbers */

using std::cout;
using std::cin;
using std::endl;
using std::string;

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

void roll6sdie() {
srand( time(NULL) );
double rtol;
int die = 6;
int roll = rand() % die +1;
cout << endl << "The die rolled a " << roll << "\n" << endl;	
if (roll == 5) {
cout << "Worked" << endl << endl;
} else if (roll == 6) {
cout << "Worked" <<  endl << endl;
} else {
cout << "Failed" <<  endl << endl;
}
}

void defensesim(){
char again2;
cout << "  Defense Simulation  (For Impervious and Super Senses)\n(I for Impervious S for Super Senses)\n";
cin >> again2;
if (again2 == 73) {
roll6sdie();
} else if (again2 == 83) {
roll6sdie1();
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
cout << "Critical Miss\n";
} else if (rtol == 12) {
cout << "Critical Hit and Knock Back\n";
} 
}

void attacksim() {
char again1;
cout << "\n  Attack Simulation\n(Y for yes, anything else for no)\n";
cin >> again1;
if (again1 == 89) {
srand( time(NULL) );
rolldie();
}
}

void gamefight() {
double at,nu,de,pro = 36,pro0 = 1,pro1 = 2,pro2 = 3,pro3 = 4,pro4 = 5,pro5 = 6,pre0 = 0.0;
cout << "\nAttack: ";
cin >> at;
cout << "Defense: ";
cin >> de;
nu = de - at;
if (nu == 2) {
cout << "Roll Needed: " << nu; 
pre0 = pro0 / pro * 100;
cout << "\nPercent of Hitting: " << pre0 << endl;
attacksim();
/*defensesim();*/
} else if (nu == 3) {
cout << "Roll Needed: " << nu;
pre0 = pro1 / pro * 100;
cout << "\nPercent of Hitting: " << pre0 << endl;
attacksim();
/*defensesim();*/
} else if (nu == 4) {
cout << "Roll Needed: " << nu;
pre0 = pro2 / pro * 100;
cout << "\nPercent of Hitting: " << pre0 << endl;
attacksim();
/*defensesim();*/
} else if (nu == 5) {
cout << "Roll Needed: " << nu;
pre0 = pro3 / pro * 100;
cout << "\nPercent of Hitting: " << pre0 << endl;
attacksim();
/*defensesim();*/
} else if (nu == 6) {
cout << "Roll Needed: " << nu;
pre0 = pro4 / pro * 100;
cout << "\nPercent of Hitting: " << pre0 << endl;
attacksim();
/*defensesim();*/
} else if (nu == 7) {
cout << "Roll Needed: " << nu;
pre0 = pro5 / pro * 100;
cout << "\nPercent of Hitting: " << pre0 << endl;
attacksim();
/*defensesim();*/
} else if (nu == 8) {
cout << "Roll Needed: " << nu;
pre0 = pro4 / pro * 100;
cout << "\nPercent of Hitting: " << pre0 << endl;
attacksim();
/*defensesim();*/
} else if (nu == 9) {
cout << "Roll Needed: " << nu;
pre0 = pro3 / pro * 100;
cout << "\nPercent of Hitting: " << pre0 << endl;
attacksim();
/*defensesim();*/
} else if (nu == 10) {
cout << "Roll Needed: " << nu;
pre0 = pro2 / pro * 100;
cout << "\nPercent of Hitting: " << pre0 << endl;
attacksim();
/*defensesim();*/
} else if (nu == 11) {
cout << "Roll Needed: " << nu;
pre0 = pro1 / pro * 100;
cout << "\nPercent of Hitting: " << pre0 << endl;
attacksim();
/*defensesim();*/
} else if (nu == 12) {
cout << "Roll Needed: " << nu;
pre0 = pro0 / pro * 100;
cout << "\nPercent of Hitting: " << pre0 << endl;
attacksim();
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
