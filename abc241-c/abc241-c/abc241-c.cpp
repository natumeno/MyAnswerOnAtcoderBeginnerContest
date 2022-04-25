// abc241-c.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <iomanip>
#include <math.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main() {
	int n;
	std::cin >> n;
	std::vector<std::string> s(n);
	rep(i, n) {
		std::cin >> s[i];
	}

	//East
	rep(i, n) {
		rep(j, n - 5) {
			int E = 0;
			for (int k = 0; k < 6; ++k) {
				if (s[i][j + k] == '#') {
					E++;
				}
			}
			if (E >= 4) {
				std::cout << "Yes" << std::endl;
				return 0;
			}
		}
	}

	//South
	rep(i, n - 5) {
		rep(j, n) {
			int S = 0;
			for (int k = 0; k < 6; ++k) {
				if (s[i + k][j] == '#') {
					S++;
				}
			}
			if (S >= 4) {
				std::cout << "Yes" << std::endl;
				return 0;
			}
		}
	}

	//SouthEast
	rep(i, n - 5) {
		rep(j, n - 5) {
			int SE = 0;
			for (int k = 0; k < 6; ++k) {
				if (s[i + k][j + k] == '#') {
					SE++;
				}
			}
			if (SE >= 4) {
				std::cout << "Yes" << std::endl;
				return 0;
			}
		}
	}

	//SouthWest
	for (int i = 0; i <= n - 6; ++i) {
		for (int j = n - 1; j >= 5; --j) {
			int SW = 0;
			for (int k = 0; k < 6; ++k) {
				if (s[i + k][j - k] == '#') {
					SW++;
				}
			}
			if (SW >= 4) {
				std::cout << "Yes" << std::endl;
				return 0;
			}
		}
	}

	std::cout << "No" << std::endl;
	return 0;
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
