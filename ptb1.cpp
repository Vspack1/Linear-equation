//biện luận ptbac1 
#include <iostream>
using namespace std;

// Hàm biện luận phương trình bậc 1
void bienLuan(int a, int b) {
    if (a == 0) {
        if (b == 0) {
            cout << "VSN"; // Vô số nghiệm
        } else {
            cout << "VN"; // Không có nghiệm
        }
    } else {
        cout << "Nghiệm duy nhất: " << -b / (float)a << endl; // Nghiệm duy nhất
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    bienLuan(a, b); // Gọi hàm biện luận
    return 0; // Kết thúc chương trình
}
