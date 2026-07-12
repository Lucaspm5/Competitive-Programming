# Link: https://leetcode.com/problems/flipping-an-image/description/?envType=problem-list-v2&envId=simulation

from typing import List

class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        s_line = len(image[0])
        for i in range(s_line):
            for j in range((s_line + 1) // 2):
                image[i][j], image[i][s_line-j-1] = image[i][s_line-j-1] ^ 1, image[i][j] ^ 1
        return image
            