#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // For parsing lines
using namespace std;

void parseCSV(const string& filename)
{
   ifstream file(filename);

   if(!file.is_open())
   {
      cout<<"Error opening file"<<endl;
      return;
   }

   string line;

   while (getline(file,line))
   {
      stringstream ss(line);

      string name;
      string age;
      string initial;
      string isstudent;
      string grade;

      getline(ss,name, ' ');
      getline(ss,age, ' ');
      getline(ss,initial, ' ');
      getline(ss,isstudent, ' ');
      getline(ss,grade, ' ');

      cout<<name<<endl;
      cout<<age<<endl;
      cout<<initial<<endl;
      cout<<isstudent<<endl;
      cout<<grade<<endl;

      cout<<endl;
   }

   file.close();

}

int main() {
   parseCSV("students.csv");

   return 0;
}
