#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int map[4][4] = {0, };

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        int sum = 0;
        for (int j = 0; j < 4; ++j)
        {
            sum += map[i][j];
        }
        cout << sum << endl;
    }

    return 0;
}