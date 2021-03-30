#include <iostream>
#include <fstream>
using namespace std;



string explore(string directory) 
{
    int directoryNum;
    int fileNum;
    int bytes;

    if (!directory.find("/"))
    {
        string toString = "Total number of directories, files, and bytes is: ";
        toString += directoryNum;
        toString += " directories, ";
        toString += fileNum;
        toString += " files, ";
        toString += bytes;
        toString += " bytes.";

        return toString;
    }
    else
    {
        string sub = directory.substr(0, directory.find_first_of("/"));
        if (sub.find("."))
            fileNum++;
        else
            directoryNum++;
        int i = directory.find(sub);
        directory.erase(i, directory.length);
        explore(directory);
    }

}





int main()
{
    string path;
    cout << "Enter the path to be deconstructed.";
    cin >> path;

    explore(path);
}


