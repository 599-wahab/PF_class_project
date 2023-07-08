ifstream fileInput;
int offset;
string line;
char* search = "a"; // test variable to search in file
// open file to search
fileInput.open(cfilename.c_str());
if(fileInput.is_open()) {
    while(!fileInput.eof()) {
        getline(fileInput, line);
        if ((offset = line.find(search, 0)) != string::npos) {
            cout << "found: " << search << endl;
        }
    }
    fileInput.close();
}
else cout << "Unable to open file.";



unsigned int curLine = 0;
while(getline(fileInput, line)) { // I changed this, see below
    curLine++;
    if (line.find(search, 0) != string::npos) {
        cout << "found: " << search << "line: " << curLine << endl;
    }
}




for(unsigned int curLine = 0; getline(fileInput, line); curLine++) {
    if (line.find(search) != string::npos) {
        cout << "found: " << search << "line: " << curLine << endl;
    }
}






//dell



#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main()
{
string line, name;
cout << "Please Enter the name of record you want to delete: ";
cin >> name;
ifstream myfile;
myfile.open("StaffList.txt");
ofstream temp;
temp.open("temp.txt");
while (getline(myfile, line))
{
if (line != name)
temp << line << endl;
}
cout << "The record with the name " << name << " has been deleted if it exsisted" << endl;
myfile.close();
temp.close();
remove("StaffList.txt");
rename("temp.txt", "StaffList.txt");

system("pause");
return 0;
}




string deleteline;
string line;

ifstream fin;
fin.open("example.txt");
ofstream temp;
temp.open("temp.txt");
cout << "Which line do you want to remove? ";
cin >> deleteline;



while (getline(fin,line))
{
    if (line != deleteline)
    {
    temp << line << endl;
    }
}

temp.close();
fin.close();
remove("example.txt");
rename("temp.txt","example.txt");


while (getline(fin,line))
{
    line.replace(line.find(deleteline),deleteline.length(),"");
    temp << line << endl;

}




#include <iostream>
#include <fstream>
    
void eraseFileLine(std::string path, std::string eraseLine) {
    std::string line;
    std::ifstream fin;
    
    fin.open(path);
    // contents of path must be copied to a temp file then
    // renamed back to the path file
    std::ofstream temp;
    temp.open("temp.txt");

    while (getline(fin, line)) {
        // write all lines to temp other than the line marked for erasing
        if (line != eraseLine)
            temp << line << std::endl;
    }

    temp.close();
    fin.close();

    // required conversion for remove and rename functions
    const char * p = path.c_str();
    remove(p);
    rename("temp.txt", p);
}