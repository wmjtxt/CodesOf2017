#include <iostream>

using namespace std;

int main()
{

    int N, L, H;
    cin >> N >> L >> H;
    int numa1[N], dga1[N], cga1[N];
    int numa2[N], dga2[N], cga2[N];
    int numa3[N], dga3[N], cga3[N];
    int numa4[N], dga4[N], cga4[N];
    int i1 = 0, i2 = 0, i3 = 0, i4 = 0;
    int j, k;
    int N1 = 0;
    while(N--){
      int num, dg, cg;
      cin >> num >> dg >> cg;
      //input
      if(dg >= L && cg >= L){
          if(dg >= H && cg >= H){
            numa1[i1] = num;
            dga1[i1] = dg;
            cga1[i1] = cg;
            i1++;
          }
          else if(dg >= H && cg < H){
            numa2[i2] = num;
            dga2[i2] = dg;
            cga2[i2] = cg;
            i2++;
          }
          else if(dg < H && cg < H && dg >= cg){
            numa3[i3] = num;
            dga3[i3] = dg;
            cga3[i3] = cg;
            i3++;
          }
          else {
            numa4[i4] = num;
            dga4[i4] = dg;
            cga4[i4] = cg;
            i4++;
          }
          N1++;
      }
    }
    /*cout << i1 << endl;
    for(j = 0; j < i1; j++) cout << numa1[j] << " " << dga1[j] << " " << cga1[j] << ";" << endl;
    cout << i2 << endl;
    for(j = 0; j < i2; j++) cout << numa2[j] << " " << dga2[j] << " " << cga2[j] << ";" << endl;
    cout << i3 << endl;
    for(j = 0; j < i3; j++) cout << numa3[j] << " " << dga3[j] << " " << cga3[j] << ";" << endl;
    cout << i4 << endl;
    for(j = 0; j < i4; j++) cout << numa4[j] << " " << dga4[j] << " " << cga4[j] << ";" << endl;*/
      //sort
      int temp11, temp12, temp13;
      int temp21, temp22, temp23;
      int temp31, temp32, temp33;
      int temp41, temp42, temp43;
      for(j = 0; j < i1-1; j++){
          for(k = 0; k < i1-j-1; k++){
              if(dga1[k] + cga1[k] < dga1[k+1] + cga1[k+1]){
                  temp11 = numa1[k];numa1[k] = numa1[k+1];numa1[k+1] = temp11;
                  temp12 = dga1[k];dga1[k] = dga1[k+1]; dga1[k+1] = temp12;
                  temp13 = cga1[k];cga1[k] = cga1[k+1]; cga1[k+1] = temp13;
              }
              else if(dga1[k] + cga1[k] == dga1[k+1] + cga1[k+1] && dga1[k] < dga1[k+1]){
                  temp11 = numa1[k];numa1[k] = numa1[k+1];numa1[k+1] = temp11;
                  temp12 = dga1[k];dga1[k] = dga1[k+1]; dga1[k+1] = temp12;
                  temp13 = cga1[k];cga1[k] = cga1[k+1]; cga1[k+1] = temp13;
              }
              else if(dga1[k] + cga1[k] == dga1[k+1] + cga1[k+1] && dga1[k] == dga1[k+1] && numa1[k] > numa1[k+1]){
                  temp11 = numa1[k];numa1[k] = numa1[k+1];numa1[k+1] = temp11;
                  temp12 = dga1[k];dga1[k] = dga1[k+1]; dga1[k+1] = temp12;
                  temp13 = cga1[k];cga1[k] = cga1[k+1]; cga1[k+1] = temp13;
              }
          }
      }
      for(j = 0; j < i2-1; j++){
          for(k = 0; k < i2-j-1; k++){
              if(dga2[k] +cga2[k] < dga2[k+1] + cga2[k+1]){
                  temp21 = numa2[k];numa2[k] = numa2[k+1];numa2[k+1] = temp21;
                  temp22 = dga2[k];dga2[k] = dga2[k+1]; dga2[k+1] = temp22;
                  temp23 = cga2[k];cga2[k] = cga2[k+1]; cga2[k+1] = temp23;
              }
              else if(dga2[k] +cga2[k] == dga2[k+1] + cga2[k+1] && dga2[k] < dga2[k+1]){
                  temp21 = numa2[k];numa2[k] = numa2[k+1];numa2[k+1] = temp21;
                  temp22 = dga2[k];dga2[k] = dga2[k+1]; dga2[k+1] = temp22;
                  temp23 = cga2[k];cga2[k] = cga2[k+1]; cga2[k+1] = temp23;
              }
              else if(dga2[k] +cga2[k] == dga2[k+1] + cga2[k+1] && dga2[k] == dga2[k+1] && numa2[k] > numa2[k+1]){
                  temp21 = numa2[k];numa2[k] = numa2[k+1];numa2[k+1] = temp21;
                  temp22 = dga2[k];dga2[k] = dga2[k+1]; dga2[k+1] = temp22;
                  temp23 = cga2[k];cga2[k] = cga2[k+1]; cga2[k+1] = temp23;
              }
          }
      }
      for(j = 0; j < i3-1; j++){
          for(k = 0; k < i3-j-1; k++){
              if(dga3[k] +cga3[k] < dga3[k+1] + cga3[k+1]){
                  temp31 = numa3[k];numa3[k] = numa3[k+1];numa3[k+1] = temp31;
                  temp32 = dga3[k];dga3[k] = dga3[k+1]; dga3[k+1] = temp32;
                  temp33 = cga3[k];cga3[k] = cga3[k+1]; cga3[k+1] = temp33;
              }
              else if(dga3[k] +cga3[k] == dga3[k+1] + cga3[k+1] && dga3[k] < dga3[k+1]){
                  temp31 = numa3[k];numa3[k] = numa3[k+1];numa3[k+1] = temp31;
                  temp32 = dga3[k];dga3[k] = dga3[k+1]; dga3[k+1] = temp32;
                  temp33 = cga3[k];cga3[k] = cga3[k+1]; cga3[k+1] = temp33;
              }
              else if(dga3[k] +cga3[k] == dga3[k+1] + cga3[k+1] && dga3[k] == dga3[k+1] && numa3[k] > numa3[k+1]){
                  temp31 = numa3[k];numa3[k] = numa3[k+1];numa3[k+1] = temp31;
                  temp32 = dga3[k];dga3[k] = dga3[k+1]; dga3[k+1] = temp32;
                  temp33 = cga3[k];cga3[k] = cga3[k+1]; cga3[k+1] = temp33;
              }
          }
      }
      for(j = 0; j < i4-1; j++){
          for(k = 0; k < i4-j-1; k++){
              if(dga4[k] + cga4[k] < dga4[k+1] + cga4[k+1]){
                  temp41 = numa4[k];numa4[k] = numa4[k+1];numa4[k+1] = temp41;
                  temp42 = dga4[k];dga4[k] = dga4[k+1]; dga4[k+1] = temp42;
                  temp43 = cga4[k];cga4[k] = cga4[k+1]; cga4[k+1] = temp43;
              }
              else if(dga4[k] + cga4[k] == dga4[k+1] + cga4[k+1] && dga4[k] < dga4[k+1]){
                  temp41 = numa4[k];numa4[k] = numa4[k+1]; numa4[k+1] = temp41;
                  temp42 = dga4[k];dga4[k] = dga4[k+1]; dga4[k+1] = temp42;
                  temp43 = cga4[k];cga4[k] = cga4[k+1]; cga4[k+1] = temp43;
              }
              else if(dga4[k] + cga4[k] == dga4[k+1] + cga4[k+1] && dga4[k] == dga4[k+1] && numa4[k] > numa4[k+1]){
                  temp41 = numa4[k];numa4[k] = numa4[k+1]; numa4[k+1] = temp41;
                  temp42 = dga4[k];dga4[k] = dga4[k+1]; dga4[k+1] = temp42;
                  temp43 = cga4[k];cga4[k] = cga4[k+1]; cga4[k+1] = temp43;
              }
          }
      }
    //output
    cout << N1 << endl;
    for(j = 0; j < i1; j++) cout << numa1[j] << " " << dga1[j] << " " << cga1[j] << endl;
    for(j = 0; j < i2; j++) cout << numa2[j] << " " << dga2[j] << " " << cga2[j] << endl;
    for(j = 0; j < i3; j++) cout << numa3[j] << " " << dga3[j] << " " << cga3[j] << endl;
    for(j = 0; j < i4; j++) cout << numa4[j] << " " << dga4[j] << " " << cga4[j] << endl;
    return 0;
}
