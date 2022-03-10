/*
 * Date  : 2022-03-10 13:37:47
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <ctime>
const int Max = 5;

int main(int argc, char** argv) {

    using namespace std;
    int golf[Max];

    float secs = 0.2;
    for (int i = 0; i< Max; i++) {
        cout << "round #" << i+1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n') continue;
            // while (cin.get() != '\n') {
            //     clock_t delay = secs * CLOCKS_PER_SEC;
            //     clock_t start = clock();
            //     while (clock()-start < delay);
            //     cout << cin.get();
            //     cout << 1;
            // }
            // while (cin.get() != '\n') cout << cin.get() << " ";

            /* 解读
             * cin 读取失败时, 屏幕输入会留在缓存区.
             * clear() 用来重置 cin 的 error flag, 如果不重置, cin.get() 会拒绝继续读取输入,
             * 后续 cin.get() 始终返回 -1, 从而陷在 while cin.get() 循环.
             * 另一方面, 若只清除 cin 状态而不用 get() 跳过非法字符,
             * 非法字符将一直留在缓存区供 cin >> golf[i] 读取,
             * 从而将陷在 while cin >> golf[i] 循环中.
             */          
            cout << "Please enter a numebr: ";
        }
    } /* end for (int i = 0; i< Max; i++) */

    return 0;
}
