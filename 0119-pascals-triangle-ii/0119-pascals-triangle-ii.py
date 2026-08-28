class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        row = [1]
        n = rowIndex

        for k in range(n):
            c_nk = row[k] * (n - k) // (k + 1)
            row.append(c_nk)

        return row
