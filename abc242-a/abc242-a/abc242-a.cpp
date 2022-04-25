// abc242-a.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <iomanip>
#define rep(i,n) for(ll i=0;i<n;++i)
typedef long long ll;

int main() {
	double a, b, c, x;
	std::cin >> a >> b >> c >> x;
	if (x <= a) {
		double ans = 1.0;
		std::cout << std::fixed << std::setprecision(15) << ans << std::endl;
		return 0;
	}
	else if (x > b) {
		double ans = 0.0;
		std::cout << std::fixed << std::setprecision(15) << ans << std::endl;
		return 0;
	}
	else {
		double ans = c / (b - a);
		std::cout << std::fixed << std::setprecision(15) << ans << std::endl;
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
