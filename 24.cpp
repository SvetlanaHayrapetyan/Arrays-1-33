//24.Տրված են բնական թվերի a0,…,an-1 և b0,…,bn-1 (n  1) հաջորդականությունները: Ստանալ c0,…,cn-1 հաջորդականությունը, որտեղ ci=true, եթե ai-ի և bi-ի ամենամեծ ընդհանուր բաժանարարը մեծ է 7-ից, և ci=false՝ հակառակ դեպքում:
#include <iostream>
using namespace std;

const int N = 2;

int a[N];
int b[N];
bool c[N];

int gcd(int x, int y)
{
  int r = 0;
  do
  {
    r = x % y;
    x = y;
    y = r;

  } while (r != 0);

  return x;
}


int main()
{
  for (int i = 0; i < N; i++) cin >> a[i];
  for (int i = 0; i < N; i++) cin >> b[i];

  for (int i = 0; i < N; i++)
  {
    c[i] = (gcd(a[i], b[i]) > 7);
  }

  for (int i = 0; i < N; i++) cout << c[i] << ' ';

 
  return 0;
}
