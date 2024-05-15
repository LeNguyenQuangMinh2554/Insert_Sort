#include <iostream>
using namespace std;

// Thuật toán sắp xếp chèn là một lựa chọn tốt cho các mảng nhỏ hoặc các mảng đã gần như sắp xếp.
// Tuy nhiên, đối với các mảng lớn hoặc ngẫu nhiên, các thuật toán sắp xếp khác như quicksort, mergesort,
// hoặc heapsort thường được ưa chuộng hơn do hiệu suất tốt hơn.

int main() {
    int n;
    cout << "Nhap vao so luong phan tu mang: "; // Nhập số lượng phần tử của mảng
    cin >> n;
    int arr[n]; // Khởi tạo mảng với n phần tử

    cout << "Nhap vao lan luot tung phan tu vao mang: ";
    // Vòng lặp nhập các phần tử vào mảng
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Bắt đầu thuật toán sắp xếp chèn
    for(int i = 1; i < n; i++) {
        int j = i; // Khởi tạo biến j bằng i
        // Dịch chuyển phần tử arr[j] về đúng vị trí trong mảng đã sắp xếp
        while (j > 0 && arr[j] < arr[j - 1]) {
            // Hoán đổi arr[j] và arr[j-1] nếu arr[j] nhỏ hơn
            int u = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = u;
            j--; // Giảm j để tiếp tục so sánh với các phần tử phía trước
        }
    }

    // In mảng sau khi đã sắp xếp
    cout << "Mang sau khi sap xep la: [";
    for (int i = 0; i < n; ++i) {
        cout << " " << arr[i] << " ";
    }
    cout << "]";
    return 0;
}
