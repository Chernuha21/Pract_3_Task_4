#include <iostream>
#include <forward_list>
#include <numeric> // ��� std::accumulate

int main() {
    // 1. ��������� ������'������ ������ � ������� ������ �������
    std::forward_list<int> flist = { 5, 10, 15, 20 };

    // 2. ���������� ���� ��� �������� ������
    int sum = std::accumulate(flist.begin(), flist.end(), 0);

    // 3. ��������� ����������
    std::cout << "Sum of list: " << sum << std::endl;

    return 0;
}
