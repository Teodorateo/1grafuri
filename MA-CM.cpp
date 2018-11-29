#include <fstream>
using namespace std;

ifstream fin("text.in");
ofstream fout("text.out");

int main()
{
    int n;
    int m[100][100];
    int cont=0;
    fin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            m[i][j]=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>>m[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(m[i][j]==1)
            {
                cont++;
            }
        }
    fout<<n<<endl;
    fout<<cont/2<<endl;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i<j)
                if(m[i][j]==1)
                    fout<<i<<" "<<j<<endl;
        }
    fin.close();
    fout.close();
 }
