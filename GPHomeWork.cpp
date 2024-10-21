#include <iostream>
#include <algorithm>

//Task2HomeWorkGP
// int main() {
//     int ArrayNamedA[15] = {12,42,45,67,43,76,98,76,78,12,25,36,90,12,43};
//     std::cout << ArrayNamedA[5];
// }

//Task4HomeWorkGP
// namespace HomeWork {
//     class HomeWork {
//         public : void FindMinElement() {
//             int ArrayNamedB[10] = {12,42,45,67,43,76,98,76,9,13};
            // int MinArrayMember = *std::min_element(ArrayNamedB, ArrayNamedB + 10);
            // std::cout << "Minimal number in array is : " << MinArrayMember;
//         }
//     };
// }
// int main() {
//     HomeWork::HomeWork hw;
//     hw.FindMinElement();
//     return 0;
// }

//Task8HomeWorkGP
namespace HomeWork {
    class Taskinho8 {
    public:
        void MaxMinSwap() {
            int ArrayNamedC[10] = {12, 42, 45, 67, 43, 76, 98, 9, 76, 13};
            int MinArrayMember = *std::min_element(ArrayNamedC, ArrayNamedC + 10);
            int MaxArrayMember = *std::max_element(ArrayNamedC, ArrayNamedC + 10);
            for (int i = 0; i < 10; i++) {
                if (ArrayNamedC[i] == MinArrayMember) {
                    ArrayNamedC[i] = MaxArrayMember;
                } 
                else if (ArrayNamedC[i] == MaxArrayMember) {
                    ArrayNamedC[i] = MinArrayMember;
                }
            }
            std::cout << "Array after swapping min and max values: ";
            for (int i = 0; i < 10; i++) {
                std::cout << ArrayNamedC[i] << " ";
            }
            std::cout << std::endl;
        }
    };
}
int main() {
    HomeWork::Taskinho8 hw;
    hw.MaxMinSwap();
    return 0;
}
