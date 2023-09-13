#include"SC.hpp"

int Coef_Need(CSet a, vector<int> used){
  int cnt=0;
  for(auto x: a.elements){
    if(used[x] == 0) cnt++;
  }
  return cnt;
}

bool UsedElements(vector<int> used){
  int cnt = 0;
  int size = used.size();
  for(size_t i = 0; i < size; i++) {
    if(used[i] == 1) cnt++;
  }
  return cnt == size;
}

double Solution(vector<CSet> &Sets, int N, vector<int> &used_sets){
  vector<int> used_elem;
  double sum = 0;
  
  for(int i = 0; i < N; i++) used_elem.push_back(0);
  for(int i = 0; i < Sets.size(); i++) used_sets.push_back(0);
  int needSet_index = -1;
  int needSet_coef = -1, Coef;
 
  while(!UsedElements(used_elem)){
    for(auto s: Sets){
      if(used_sets[s.index] == 0){
        Coef = Coef_Need(s, used_elem);
        if(Coef > needSet_coef){
          needSet_coef = Coef;
          needSet_index = s.index;
        }
      }
    }
    if(needSet_index > -1){
      for(auto x: Sets[needSet_index].elements) used_elem[x] = 1;
      sum += Sets[needSet_index].c;
      used_sets[needSet_index] = 1;
    }
    needSet_coef = -1;
    needSet_index = -1;                                     
  }
  
  return sum;
}
