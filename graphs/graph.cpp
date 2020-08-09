#include <bits/stdc++.h>
using namespace std;
set<int> visited;
void dfsGraph(int s,map<int,vector<int>> graph)
{
	for(auto i:graph[s])	
    {
      if(visited.find(i) == visited.end())
    	{
        	visited.insert(i);
    	  dfsGraph(i,graph);
      }
    }
      
  return;	
  

}

int main()
{
  	int nooftestcases;
  	cin>>nooftestcases;
  	while(nooftestcases--)
    {
     	int ne,nv;
      	cin>>nv>>ne;
      	map<int,vector<int>> graph;
    	while(ne--)
        {
          	int u,v;
        	cin>>u>>v;          	
          	graph[u].push_back(v);
          	graph[v].push_back(u);
        }
      	
      	int count=0;      	
      	while(!graph.empty())
      	{
          	auto k=graph.begin();       	
          	int s=k->first;
          	visited.insert(s);
        	dfsGraph(s,graph);
          	for(auto i: visited) 
            {
            	graph.erase(i);
            }
          	visited.clear();
          	count++;
      	}
      	cout<<count<<endl;     	
    
    }
	return 0;
}



// #include <bits/stdc++.h> 
// using namespace std; 
// void dfsHelper(map<int,vector<int> > &g,int u,int v,int path[],int pathindex); 
// void dfs(map<int,vector<int> > &g,int u,int v); 
// vector<int> dfsVisited; 
// int countvar;
// int main() { 
//   int t;
//   scanf("%d", &t);
//   while(t--){ 
//     int nv, ne; 
//     scanf("%d %d", &nv, &ne);
//     map< int, vector<int> > g; 
//     for(int i=0;i<ne;i++)
//     { int u, v; scanf("%d %d", &u, &v); 
//      g[u].push_back(v); 
//      g[v].push_back(u);
//     } 
//     int q;
//     cin>>q; 
//     for(int j=0;j<q;j++) 
//     { 
//       int u,v; 
//       cin>>u>>v;
//      dfs(g,u,v);
//       cout<<endl; 
//     } 
//     printf("\n");
//   } 
//   return 0; } 
// void dfs(map<int,vector<int> > &g,int u,int v)
// { 
//   dfsVisited.clear();
//   countvar=0;
//   int path[100];
//   dfsHelper(g,u,v,path,0);
// } 
// void dfsHelper(map<int,vector<int> > &g,int u,int v,int path[],int pathindex) {
//   if(find(dfsVisited.begin(),dfsVisited.end(),u)== dfsVisited.end())
//   { 
//     path[pathindex]	=u; 
//     dfsVisited.push_back(u);
//   }
//   else 
//     return; 
//   if(u==v) { 
//     if(pathindex==0)
//     { 
//       cout<<countvar;
//     } 
//     else{
//       if(pathindex<countvar)
//       countvar=pathindex;
//     } 
//     cout<<countvar;
//     return;
//   } 
//   vector<int> v1=g[u];
//   for(int i=0;i<v1.size();i++) 
//   { dfsHelper(g,v1[i],v,path,pathindex+1);
//   }
// }