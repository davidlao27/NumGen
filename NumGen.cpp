#include <iostream>
#include <fstream>
#include <string>
int nums; int cnum; int seed;int cnum2; int main() {
cnum = 1; cnum2 = 1;std::cout << "Input a seed number" << std::endl;
std::cin >> seed;std::cout << "Input the amount of numbers to generate" << std::endl;std::cin >> nums;
std::cout << "Your filename will be like this: generatednums & numbers*seed" << std::endl;std::cin.get();
std::cout << "To stop the program you'll have to forcedly stop it with CTRL+C." << std::endl;std::cin.get();
std::cout << "Seed set to " << seed << std::endl;
std::cout << "Generating " << nums << " numbers with seed " << seed << "..." << std::endl;
std::string fname;int calcsu = nums * seed + rand() % 1;std::string calcsust = std::to_string(calcsu);
fname.append("generatednums");fname.append(calcsust);fname.append(".txt");std::ofstream MyFile(fname);
MyFile << "GENERATED NUMBERS:" << std::endl;
while(cnum < nums+1){std::cout << cnum * seed << " num: " << cnum << std::endl;cnum++;}
std::cout << "Writing to file..." << std::endl;
while(cnum2 < nums+1){
MyFile << cnum2 * seed;MyFile << " num: ";MyFile << cnum2 << std::endl;cnum2++;}
std::cout << "OK! Closing file..." << std::endl;
MyFile.close();std::cout << "SUCCESS." << std::endl;
std::cout << "Done! Press any key to restart." << std::endl;std::cin.get();std::cout << "\033[2J\033[1;1H";
std::cout << "Clearing data..." << std::endl;cnum=1;cnum2=1;
std::cout << "Success!" << std::endl;std::cout << "\033[2J\033[1;1H";main();}
