#include <fstream>
using namespace std;

ifstream fin("text.in");
ofstream fout("text.out");

int main()
{
    int n, p, q, y=0;
    int m[100][100];
    int cont;
    fin>>n;
    fin>>cont;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            m[i][j]=0;
    fin>>p>>q;
    while(y<cont)
    {
        m[p][q]=1;
        m[q][p]=1;
        fin>>p>>q;
        y++;
    }
    fout<<n<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            fout<<m[i][j]<<" ";
        fout<<endl;
    }
}
