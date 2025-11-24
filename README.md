 Penjelasan Singkat Project

Program ini merupakan simulasi sistem toko sederhana yang menerapkan konsep Object-Oriented Programming (OOP), khususnya inheritance, polymorphism, dan dynamic binding.

 1. Struktur Kelas

Program memiliki tiga tipe produk:

* Product → kelas induk (parent) yang menyimpan kode, nama, harga.
* Food → kelas anak dari Product, menambahkan atribut expired.
* Electronic → kelas anak dari Product, menambahkan atribut garansi.

Kedua kelas turunan meng-override method DisplayMessage() sehingga outputnya berbeda sesuai jenis produk. Ini merupakan contoh polymorphism.

2. Kelas Store (Toko)

* Menyimpan daftar produk menggunakan array pointer.
* Bisa menambah produk ke toko.
* Bisa menampilkan semua produk (polymorphism aktif).
* Bisa mencari produk berdasarkan kode.

3. Kelas Transaction (Transaksi)

* Menampung produk yang dibeli.
* Menghitung total belanja.
* Menampilkan detail transaksi.

4. Alur Program

1. Program membuat objek toko dan mengisi beberapa produk (makanan dan elektronik).
2. User melihat daftar produk.
3. User memasukkan kode produk untuk membeli.
4. Produk ditambahkan ke transaksi.
5. User bisa membeli berkali–kali.
6. Setelah selesai, program menampilkan *detail transaksi dan total harga*.

Kesimpulan

Project ini adalah aplikasi toko sederhana berbasis OOP yang menunjukkan cara:

* Membuat inheritance (Food & Electronic dari Product)
* Menggunakan virtual function untuk polymorphism
* Mengelola daftar produk di toko
* Melakukan transaksi pembelian



