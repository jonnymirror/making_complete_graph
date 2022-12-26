#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main() {
	long long int n;//完全グラフの頂点数
	cin >> n;
	long long int m = 0;//枝数
	vector<vector<long long int>> graph;

	graph.resize(n);
	for (long long int i = 0; i < n; i++) {
		for (long long int j = i + 1; j < n; j++) {
			graph[i].push_back(j + 1);
			m++;
		}
	}
	
	cout << n << " " << m << " " <<endl;
	for (long long int i = 0; i < n; i++) {
		for (long long int j = 0; j < graph[i].size(); j++) {
			cout <<i+1 <<" " << graph[i][j] <<" "<< endl;
		}
	}

	
	ofstream outputfile("complete_graph1.txt");
	outputfile << n << " " << m << " " << endl;
	for (long long int i = 0; i < n; i++) {
		for (long long int j = 0; j < graph[i].size(); j++) {
			outputfile << i + 1 << " " << graph[i][j] << " " << endl;
		}
	}
	outputfile.close();
	return 0;
}