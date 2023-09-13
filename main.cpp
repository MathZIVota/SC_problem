#include"SC.hpp"
vector<string> Tests{
"sc_6_1",
"sc_9_0",
"sc_15_0",
"sc_25_0",
"sc_27_0",
"sc_45_0",
"sc_81_0",
"sc_135_0",
"sc_157_0",
"sc_192_0",
"sc_243_0",
"sc_330_0",
"sc_405_0",
"sc_448_0",
"sc_450_0",
"sc_450_1",
"sc_450_2",
"sc_450_3",
"sc_450_4",
"sc_500_0",
"sc_500_1",
"sc_500_2",
"sc_500_3",
"sc_500_4",
"sc_595_0",
"sc_595_1",
"sc_595_2",
"sc_595_3",
"sc_595_4",
"sc_760_0",
"sc_760_1",
"sc_760_2",
"sc_760_3",
"sc_760_4",
"sc_1000_0",
"sc_1000_1",
"sc_1000_2",
"sc_1000_3",
"sc_1000_4",
"sc_1000_5",
"sc_1000_6",
"sc_1000_7",
"sc_1000_8",
"sc_1000_9",
"sc_1000_10",
"sc_1000_11",
"sc_1000_12",
"sc_1000_13",
"sc_1000_14",
"sc_1024_0",
"sc_1165_0",
"sc_2000_0",
"sc_2000_1",
"sc_2000_2",
"sc_2000_3",
"sc_2000_4",
"sc_2000_5",
"sc_2000_6",
"sc_2000_7",
"sc_2000_8",
"sc_2000_9",
"sc_2241_0",
"sc_2304_0",
"sc_3000_0",
"sc_3000_1",
"sc_3000_2",
"sc_3000_3",
"sc_3000_4",
"sc_3000_5",
"sc_3000_6",
"sc_3000_7",
"sc_3000_8",
"sc_3000_9",
"sc_3095_0",
"sc_3202_0",
"sc_3314_0",
"sc_3425_0",
"sc_3558_0",
"sc_3701_0",
"sc_3868_0",
"sc_4000_0",
"sc_4000_1",
"sc_4000_2",
"sc_4000_3",
"sc_4000_4",
"sc_4000_5",
"sc_4000_6",
"sc_4000_7",
"sc_4000_8",
"sc_4000_9",
"sc_4025_0",
"sc_4208_0",
"sc_4413_0",
"sc_5120_0",
"sc_6931_0",
"sc_6951_0",
"sc_7435_0",
"sc_8002_0",
"sc_8661_0",
"sc_8661_1",
"sc_9524_0",
"sc_10370_0",
"sc_18753_0",
};

int main() {
  vector<CSet> Sets;
  vector<int> used;
  string filename;
  int N;
  int var = 0;
  cout << "1:All files, 2:One file\n/--> ";
  cin >> var;
  switch(var){
    case 1:
      for(auto t: Tests){
        cout << t << ": ";
        N = input_graph(Sets, t);
        cout << Solution(Sets, N, used) << endl; 
        Sets.clear();
        used.clear();
      }
     
      break;
    case 2:
      cout << "Enter the filename:";
	    cin >> filename;
      N = input_graph(Sets, filename);
      cout << Solution(Sets, N, used) << endl;
      for(auto u: used) cout << u << " ";
      cout << endl;
      break;
    default:
      break;
  }
	
	
  cout << "\nEnd\n";
  return 0;
}
