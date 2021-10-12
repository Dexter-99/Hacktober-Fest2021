class Solution:
    def sumEvenAfterQueries(self, A: List[int], queries: List[List[int]]) -> List[int]:
        B=[]
        s=0
        for i in range(len(A)):
            if A[i]%2==0:
                s=s+A[i]
        for i in queries:
            if A[i[1]]%2==0:
                if i[0]%2==0:
                    s=s+i[0]
                else:
                    s=s-A[i[1]]
                A[i[1]]=A[i[1]]+i[0]
            else:
                if i[0]%2==0:
                    pass
                else:
                    s=s+A[i[1]]+i[0]
                A[i[1]]=A[i[1]]+i[0]
            
            B.append(s)
        return B