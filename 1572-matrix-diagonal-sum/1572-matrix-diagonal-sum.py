class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        a= 0
        n=len(mat)
        for i in range(0, n):
            a += mat[i][i]+mat[i][n - i - 1]
        if n%2==0:
            return a
        else:
            return a-mat[math.ceil(n/2)-1][math.ceil(n/2)-1]