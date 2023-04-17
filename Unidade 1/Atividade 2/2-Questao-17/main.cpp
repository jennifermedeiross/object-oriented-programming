#include "ContaBanco.h"

int main() {
  ContaBanco conta1(2000);
  conta1.DisplayMessage();
  conta1.Creditar(250);
  conta1.DisplayMessage();
  conta1.Debitar(250);
  conta1.DisplayMessage();
  conta1.Debitar(3000);
  conta1.DisplayMessage();
}