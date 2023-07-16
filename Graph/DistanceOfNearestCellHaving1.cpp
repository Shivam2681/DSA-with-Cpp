// vector < vector < int > > nearest(vector < vector < int >> & mat, int n, int m) {
//      vector<vector<int>> vis(n,vector<int>(m,0));
// 	    vector<vector<int>> dist(n,vector<int>(m,0));
// 	    queue<pair<pair<int,int>,int>> q;
	    
// 	    for(int i=0;i<n;i++){
// 	        for(int j=0;j<m;j++){
// 	            if(mat[i][j] == 1){
// 	                q.push({{i,j},0});
// 	                vis[i][j] = 1;
// 	            }
// 	            else{
// 	                vis[i][j] = 0;
// 	            }
// 	        }
// 	    }
// 	    int drow[] = {-1,0,1,0};
// 	    int dcol[] = {0,1,0,-1};
	    
// 	    while(!q.empty()){
// 	        int r = q.front().first.first;
// 	        int c = q.front().first.second;
// 	        int steps = q.front().second;
// 	        q.pop();
// 	        dist[r][c] = steps;
	        
// 	        for(int i=0;i<4;i++){
// 	            int nrow = r + drow[i];
// 	            int ncol = c + dcol[i];
	            
// 	            if(nrow >=0 && nrow<n && ncol >=0 && ncol <m && vis[nrow][ncol] == 0){
// 	                vis[nrow][ncol] = 1;
// 	                q.push({{nrow,ncol},steps+1});
// 	            }
// 	        }
// 	    }
// 	    return dist;
// }