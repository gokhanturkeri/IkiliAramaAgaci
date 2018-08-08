# Txt dosyası içindeki kelimeleri ikili arama ağacına inorder olarak ekleme programı

Yazılan program C++ konsol uygulaması olup çalıştırıldığında kullanıcıdan bir klasör yolu ister. Daha sonra bu klasörün içinde bulunan sadece *.txt dosyalarını Liste veri yapısına atar. Listenin her bir düğümünde bir *.txt dosyası olur. Her dosya bir düğüme atandığı sırada dosyanın içeriği okunur ve kelime kelime ayrılıp ikili arama ağacına bu kelimeler eklenir. Her kelime bir düğüme denk gelir. Daha sonra da aşağıdaki menü ekrana gelir.

1- Arama Yap

2- Listele

3- Çıkış

Arama Yap:
Kullanıcının gireceği bir kelime hangi dosyada olduğunu bulup ekrana yazdırır. Eğer girilen kelime yok ise ekrana aranan bulunamadı yazdırır.

Listele:
Listedeki her dosya ismi ve uzantısı yazıldıktan sonra içerdiği kelimeler ikili arama ağacı inorder okunarak ekrana yazdırır.

# Programı mingw derleyicisiyle başlatmak için;

İlk önce Mingw'yi kurunuz. Sonrasında ortam değişkenlerinde PATH'e Mingw'yi kurduğunuz yerdeki bin klasörünü ekleyiniz. Daha sonra komut isteminde rar'dan çıkarttığınız klasöre geliniz ve mingw32-make yazınız.
