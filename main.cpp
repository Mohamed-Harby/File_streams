// In the name of allah the most gracious the most merciful
#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;
void iofstreams_() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    if (fin.fail()) {
        cout << "Can't open input file\n";
        return;
    }
    if (fout.fail()) {
        cout << "Can't open output file\n";
        return;
    }
    int x, y;
    fin >> x >> y;
    fout << x * y;
    fin.close();
    fout.close();
}

void fstream_() {
    fstream fio("file.txt", ios::in | ios::out | ios::app);
    if (fio.fail()) {
        cout << "Can't open file\n";
        return;
    }
    string line;
    while (getline(fio, line)) {
        cout << line << '\n';
    }
    cout << '\n';
    fio.close();
}

void string_as_stream(string str) {
    istringstream iss(str); // deal with string as an input stream
    string name;
    int age;
    iss >> name >> age;

    ostringstream oss; // deal with string as an output stream
    oss << name << " is " << age << " .\n";
    cout << oss.str();
}


int main() {
    string str = "mohamed 20";

    iofstreams_();
    fstream_();
    string_as_stream(str);

    return 0;
}