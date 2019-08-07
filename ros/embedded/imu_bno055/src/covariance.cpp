#include <deque>
#include <iostream>
#include <vector>

using namespace std;

vector<float> covariance(deque<vector<float> > data)
{
  unsigned int i, j, k;
  float means[data[0].size()] = {};
  for (i = 0; i < data.size(); i++)
    for (j = 0; j < data[i].size(); j++)
      means[j] += data[i][j];
  for (i = 0; i < sizeof(means) / sizeof(*means); i++)
    means[i] /= data.size();
  for (i = 0; i < data.size(); i++)
    for (j = 0; j < data[0].size(); j++)
      data[i][j] -= means[j];
  float transposed[data[0].size()][data.size()] = {};
  int transposed_len = sizeof(transposed) / sizeof(*transposed);
  for (i = 0; i < transposed_len; i++)
    for (j = 0; j < data.size(); j++)
      transposed[i][j] = data[j][i];
  vector<float> result(transposed_len * data[0].size());
  for (i = 0; i < transposed_len; i++)
    for (j = 0; j < data[0].size(); j++)
      for (k = 0; k < data.size(); k++)
        result[i * data[0].size() + j] += transposed[i][k] * data[k][j] / ((float)(data.size() - 1));
  return result;
}

int main()
{
  deque<vector<float> > data;
  float data1[3] = { 4.0, 2.0, 0.5 };
  vector<float> data1vec (data1, data1 + sizeof(data1) / sizeof(data1[0]) );
  data.push_back(data1vec);
  float data2[3] = { 4.2, 2.1, 0.59 };
  vector<float> data2vec (data2, data2 + sizeof(data2) / sizeof(data2[0]) );
  data.push_back(data2vec);
  float data3[3] = { 3.9, 2.0, 0.58 };
  vector<float> data3vec (data3, data3 + sizeof(data3) / sizeof(data3[0]) );
  data.push_back(data3vec);
  float data4[3] = { 4.3, 2.1, 0.62 };
  vector<float> data4vec (data4, data4 + sizeof(data4) / sizeof(data4[0]) );
  data.push_back(data4vec);
  float data5[3] = { 4.1, 2.2, 0.63 };
  vector<float> data5vec (data5, data5 + sizeof(data5) / sizeof(data5[0]) );
  data.push_back(data5vec);
  covariance(data);
  vector<float> res = covariance(data);
  for (int i = 0; i < res.size(); i++)
    cout << res[i] << '\n';
}