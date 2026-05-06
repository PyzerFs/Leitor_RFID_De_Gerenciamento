// Ponte IoT entre COBOL e hardware da catraca
#include <iostream>
#include <string>

using namespace std;

extern "C" void CPP_IOT_READ(char *card)
{
    cout << "[C++] RFID lido: " << card << endl;
}

extern "C" void CPP_LIBERA_CATRACA()
{
    cout << "[C++] Liberando catraca - Servo girando + LED Verde" << endl;
}

int main()
{
    cout << "[C++] IoT Bridge iniciado com sucesso!" << endl;
    cout << "[C++] Aguardando leitura do sensor RFID..." << endl;
    return 0;
}