/* Given a vector of vectors V. Find the minimum vertical sum. Vectors inside the vector V may not be of the same size.
The vertical sum is defined as described below:
If we have a vector of vectors V:
1  2 3 4
5 6
7 8 9
The vertical sums are: Sum of {1 5 7}, Sum of {2 6 8}, Sum of {3 9}, Sum of {4}. */

int minimum_vertical_sum(vector<vector<int>>v)
{
    //Your code here
    vector<int>res;
    
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(j >= res.size()){
                res.push_back(v[i][j]);
            }else{
                res[j] += v[i][j];
            }
        }
    }
    auto it = min_element(res.begin(),res.end());
    return *it;
}