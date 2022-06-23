// Write program to do the following:
// a. Print all the nodes reachable from a given start ing node in a digraph using BFS method.
// b. Check whether a given graph is connected or not using DFS method.

#include <stdio.h>
#include <stdlib.h>

int f = 0;
int r = -1;
int n, i, j, flag = 0;

int adj_matrix[20][20];
int q[20], visited[20];

void bfs(int v){
	int w;
	visited[v] = 1;
	q[++r] = v;
	while(f<=r){
		v = q[f++];
		for(w = 1; w <= n; w++)
			if((adj_matrix[v][w] == 1) && visited[w] == 0){
				visited[w] = 1;
				flag = 1;
				printf("%d",w);
				q[++r] = w;
			}
	}
}

int main(){
	int v;
	printf("Enter the number of vertices: ");
	scanf("%d", &n);
	printf("Enter the adjacency matrix: \n");
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d ", &adj_matrix[i][j]);
		}
	}
	for (int i = 1; i <= n; i++){
		visited[i] = 0;
	}
	printf("Enter the start vertex: ");
	scanf("%d", &v);
	printf("ALl the nodes reachable from %d are: \n", v);
	bfs(v);
	printf("\n");
	
	if(flag==0)
		printf("NO PATH..\n");
	return 0;
	
}
