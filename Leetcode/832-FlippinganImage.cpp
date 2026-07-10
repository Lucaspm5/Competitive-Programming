// Link: https://leetcode.com/problems/flipping-an-image/description/?envType=problem-list-v2&envId=simulation

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0;i < image.size();++i) {
            for (int j = 0;j < image[i].size() >> 1;++j) {
                image[i][j] ^= 1;
                image[i][image[i].size() - j - 1] ^= 1;
                swap(image[i][j], image[i][image[i].size() - j - 1]);
            }
            if (image[i].size() & 1) image[i][image[i].size() >> 1] ^= 1; 
        }      
        return image;
    }
};

int main() {
    
    return 0;
}