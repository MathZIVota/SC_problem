#include"SC.hpp"

int input_graph(vector<CSet> &Sets, string filename){
  int N, M, c, s; //N-кол-во вершин, M-кол-во ребер,
  string line;
  CSet S_tmp;

  ifstream input_file(filename); 
  if (input_file.is_open()) {
    input_file >> N;
    input_file >> M;
    for(size_t i=0; i<M; i++){
      input_file >> S_tmp.c;
      getline(input_file, line);
      istringstream iss(line);
      while (iss >> s) S_tmp.elements.push_back(s);
      S_tmp.index = i;
      Sets.push_back(S_tmp);
      S_tmp.elements.clear();
    }
  }
  
  input_file.close();
  return N;
}
