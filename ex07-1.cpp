#include <iostream>
#include <fstream> // ファイル入出力を行うためのライブラリ

int main() {
    int x, y, z;

    // 入力ファイルストリームを開く    
    /* 空欄(1)　*/
    std::ifstream input{"7-1-input.txt"};


    // 入力ファイルエラーチェック
    // 入力ファイルがない場合、標準エラー出力 cerr を用いて
    // 「cannot open inputfile」と表示する
    if (!input) {
        std::cerr << "cannot open inputfile\n";
        return 1;
    }

    // 入力ファイルから整数を読み込み、合計を計算
    /* 空欄(3)　*/
    input >> x >> y >> z;
    int sum = x + y + z;

    // 出力ファイルストリームを上書きモード（デフォルトモード）で開く
    /* 空欄(4)　*/
    std::ofstream output{"7-1-output.txt"};
    
    // 出力ファイルエラーチェック
    // 出力ファイルがない（読み取り専用）場合、標準エラー出力 cerr を用いて
    // 「cannot open outputfile」と表示する
    if (!output) {
        std::cerr << "cannot open outputfile\n";
        return 1;
    }

    // 合計の計算結果を出力ファイルに書き込む
    /* 空欄(5)　*/
    output << sum << "\n";

    // ファイルを閉じる
    input.close();
    output.close();

    return 0;
}
