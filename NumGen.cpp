#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
ios_base::sync_with_stdio(false); string fname;
int nums;int cnum=1;int seed;int cnum2=1;
cout << "NumGen v2.0\nInput a seed number" << endl;

cin >> seed;cout << "Input the amount of numbers to generate" << endl;cin >> nums;
cout << "Your filename will be like this: generatednums & numbers*seed" << endl;cin.get();
cout << "To stop the program you'll have to forcedly stop it with CTRL+C." << endl;cin.get();
cout << "Seed set to " << seed << endl;
cout << "Generating " << nums << " numbers with seed " << seed << "..." << endl;
int calcsu = nums * seed + rand() % 1;string calcsust = to_string(calcsu);
fname.append("generatednums");fname.append(calcsust);fname.append(".txt");ofstream MyFile(fname);
MyFile << "GENERATED NUMBERS:" << endl;
while(cnum < nums+1){cout << cnum * seed << " num: " << cnum << endl;cnum++;}
cout << "Writing to file..." << endl;
while(cnum2 < nums+1){
MyFile << cnum2 * seed;MyFile << " num: ";MyFile << cnum2 << endl;cnum2++;}
nums = int(); cnum = int(); seed = int(); cnum2 = int(); calcsu = int(); MyFile.close();
cout << "OK! Press any key to restart." << endl;cin.get();cout << "\033[2J\033[1;1H"; cnum=1;cnum2=1;
cout << "Success!" << endl;cout << "\033[2J\033[1;1H";main();}