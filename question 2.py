def bubble_sort(A):
    for i in range(len(A)):
        for j in range(0,len(A)-i-1):
            if A[j] > A[j+1]:
                A[j], A[j+1] = A[j+1], A[j]
    return A
B=[12,123,21,13,412,23,1,23,0,12]
print(bubble_sort(B))
