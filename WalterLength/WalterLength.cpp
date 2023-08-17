#include <iostream>
using namespace std;

int m_strlen(const char* str) {
    int length = 0;
    for (int i = 0; i < strlen(str); i++) {    // спочатку зробив i < 20, потім знайшов що можна викликати strlen(const char* str);
       if(str[i] != '\0') {
            length++;
        }
    }
    return length;
}

int main()
{;
    cout << m_strlen("Walter White") << endl;
}
