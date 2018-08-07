
#ifndef LISTE_HPP
#define LISTE_HPP
#include "Agac.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

class Liste
{
	public:
		int basmi; //Listebaşı olup olmadığını belirlemek için yardımcı eleman
		string dosya_adi;	//Dosyanın adını tutmak için string değişken tanımlanıyor
		Liste *pSonraki; 	//Sonraki liste elemanını gösteren pointer
		Agac *kok; //İkili arama ağacını gösteren işaretçi değişken tanımlanıyor
		Liste(string klasor_yolu, string rdosya_adi);	//Parametreli kurucu fonksiyon prototipi
		Liste();	//Kurucu fonksiyon prototipi
		~Liste(); //Yıkıcı fonksiyon prototipi
};

#endif