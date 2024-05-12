def inverse_matrix(matrix):
    row = len(matrix)
    column = len(matrix[0])
    if row != column:
        print("无逆矩阵")
        return 0
    else:
        n = row
        E = [[0 for _ in range(n)] for _ in range(n)]
        for i in range(n):
            E[i][i] = 1  # n阶单位矩阵E
        # 从上往下做行变换，使增广矩阵A|E的前一部分的方阵(即matrix)变为一个上三角矩阵
        for i in range(n):
            for j in range(i + 1, n):
                x = matrix[j][i] / matrix[i][i]
                for k in range(n):
                    matrix[j][k] = matrix[j][k] - x * matrix[i][k]
                    E[j][k] = E[j][k] - x * E[i][k]
        # 若matrix[n-1][n-1]为0，则该矩阵非满秩，不可逆
        if matrix[n - 1][n - 1] == 0:
            print("无逆矩阵")
            return 0
        # 从下往上做行变换，使增广矩阵的前一部分的方阵(即matrix)变为一个对角矩阵
        i = n-1
        while i >= 0:
            j = i - 1
            while j >= 0:
                x = matrix[j][i] / matrix[i][i]
                for k in range(n):
                    matrix[j][k] = matrix[j][k] - x * matrix[i][k]
                    E[j][k] = E[j][k] - x * E[i][k]
                j = j - 1
            i = i - 1
        # 每一行乘以一个系数使增广矩阵的前一部分变为单位矩阵
        for i in range(n):
            x = matrix[i][i]
            matrix[i][i] = 1
            for j in range(n):
                E[i][j] = E[i][j] / x
        return E


# matrix = [[-2, 1, 0], [1, -2, 1], [0, 1, -2]]
# print(inverse_matrix(matrix))
