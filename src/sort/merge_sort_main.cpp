#include "algorithm_project/sort/merge_sort.h"

#include <iostream> // 標準入出力のため (std::cin, std::cout)
#include <vector>   // std::vector を使うため

int main() {
    int n; // 1行目の配列の長さを格納する変数

    // 1行目から配列の長さを読み込む
    std::cin >> n;

    // 読み込んだ長さ n で std::vector<int> を作成
    // これにより、n 個の要素を持つ vector が確保される
    std::vector<int> vec(n);

    // 2行目から配列の要素を読み込む
    // for ループを n 回実行し、各要素を vector に格納する
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i]; // スペース区切りで整数を読み込み、vec[i] に代入
    }

    std::cout << "作成された vector の内容:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << vec[i];
        // 最後の要素でなければスペースを出力
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    
    MergeSort(vec, 0, n);

    std::cout << "ソートされた vector の内容:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << vec[i];
        // 最後の要素でなければスペースを出力
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0; // プログラム終了
}