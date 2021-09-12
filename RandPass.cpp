//Do not copy:
//More Advanced Version:
//Random Password Generator:
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
void help();
void PASSINTRO(){
cout << "------------------------------------------------------------\n\n";
cout << " RANDOM PASSWORD GENERATOR\n";
cout << "\n\nIf you notice any bug, contact me @ \n"
<< "https://web.facebook.com/abdulrahman.abdulazeez.5243/ \n\n";
cout << "----------------------------------------------------------V2.0\n";
cout << "\n\n";
}

int main(){
system("COLOR A");
srand(time(0));
PASSINTRO();
string optionSelect;
cout << "\n [1] Generate Random Password.\n";
cout << " [2] Help.\n";
cout << " [3] Exit.\n\n";
cout << "Select an option: ";
cin >> optionSelect;

while (optionSelect != "1"){
if (optionSelect == "3"){
return 0;
}
else if (optionSelect == "2"){
help();
string key;
cout << "\n\nEnter any key to continue!";
cin >> key;
system ("CLS");
main();
}

cout << "Wrong Option!";
system ("CLS");
main();
}

if (optionSelect == "1"){
//Nothing;
}
else if (optionSelect == "2"){
return 0;
}
else {
return 0;
}
char NumLetSym[] = "zxcvbnmqpwoeirutyalskdjfhgQWERTYUIOPASDFGHJKLMNBVCZ1234567890:/.,()[]';?>|<!@#$%^&*";
int conv = sizeof(NumLetSym);
cout << "\nWhat do you want to generate a password for? \n\n"
<< "Hint: It could be Facebook, Google, name it and we would do just that \n"
<< "for you. \n\n";
string reason;
cout << "Reason: ";
cin >> reason;
cout << "\nEnter the length of password you want to generate: ";
int n;
cin >>n;
int load;
for (load=0; load <= 100; load++){
system("cls");
PASSINTRO();
cout << "Generating Password......." << load << "%";
cout << "\n\n";
}

int i;
ofstream RandomPass(reason + ".html");
for(i = 0; i < n; i++){
RandomPass << NumLetSym[rand() % conv];
}
RandomPass.close();
string Reader;
ifstream RandomPasser(reason + ".html");
while (getline (RandomPasser, Reader)) {
cout << "===================================================\n";
cout << " " << reason << " generated password: ";
cout << Reader;
cout << "\n===================================================\n\n";
}
cout << "Generated password has been saved in " << reason << ".html on your desktop.\n";
cout << "Note: You are to open it with any text viewer you have available.\n\n";
RandomPasser.close();
cout << "Do you want to re-generate another Password?[Y/N]: ";
string yesNo;
cin >> yesNo;

while (yesNo != "Y"){
if (yesNo == "N"){
return 0;
}
else if (yesNo == "y"){
system ("CLS");
}
else if (yesNo == "n"){
return 0;
}
cout << " Wrong option!!\n\n";
cout << "Do you want to re-generate another Password?[Y/N]: ";
cin >> yesNo;
}

if (yesNo == "Y"){
system("CLS");
cout << "\n";
main();
}
else if (yesNo == "N"){
return 0;
}
else if (yesNo == "y"){
system("CLS");
cout << "\n";
main();
}
else if (yesNo == "n"){
return 0;
}
else {
return 0;
}

return 0;
}
void help(){
cout << "\n\nAn advanced Random Password generator which generates very strong passwords \n"
<< "containing Letters(Small & Capital), Symbols and Numbers. This program also gives \n"
<< "you an option to specify the reason for the password to be created and stores the \n"
<< "generated password on your desktop with the reason you specified as filename \n"
<< "thereby making it easy to check on incase you forget the password generated \n"
<< "\nNote: The password stored on your desktop is in a HTML format. You can choose to \n"
<< "open with any text viewer of your choice.!";

}