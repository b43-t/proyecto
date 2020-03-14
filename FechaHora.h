#ifndef FechaHora_h
#define FechaHora_h

class FechaHora {
private:
    int ano;
    int mes;
    int dia;
    int hora;
    int min;
public:
    FechaHora();
    FechaHora(string fechaHora);
    int getAno();
    int getMes();
    int getDia();
    int getHora();
    int getMin();
    void setAno(int ano);
    void setMes(int mes);
    void setDia(int dia);
    void setHora(int hora);
    void setMin(int min);
    void show();
};

FechaHora::FechaHora() {
    ano = 2020;
    mes = 12;
    dia = 12;
    hora = 23;
    min = 59;
}
FechaHora::FechaHora(string fechaHora) {
    ano = stoi(fechaHora.substr(0,4));
    mes = stoi(fechaHora.substr(5,2));
    dia = stoi(fechaHora.substr(8,2));
    hora = stoi(fechaHora.substr(11,2));
    min = stoi(fechaHora.substr(14,2));
}
int FechaHora::getAno() {
    return ano;
}
int FechaHora::getMes() {
    return mes;
}
int FechaHora::getDia() {
    return dia;
}
int FechaHora::getHora() {
    return hora;
}
int FechaHora::getMin() {
    return min;
}
void FechaHora::setAno(int ano) {
    this->ano = ano;
}
void FechaHora::setMes(int mes) {
    this->mes = mes;
}
void FechaHora::setDia(int dia) {
    this->dia = dia;
}
void FechaHora::setHora(int hora) {
    this->hora = hora;
}
void FechaHora::setMin(int min) {
    this->min = min;
}
void FechaHora::show() {
    cout << "Fecha y Hora: " << ano << "/" << mes << "/" << dia << " " << hora << ":" << min << endl;
}

#endif