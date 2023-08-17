#include <iostream>
using namespace std;

int m_strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main()
{;
    cout << m_strlen("Walter White") << endl;
}