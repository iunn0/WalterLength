#include <iostream>
using namespace std;

int m_strlen(const char* str) {
    int length = 0;
    for (int i = 0; i < strlen(str); i++) {    // �������� ������ i < 20, ���� ������� �� ����� ��������� strlen(const char* str);
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
