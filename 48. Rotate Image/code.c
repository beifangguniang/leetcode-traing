void rotate(int** matrix, int matrixRowSize, int *matrixColSizes) {
    int i, j;
    int temp;
    for(j = 0; j < matrixRowSize/2; j++)
        for(i = j; i < matrixRowSize - 1 - j; i++)
        {
            /* Ðý×ªÒÆÎ» */
            temp = matrix[j][i];
            matrix[j][i] = matrix[matrixRowSize - i - 1][j];
            matrix[matrixRowSize - i - 1][j] = matrix[matrixRowSize - j - 1][matrixRowSize - i - 1];
            matrix[matrixRowSize - j - 1][matrixRowSize - i - 1] = matrix[i][matrixRowSize - j - 1];
            matrix[i][matrixRowSize - j - 1] = temp;
        }
}
