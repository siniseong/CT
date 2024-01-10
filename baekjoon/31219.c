#include <stdio.h>
#include <math.h>

double func(double g[][10], double dp[][(1<<10)], int N, int cur, int idx){
	if(idx==(1<<N)-1){
		if(g[cur][0]){
			return g[cur][0];
		}
		else{
			return 1000000000.0;
		}
	}
	
	if(dp[cur][idx]){
		return dp[cur][idx];
	}
	
	double min=1000000000.0;
	for(int i=1; i<N; ++i){
		if((1<<i) & idx){
			continue;
		}

		if(g[cur][i]){
			double tmp=func(g, dp, N, i, (idx | (1<<i)))+g[cur][i];
			if(min>tmp){
				min=tmp;
			}
		}
	}
	
	return dp[cur][idx]=min;
}

int main(void){
	int N;
	long long X[10], Y[10];
	double g[10][10]={0}, dp[10][(1<<10)]={0};
	
	scanf("%d", &N);
	for(int i=0; i<N; ++i){
		scanf("%lld %lld", X+i, Y+i);
	}
	for(int i=0; i<N; ++i){
		for(int j=0; j<N; ++j){
			if(i!=j){
				g[i][j]=sqrt((double)((X[i]-X[j])*(X[i]-X[j])+(Y[i]-Y[j])*(Y[i]-Y[j])));
			}
		}
	}

	printf("%.12lf\n", func(g, dp, N, 0, 1));
	
	return 0;
}