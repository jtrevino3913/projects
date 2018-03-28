#include <iostream>
#include <string>
/**created 08/18/2013**/
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main (){
double tb = 0.0,min = 0.0,mb = 0.0,fs = 0.0,d = 0.0,ab = 0.0,vb = 0.0;
cout << "Filesize in Megabytes: ";
cin >> mb;
fs = mb * 8192;
cout << "Time Duration in Minutes: ";
cin >> min;
d = min * 60;
tb = fs / d;
cout << "Audio Bitrate: ";
cin >> ab;
vb = tb - ab;
cout << "Video Bitrate: " << vb << endl;
}
