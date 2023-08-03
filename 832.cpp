class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)        // traverse n/2 times and swap n-1,i elements after changing them
            {
                if(image[i][j]==1)
                    image[i][j]=0;
                else
                    image[i][j]=1;
            }
            reverse(image[i].begin(),image[i].end());
        }
        return image;
    }
};
