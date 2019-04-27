import numpy as np

A = np.array([[1, 2, 3],    \
             [4, 5, 6]])
B = np.array([ [9, 8],      \
               [7, 6],      \
               [5, 4] ])
print(A @ B)
print(A.dot(B))

C = np.matrix([[1, 2, 3],    \
             [4, 5, 6]])
D = np.matrix([ [9, 8],      \
               [7, 6],      \
               [5, 4] ])

print(C @ D)
print(C * D)
print(C.dot(D))

C = np.matrix([ [1, 2],     \
                [3, 4] ] )
D = np.matrix([ [6, 2],     \
                [1, 2] ] )
print(C @ D)
print(D @ C)
print("Linear Algebra inverse: \n", np.linalg.inv(D))
print("Linear Algebra inverse: \n", D.I)

B = np.array([[4,2,2],
              [6,2,4],
              [2,2,8]])

print("Linear Algebra inverse: \n", np.linalg.inv(B))

B = np.array([[4,2,2],
              [6,2,4],
              [10,21,1],
              [2,2,8]])
try:
    print("Linear Algebra inverse: \n", np.linalg.inv(B))
except np.linalg.linalg.LinAlgError:
    B = np.array([[4,2,2,3],
                  [6,2,4,21],
                  [10,21,1,11],
                  [2,2,8, 10]])

    print("Linear Algebra inverse: \n", np.linalg.inv(B))
