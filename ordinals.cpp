#include <string>
using namespace std;

string getOrderNumberString(int n) {
  string suffix;
  if (n < 0) { /* Rule 1: good luck */ }
  suffix = "th"; /* Rule 2: default = th */
  if (1 <= n%10 && n%10 <= 3) { /* Rule 3: 1st, 2nd, 3rd */
      if (n%100 < 10 || n%100 > 20) { /* Rule 4: 11th-13th */
          suffix = (n%10 == 1) ? "st" 
                : (n%10 == 2) ? "nd" 
                :               "rd"
                ;
      }
  }
  return suffix;
}

int main (void) {
  for (int i = 1; i <= 200; i++) {
    printf("%d%s\n", i, getOrderNumberString(i).c_str());
  }
  return 0;
}
