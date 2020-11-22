#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int age;
  char name[51];
} s_data;

int main () {
  s_data p;
  s_data p2;

  p.age = 20;
  strcpy(p.name, "Test");

  FILE* fp = fopen("data.bin", "ab+");
  fwrite(&p, sizeof(s_data), 1, fp);
  fclose(fp);

  FILE* fp2 = fopen("data.bin", "r");
  fread(&p2, sizeof(s_data), 1, fp2);
  fclose(fp2);

  printf("%d %s", p2.age, p2.name);
  return 0;  
}
