class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        
        def generateRow(numRows, prevRow: List[int]=[]) -> List[int]:
            if numRows == 1 or not prevRow:
                return [1]
            elif numRows == 2:
                return [1, 1]
            else:
                result = [1]
                for j in range(1, len(prevRow)):
                    number = prevRow[j-1] + prevRow[j] 
                    result.append(number)
                result.append(1)
                return result
        
        result = []
        row = []
        for i in range(1, numRows + 1):
            row = generateRow(i, row)
            result.append(row)
        
        return result
