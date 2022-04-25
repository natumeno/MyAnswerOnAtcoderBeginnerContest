// abc248-a.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <iomanip>
#include <math.h>
#include <set>
#define rep(i,n) for(ll i=0;i<n;++i)
typedef long long ll;

int main() {
	std::string s;
	std::cin >> s;
	std::sort(s.begin(), s.end());
	if (s[0] != '0') {
		std::cout << "0" << std::endl;
		return 0;
	}
	else if (s[1] != '1') {
		std::cout << "1" << std::endl;
		return 0;
	}
	else if (s[2] != '2') {
		std::cout << "2" << std::endl;
		return 0;
	}
	else if (s[3] != '3') {
		std::cout << "3" << std::endl;
		return 0;
	}
	else if (s[4] != '4') {
		std::cout << "4" << std::endl;
		return 0;
	}
	else if (s[5] != '5') {
		std::cout << "5" << std::endl;
		return 0;
	}
	else if (s[6] != '6') {
		std::cout << "6" << std::endl;
		return 0;
	}
	else if (s[7] != '7') {
		std::cout << "7" << std::endl;
		return 0;
	}
	else if (s[8] != '8') {
		std::cout << "8" << std::endl;
		return 0;
	}
	else if (s[9] != '9') {
		std::cout << "9" << std::endl;
		return 0;
	}
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
