#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string filename, line;
    cout << "Enter the name of the file to read: ";
    cin >> filename;
    ifstream myfile(filename);
    if(myfile.is_open())
    {
        while(getline(myfile,line))
        {
            cout<<line<<endl;
        }
        myfile.close();
    }
    else
    {
        cout<<"Unable to open file";
    }
    return 0;
}
