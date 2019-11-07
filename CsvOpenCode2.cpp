// インクルード
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>  // ※istringstreamを使うために必要
#include"print.h"
#include"COC2.h"

// 名前空間
using namespace std;
//
//  CSVを取得する
//      filename    読み込むファイル名
//      table       読み込んだCSVの内容
//      delimiter   区切り文字(今回はデフォルトでカンマ)
//



bool GetContents(const string& filename, vector<vector<string>>& table, const char delimiter = ',')
{
	// ファイルを開く
	fstream filestream(filename);
	if (!filestream.is_open())
	{
		// ファイルが開けなかった場合は終了する
		return false;
	}
 
	// ファイルを読み込む
	while (!filestream.eof())
	{
		// １行読み込む
		string buffer;
		filestream >> buffer;
 
		// ファイルから読み込んだ１行の文字列を区切り文字で分けてリストに追加する
		vector<string> record;    // １行分の文字列のリスト
		istringstream streambuffer(buffer); // 文字列ストリーム
		string token;                       // １セル分の文字列
		while (getline(streambuffer, token, delimiter))
		{	
			// １セル分の文字列をリストに追加する
			record.push_back(token);
		
		}
		// １行分の文字列を出力引数のリストに追加する
		table.push_back(record);
    
	}
    
	return true;
}

//
// メインメソッド
//
int main(int argc, const char * argv[])
{
	// 変数を定義する
	bool status = false;    // メソッドのステータス
	string filename = "day3_q3.csv"; // ファイル名
	vector<vector<string>> table;   // 読み込んだCSVファイルの内容
 
	// CSVファイルの内容を取得する
	status = GetContents(filename, table);
	if (!status)
	{
		// 取得に失敗した場合はエラー終了する
		return -1;
	}

    string num0;
    num0 = table[0][0] + " " + table[1][0];
    table[1][0] =num0;   
    string num00;
    num00 = table[1][1];
    string num000;
    num000 = table[1][2];
    string num0000;
    num0000 = table[1][3];

    //group_idのstring型→int型変換(for)
    int INTg[9];
    vector<string> Intg = {table[2][0],table[3][0],table[4][0],table[5][0],table[6][0],table[7][0],table[8][0],table[9][0],table[10][0]};
    for (int itg = 0; itg<Intg.size(); itg++){
        istringstream box(Intg[itg]);
        box >> INTg[itg];
    }

    //nameのstring型→char型変換(for)
    const char* CHAR[9];
    vector<string> Char = {table[2][1],table[3][1],table[4][1],table[5][1],table[6][1],table[7][1],table[8][1],table[9][1],table[10][1]};
    for (int ppp = 0; ppp<Char.size(); ppp++){
        CHAR[ppp] = Char[ppp].c_str();
    }
    
    //idのstring型→int型変換(for)
    int INTi[9];
    vector<string> Inti = {table[2][2],table[3][2],table[4][2],table[5][2],table[6][2],table[7][2],table[8][2],table[9][2],table[10][2]};
    for (int iti = 0; iti<Inti.size(); iti++){
        istringstream box1(Inti[iti]);
        box1 >> INTi[iti];
    }
  
    //scoreのstring型→int型変換(for)
    int INTs[9];
    vector<string> Ints = {table[2][3],table[3][3],table[4][3],table[5][3],table[6][3],table[7][3],table[8][3],table[9][3],table[10][3]};
    for (int its = 0; its<Ints.size(); its++){
        istringstream box2(Ints[its]);
        box2 >> INTs[its];
    }   


    XXX taro;
    taro.getxxx().Id = INTi[0];
    taro.getxxx().Name = CHAR[0];
    taro.getxxx().Score = INTs[0];

    XXX rokuro;
    rokuro.getxxx().Id = INTi[5];
    rokuro.getxxx().Name = CHAR[5];
    rokuro.getxxx().Score = INTs[5];
    XXX riku;
    riku.getxxx().Id = INTi[8];
    riku.getxxx().Name = CHAR[8];
    riku.getxxx().Score = INTs[8];
    
    XXX Totalscore1; //インスタンス
    int SScore1;
    SScore1  = taro.getxxx().Score + rokuro.getxxx().Score + riku.getxxx().Score;
    Totalscore1.settotalscore(SScore1);
 
 

    YYY jiro;
    jiro.getxxx().Id = INTi[1];
    jiro.getxxx().Name = CHAR[1];
    jiro.getxxx().Score = INTs[1];

    YYY santa;
    santa.getxxx().Id = INTi[2];
    santa.getxxx().Name = CHAR[2];
    santa.getxxx().Score = INTs[2];
    YYY goro;
    goro.getxxx().Id = INTi[4];
    goro.getxxx().Name = CHAR[4];
    goro.getxxx().Score = INTs[4];
    
    YYY Totalscore2; //インスタンス
    int SScore2;
    SScore2  = jiro.getxxx().Score + santa.getxxx().Score + goro.getxxx().Score;
    Totalscore2.settotalscore(SScore2);
    


    ZZZ siho;
    siho.getxxx().Id = INTi[3];
    siho.getxxx().Name = CHAR[3];
    siho.getxxx().Score = INTs[3];

    ZZZ nana;
    nana.getxxx().Id = INTi[6];
    nana.getxxx().Name = CHAR[6];
    nana.getxxx().Score = INTs[6];
    ZZZ yayoi;
    yayoi.getxxx().Id = INTi[7];
    yayoi.getxxx().Name = CHAR[7];
    yayoi.getxxx().Score = INTs[7];
    
    ZZZ Totalscore3; //インスタンス
    int SScore3;
    SScore3  = siho.getxxx().Score + nana.getxxx().Score + yayoi.getxxx().Score;
    Totalscore3.settotalscore(SScore3);
 
    cout <<  num0 << "," << num00 << "," << num000 << "," << num0000 << endl;
    cout << INTg[0] << "," <<  taro.getxxx().Name<< "," << taro.getxxx().Id << "," << taro.getxxx().Score << endl;
    cout << INTg[5] << "," <<  rokuro.getxxx().Name<< "," << rokuro.getxxx().Id << "," << rokuro.getxxx().Score << endl;
    cout << INTg[8] << "," <<  riku.getxxx().Name<< "," << riku.getxxx().Id << "," << riku.getxxx().Score << endl;
    cout << INTg[1] << "," <<  jiro.getxxx().Name<< "," << jiro.getxxx().Id << "," << jiro.getxxx().Score << endl;
    cout << INTg[2] << "," <<  santa.getxxx().Name<< "," << santa.getxxx().Id << "," << santa.getxxx().Score << endl;
    cout << INTg[4] << "," <<  goro.getxxx().Name<< "," << goro.getxxx().Id << "," << goro.getxxx().Score << endl;
    cout << INTg[3] << "," <<  siho.getxxx().Name<< "," << siho.getxxx().Id << "," << siho.getxxx().Score << endl;
    cout << INTg[6] << "," <<  nana.getxxx().Name<< "," << nana.getxxx().Id << "," << nana.getxxx().Score << endl;
    cout << INTg[7] << "," <<  yayoi.getxxx().Name<< "," << yayoi.getxxx().Id << "," << yayoi.getxxx().Score << endl;

	return 0;
}


 /*
    // 確認のためにコンソールに内容を出力する
	for (int row = 2; row < table.size(); row++)
	{
		vector<string> record;  // １行分の内容
		record = table[row];    // １行分読み込む
		
		// １セルずつ読み込んでコンソールに出力する
		for (int column = 3; column < record.size(); column++)
		{
			cout << record[column];
			// 末尾の列でない場合はカンマを出力する
			if (column < record.size() - 1)
			{
				cout << ",";
			}
		}
		cout << endl;
		
	}
*/