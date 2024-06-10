#include <iostream>
#include <map>
#include <string>
using namespace std;

bool es_digito(char c);
bool formato_de_fecha(string fecha);
map<string, string> reverse_map(map<string, string> m);
string formatear_fecha(string fecha);
void funcion_add(map<string,string>& base_de_datos,string fecha,string evento);
void funcion_delete(map<string,string>& base_de_datos, string fecha);
void funcion_find(map<string,string>base_de_datos, string fecha);
void funcion_print(const map<string,string>& base_de_datos);
void funcion_delete_one(map<string,string>& base_de_datos, string evento);
