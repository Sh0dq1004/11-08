#include <iostream>
#include <fstream> // ファイル入出力を行うためのライブラリ

int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <inputfile>" << "\n";
        return 1;
    }
    
    // コマンド引数を利用し、入力ファイルを読み込む
    std::ifstream input{argv[1]};
    
    // 入力ファイルエラーチェック
    // 入力ファイルがない場合、標準エラー出力 cerr を用いて
    // 「cannot open inputfile」と表示する
    if (!input) {
        std::cerr << "cannot open inputfile\n";
        return 1;
    }

    // multiple_of_two.txtファイルを上書きモード（デフォルトモード）で開く
    // multiple_of_three.txtファイルを上書きモード（デフォルトモード）で開く
    std::ofstream multipleOfTwoFile{"multiple_of_two.txt"}, multipleOfThreeFile{"multiple_of_three.txt"};



    // 出力ファイルエラーチェック
    // 何れかの出力ファイルが読み取り専用の場合、標準エラー出力 cerr を用いて
    // 「cannot open outputfile」と表示する
    if (!multipleOfTwoFile || !multipleOfThreeFile) {
        /* 空欄(3)　*/  // エラーメッセージをエラー出力に表示
        std::cerr << "cannot open outputfile\n";
        return 1;
    }

    // 入力ファイル内の数値を条件に従って出力ファイルに書き込み
    for (int i{}; input >> i;) {
        // 2の倍数であれば、multiple_of_two.txtに "Multiple of two: i" の形式で書き込む
        // 3の倍数であれば、 multiple_of_three.txtに "Multiple of three: i" の形式で書き込む
        /* 空欄(5)　*/
        if (i%2==0) multipleOfTwoFile << "Multiple of two: " << i << "\n";
        if (i%3==0) multipleOfThreeFile << "Multiple of three: " << i << "\n";
    }


    // ファイルを閉じる
    multipleOfTwoFile.close();
    multipleOfThreeFile.close();

    return 0;
}
