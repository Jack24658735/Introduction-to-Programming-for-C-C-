#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstring>
#include <istream>

using namespace std;
class name_freq_pair {
public:
    string name;
    int freq;
};

void print_word_array(vector<name_freq_pair>&, int);
void process_a_line(string, map<string, int>&);

bool compare(name_freq_pair &p1, name_freq_pair &p2) {
    return (p1.freq > p2.freq);
}

int main(int argc, char** argv) {
    ifstream in_fp(argv[1], ios::in);
    map<string, int> book;
    map<string, int>::iterator it;

    string cpp_line;
    int line_count = 0;
    getline(in_fp, cpp_line); //get the content first time
    while (!cpp_line.empty()) {
        process_a_line(cpp_line, book);
        line_count++;
        getline(in_fp, cpp_line);
    }
    cout << "Total no. of lines: " << line_count << endl;

    vector<name_freq_pair> A; //without declaring size
    name_freq_pair p;
    for (it = book.begin(); it != book.end(); it++) {
        p.name = it->first; //first corresponds to string in the map
        p.freq = it->second; //second corresponds to int in the map
        A.push_back(p);
    }
    printf("The total number of words in \"%s\": %d\n", argv[1], A.size());
    sort(A.begin(), A.end(), compare);
    print_word_array(A, 10);
    return 0;
}

void print_word_array(vector<name_freq_pair>& A, int topRank) {
    const int SIZE = A.size();
    for (int i = 0;i < topRank && i < SIZE; i++) {
        printf("The %d-th frequent word is (%s) with no. of appearances (%d)\n", i, A[i].name.c_str(), A[i].freq);
    }
}

void process_a_line(string cpp_line, map<string, int>& book) {
    char c_line[1000000], *word;
    string cpp_word;
    map<string, int>::iterator it;

    strcpy(c_line, cpp_line.c_str());
    word = strtok(c_line, "\"-,:;.() ");

    //processing words
    while (word != 0) {
        cpp_word = word;
        it = book.find(cpp_word);
        if (it != book.end()) {
            it->second = (it->second) + 1;
        }
        else {
            book[cpp_word] = 1;
        }
        word = strtok(NULL, "\"-,:;.() ");
    }
}
