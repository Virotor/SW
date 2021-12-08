#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
  fstream file("data");
     int size = 0;
    file.seekg (0, std::ios::end);
    size = file.tellg();
    cout << "Your file has weight: " << size << " bytes" << endl;
    file.close();
return 0;
}
