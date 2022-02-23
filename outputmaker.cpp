#include <bits/stdc++.h>
#define ll long long

using namespace std;

ifstream in;
ofstream out;
string indir = "./input/"; //input path
string outdir = "./output/";//output path
int fileId = 0

void start() { // 建立檔案 
    while(1) {
        string filename;
        if (fileId < 10)
            filename += "0";
        filename += to_string(i);
        in.open(outdir + filename + ".out");
        if (!in.is_open())
        {
            out.open(outdir + filename + ".out");
            in.open(indir + filename + ".in");
            break;
        }
        else
            in.close();
    }
}

#define MAKE 1
#define cin in
#if MAKE
#define cout out
#endif

/************************************ solution space ************************************/





/************************************ solution space ************************************/

int main()
{
    int N = 0; // number of input data
    // cin >> n;
    while (N--)
    {
        start();
        int t = 1;

        while (t--)
            sol();
        out.close();
        in.close();
    }
    return 0;
}
