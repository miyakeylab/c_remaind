#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long

  const string string_6 = "######";
  // const string string_5_1 = ".#####";
  // const string string_5_2 = "#.####";
  // const string string_5_3 = "##.###";
  // const string string_5_4 = "###.##";
  // const string string_5_5 = "####.#";
  // const string string_5_6 = "#####.";
  const string string_4_1 = "..####";
  const string string_4_2 = ".#.###";
  const string string_4_3 = ".##.##";
  const string string_4_4 = ".###.#";
  const string string_4_5 = ".####.";
  const string string_4_6 = "#..###";
  const string string_4_7 = "#.#.##";
  const string string_4_8 = "#.##.#";
  const string string_4_9 = "#.###.";
  const string string_4_10 = "##..##";
  const string string_4_11 = "##.#.#";
  const string string_4_12 = "##.##.";
  const string string_4_13 = "###..#";
  const string string_4_14 = "###.#.";
  const string string_4_15 = "####..";

signed main()
{
	int n;
	cin >> n;
	vector<string> s;
	vector<string> s_tate;
	vector<string> s_naname_1;
	vector<string> s_naname_2;
	for(int i =0;i < n;i++){
    string s_data;
    cin >> s_data;
    // 横チェック
    if(s_data.rfind(string_6) != string::npos){
      cout << "Yes";
      return 0;
    // }else if(s_data.rfind(string_5_1) != string::npos||
    // s_data.rfind(string_5_2) != string::npos||
    // s_data.rfind(string_5_3) != string::npos||
    // s_data.rfind(string_5_4) != string::npos||
    // s_data.rfind(string_5_5) != string::npos||
    // s_data.rfind(string_5_6) != string::npos){
    //   cout << "Yes";
    //   return 0;
    }else if(s_data.rfind(string_4_1) != string::npos||
    s_data.rfind(string_4_2) != string::npos||
    s_data.rfind(string_4_3) != string::npos||
    s_data.rfind(string_4_4) != string::npos||
    s_data.rfind(string_4_5) != string::npos||
    s_data.rfind(string_4_6) != string::npos||
    s_data.rfind(string_4_7) != string::npos||
    s_data.rfind(string_4_8) != string::npos||
    s_data.rfind(string_4_9) != string::npos||
    s_data.rfind(string_4_10) != string::npos||
    s_data.rfind(string_4_11) != string::npos||
    s_data.rfind(string_4_12) != string::npos||
    s_data.rfind(string_4_13) != string::npos||
    s_data.rfind(string_4_14) != string::npos||
    s_data.rfind(string_4_15) != string::npos)
    {
      cout << "Yes";
      return 0;
    }
    s.push_back(s_data);

    for(int p =0;p < n;p++){
      string ss = s_data.substr(p,1);
      if(i == 0){
        s_tate.push_back(ss);
      }else{
      s_tate[p] += ss;
      }
    }
	}
// 縦チェック
    for(int p =0;p < n;p++){
    if(s_tate[p].rfind(string_6) != string::npos){
      cout << "Yes";
      return 0;
    // }else if(s_tate[p].rfind(string_5_1) != string::npos||
    // s_tate[p].rfind(string_5_2) != string::npos||
    // s_tate[p].rfind(string_5_3) != string::npos||
    // s_tate[p].rfind(string_5_4) != string::npos||
    // s_tate[p].rfind(string_5_5) != string::npos||
    // s_tate[p].rfind(string_5_6) != string::npos){
    //   cout << "Yes";
    //   return 0;
    }else if(s_tate[p].rfind(string_4_1) != string::npos||
    s_tate[p].rfind(string_4_2) != string::npos||
    s_tate[p].rfind(string_4_3) != string::npos||
    s_tate[p].rfind(string_4_4) != string::npos||
    s_tate[p].rfind(string_4_5) != string::npos||
    s_tate[p].rfind(string_4_6) != string::npos||
    s_tate[p].rfind(string_4_7) != string::npos||
    s_tate[p].rfind(string_4_8) != string::npos||
    s_tate[p].rfind(string_4_9) != string::npos||
    s_tate[p].rfind(string_4_10) != string::npos||
    s_tate[p].rfind(string_4_11) != string::npos||
    s_tate[p].rfind(string_4_12) != string::npos||
    s_tate[p].rfind(string_4_13) != string::npos||
    s_tate[p].rfind(string_4_14) != string::npos||
    s_tate[p].rfind(string_4_15) != string::npos)
    {
      cout << "Yes";
      return 0;
    }
  }


	for(int i =0;i < n;i++){
      string ss = s[i].substr(i,1);
      string ss2 = s[i].substr(n - i -1,1);
      if(i == 0){
        s_naname_1.push_back(ss);
        s_naname_2.push_back(ss2);
      }else{
      s_naname_1[0] += ss;
      s_naname_2[0] += ss2;
      }
  }

    if(s_naname_1[0].rfind(string_6) != string::npos){
      cout << "Yes";
      return 0;
    // }else if(s_naname_1[0].rfind(string_5_1) != string::npos||
    // s_naname_1[0].rfind(string_5_2) != string::npos||
    // s_naname_1[0].rfind(string_5_3) != string::npos||
    // s_naname_1[0].rfind(string_5_4) != string::npos||
    // s_naname_1[0].rfind(string_5_5) != string::npos||
    // s_naname_1[0].rfind(string_5_6) != string::npos){
    //   cout << "Yes";
    //   return 0;
    }else if(s_naname_1[0].rfind(string_4_1) != string::npos||
    s_naname_1[0].rfind(string_4_2) != string::npos||
    s_naname_1[0].rfind(string_4_3) != string::npos||
    s_naname_1[0].rfind(string_4_4) != string::npos||
    s_naname_1[0].rfind(string_4_5) != string::npos||
    s_naname_1[0].rfind(string_4_6) != string::npos||
    s_naname_1[0].rfind(string_4_7) != string::npos||
    s_naname_1[0].rfind(string_4_8) != string::npos||
    s_naname_1[0].rfind(string_4_9) != string::npos||
    s_naname_1[0].rfind(string_4_10) != string::npos||
    s_naname_1[0].rfind(string_4_11) != string::npos||
    s_naname_1[0].rfind(string_4_12) != string::npos||
    s_naname_1[0].rfind(string_4_13) != string::npos||
    s_naname_1[0].rfind(string_4_14) != string::npos||
    s_naname_1[0].rfind(string_4_15) != string::npos)
    {
      cout << "Yes";
      return 0;
    }

    if(s_naname_2[0].rfind(string_6) != string::npos){
      cout << "Yes";
      return 0;
    // }else if(s_naname_2[0].rfind(string_5_1) != string::npos||
    // s_naname_2[0].rfind(string_5_2) != string::npos||
    // s_naname_2[0].rfind(string_5_3) != string::npos||
    // s_naname_2[0].rfind(string_5_4) != string::npos||
    // s_naname_2[0].rfind(string_5_5) != string::npos||
    // s_naname_2[0].rfind(string_5_6) != string::npos){
    //   cout << "Yes";
    //   return 0;
    }else if(s_naname_2[0].rfind(string_4_1) != string::npos||
    s_naname_2[0].rfind(string_4_2) != string::npos||
    s_naname_2[0].rfind(string_4_3) != string::npos||
    s_naname_2[0].rfind(string_4_4) != string::npos||
    s_naname_2[0].rfind(string_4_5) != string::npos||
    s_naname_2[0].rfind(string_4_6) != string::npos||
    s_naname_2[0].rfind(string_4_7) != string::npos||
    s_naname_2[0].rfind(string_4_8) != string::npos||
    s_naname_2[0].rfind(string_4_9) != string::npos||
    s_naname_2[0].rfind(string_4_10) != string::npos||
    s_naname_2[0].rfind(string_4_11) != string::npos||
    s_naname_2[0].rfind(string_4_12) != string::npos||
    s_naname_2[0].rfind(string_4_13) != string::npos||
    s_naname_2[0].rfind(string_4_14) != string::npos||
    s_naname_2[0].rfind(string_4_15) != string::npos)
    {
      cout << "Yes";
      return 0;
    }

  cout << "No";
  return 0;
}