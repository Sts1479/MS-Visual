//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by app.rc
float *massout=new float[];
float *Induct (int N, int mu, float l1vn, float l1vt, float l2vn, float l2vt, float h);
float Induct1 (int N, int mu, float kf, float lsr, float Sc);
float Saturation (int N, int mu, float lsr, float I);
float Saturation1 (int N, float mu, float lsr, float I, float a, float b, float c);
float mu_vz (float lvz, float mu_vh, float lsr);
//....
float Ind;
float  mu_s,mu, mu_r, mu_ekv, lvz, a, b, c;
char radioflag=1;
char satflag=0;