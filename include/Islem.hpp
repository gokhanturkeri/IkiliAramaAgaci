
#ifndef ISLEM_HPP
#define ISLEM_HPP

#include <iostream>
#include <string>
#include "Liste.hpp"
using namespace std;

class Islem
{
	public:
		Liste* ListeEkle(Liste *pBas, string klasor_yolu, string rdosya_adi); //Listeye eleman ekleme fonsiyonu protitipi
		Agac* agacaEkle(Agac* kok, string kelime); //Agaca eleman ekleme fonksiyonu prototipi
		bool kontrol(string a, string b); //Büyüklük kontrolü fonksiyonu prototipi
		void InOrder(Agac* node); //Agac elemanlarını inorder olarak yazdıran fonksiyon prototipi
		bool Ara(string aranan, Agac* kok); //Agacta eleman arama prototipi
};

#endif