#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long
const string master = "abcdefghijklmnopqrstuvwxyz";
signed main()
{
	string s;
	cin >> s;
	vector<int> vp(28);

	for(int i =0; i < (int)s.size();i++){
		if(s[i] == 'a'){
			vp[0]++;
		}else if(s[i] == 'b'){
			vp[1]++;
		}else if(s[i] == 'c'){
			vp[2]++;
		}else if(s[i] == 'd'){
			vp[3]++;
		}else if(s[i] == 'e'){
			vp[4]++;
		}else if(s[i] == 'f'){
			vp[5]++;
		}else if(s[i] == 'g'){
			vp[6]++;
		}else if(s[i] == 'h'){
			vp[7]++;
		}else if(s[i] == 'i'){
			vp[8]++;
		}else if(s[i] == 'j'){
			vp[9]++;
		}else if(s[i] == 'k'){
			vp[10]++;
		}else if(s[i] == 'l'){
			vp[11]++;
		}else if(s[i] == 'm'){
			vp[12]++;
		}else if(s[i] == 'n'){
			vp[13]++;
		}else if(s[i] == 'o'){
			vp[14]++;
		}else if(s[i] == 'p'){
			vp[15]++;
		}else if(s[i] == 'q'){
			vp[16]++;
		}else if(s[i] == 'r'){
			vp[17]++;
		}else if(s[i] == 's'){
			vp[18]++;
		}else if(s[i] == 't'){
			vp[19]++;
		}else if(s[i] == 'u'){
			vp[20]++;
		}else if(s[i] == 'v'){
			vp[21]++;
		}else if(s[i] == 'w'){
			vp[22]++;
		}else if(s[i] == 'x'){
			vp[23]++;
		}else if(s[i] == 'y'){
			vp[24]++;
		}else if(s[i] == 'z'){
			vp[25]++;
		}
	}

    string res = "";
	for(int i =0;i < 27;i++){
		for(int n = 0; n < vp[i]; n++ ){
			res += master[i];
		}
	}
	cout << res;
	return 0;
}