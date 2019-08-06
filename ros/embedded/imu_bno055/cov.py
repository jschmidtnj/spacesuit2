import numpy
a = [[4.,2.,0.5],[4.2,2.1,0.59],[3.9,2.0,0.58],[4.3,2.1,0.62],[4.1,2.2,0.63]]
means = numpy.zeros(len(a[0]))
for row in a:
  for j in range(len(row)):
    means[j] += row[j]
for i in range(len(means)):
  means[i] /= float(len(a))
#print(means)
for i in range(len(a)):
  for j in range(len(a[i])):
    a[i][j] -= means[j]
transposed = numpy.zeros((len(a[0]), len(a)))
for i in range(len(transposed)):
  transposed[i] = numpy.zeros(len(transposed[0]))
  for j in range(len(a)):
    transposed[i][j] = float(a[j][i])
print(transposed)
#print(a)
result = numpy.zeros((len(transposed), len(a[0])))
for i in range(len(transposed)):
  for j in range(len(a[0])):
    for k in range(len(a)):
      result[i][j] += transposed[i][k] * a[k][j] / float(len(a) - 1)
print(result)
# https://stackoverflow.com/questions/26444525/how-do-i-calculate-the-covariance-matrix-without-any-built-in-functions-or-loops

