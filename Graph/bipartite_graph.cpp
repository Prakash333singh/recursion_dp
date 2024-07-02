// ////bool checkBipartite(vector<int>adj[],int node,vector<int>&color,int currColor)
// {
//    color[node]=currColor;

//    queue<int>q;
//    q.push(node);
//    while(!q.empty())
//    {
//        int u=q.front();
//         q.pop();

//         for(int &v:adj[u])
//         {
//             //same color
//             if(color[v]==color[u]){
//                 return false;
//             }
//             //not collored yet
//             else if(color[v]==-1)
//             {
//              color[v]=1-color[u];
//              q.push(v);
//             }
//         }

//     }
//      return true;
// }
// 	bool isBipartite(int V, vector<int>adj[]){
// 	    // Code here
// 	    vector<int>color(V,-1);

// 	    for(int i=0;i<V;i++)
// 	    {
// 	        if(color[i]==-1){
// 	             if(checkBipartite(adj,i,color,1)==false)
// 	                  return false;
// 	        }

// 	    }
// 	    return true;
// 	}

// }