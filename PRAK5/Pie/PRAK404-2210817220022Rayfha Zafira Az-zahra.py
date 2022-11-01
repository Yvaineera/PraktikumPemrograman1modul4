a = 1
while a != 5 :
        print("Pilih program \n1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n5. Exit\n")
        p = float(input("Masukkan Pilihan : "))
        if p == 5 :
            print("Terimakasih, telah menggunakan kalkulator Rayfha Zafira Az-zahra\n\n")
            break
        elif p < 0 or p > 5 : print("Input anda salah, silahkan coba lagi\n\n")
        else : 
            a = float(input("Masukkan nilai pertama : "))
            b = float(input("Masukkan nilai kedua   : "))
            if p == 1 : 
                hsl = a + b 
                print("Hasil Penjumlalahan antara %.2f dengan %.2f adalah %.2f\n\n"%(a, b, hsl))
            elif p == 2 : 
                hsl = a - b 
                print("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n"%(a, b, hsl))
            elif p == 3 : 
                hsl = a * b 
                print("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n"%(a, b, hsl))
            else : 
                hsl = a / b 
                print("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n"%(a, b, hsl))
