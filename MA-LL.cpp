#include <fstream>
using namespace std;

ifstream fin("text.in");
ofstream fout("text.out");

int main()
{
    int n;
    int m[100][100], p[100][100];
    int cont=1;
    fin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            {
                m[i][j]=0;
                p[i][j]=0;
            }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>>m[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(m[i][j]==1)
            {
              p[i][0]++;
              while(cont<=n)
              {
                  if(p[i][cont]==0)
                    {
                        p[i][cont]=j;
                        break;
                    }
                cont++;
              }
              cont=1;
            }
        }
     for(int i=1;i<=n;i++)
     {
        for(int j=0;j<=n;j++)
            fout<<p[i][j]<<" ";
        fout<<endl;
     }
}
