 **SISTEM MANAJEMEN PENJUALAN SEDERHANA MENGGUNAKAN KONSEP OOP**

 **1. Deskripsi Umum**

Program ini merupakan simulasi sistem toko sederhana yang menerapkan konsep **Object-Oriented Programming (OOP)**, khususnya **inheritance**, **polymorphism**, dan **dynamic binding**. Program ini memungkinkan penyimpanan produk, pembelian produk, serta menampilkan transaksi menggunakan konsep kelas dan pewarisan.

**2. Struktur Kelas dan Penjelasan**

 **A. Class Product (Induk)**

 **Fungsi:**

Menjadi kelas dasar untuk semua jenis produk.

 **Atribut:**

* `string kode` → kode unik produk
* `string nama` → nama produk
* `int harga` → harga produk

 **Method:**

* **Constructor** → menginisialisasi atribut
* `virtual void DisplayMessage()` → menampilkan info produk (akan di-override oleh class turunan)

**B. Class Food (Turunan dari Product)**

 **Fungsi:**

Merepresentasikan produk makanan.

 **Atribut Tambahan:**

* `string expired` → tanggal kadaluwarsa

 **Method:**

* **Constructor** → menginisialisasi atribut induk + expired
* `void DisplayMessage() override` → menampilkan info produk makanan (polymorphism)

 **C. Class Electronic (Turunan dari Product)**

**Fungsi:**

Merepresentasikan produk elektronik.

**Atribut Tambahan:**

* `int garansi` → lama garansi (bulan)

**Method:**

* **Constructor** → menginisialisasi atribut induk + garansi
* `void DisplayMessage() override` → menampilkan info produk elektronik (polymorphism)

**D. Class Store (Toko)**

**Fungsi:**

Menyimpan daftar produk dan menyediakan fitur pencarian.

**Atribut:**

* `Product* list[100]` → array pointer produk
* `int jumlah` → jumlah produk yang tersimpan

**Method:**

* `void AddProduct(Product* p)` → menambahkan produk ke toko
* `void ShowAll()` → menampilkan semua produk (menggunakan polymorphism)
* `Product* FindByKode(string k)` → mencari produk berdasarkan kode

**E. Class Transaction (Transaksi)**

**Fungsi:**

Menyimpan produk yang dibeli dan menghitung total harga.

**Atribut:**

* `Product* beli[100]` → daftar produk yang dibeli
* `int jumlah` → jumlah item yang dibeli

**Method:**

* `void AddItem(Product* p)` → menambahkan produk ke transaksi
* `void ShowTransaction()` → menampilkan detail pembelian
* `int GetTotal()` → menghitung total harga

**3. Alur Program**

1. Program membuat objek toko (`Store`) dan mengisi beberapa produk:

   * Produk makanan (`Food`)
   * Produk elektronik (`Electronic`)

2. User melihat semua produk yang tersedia (polymorphism aktif saat `DisplayMessage()` dipanggil).

3. User memasukkan kode produk untuk membeli barang.

4. Produk ditambahkan ke objek `Transaction`.

5. User dapat membeli lebih dari satu produk.

6. Setelah selesai, program menampilkan:

   * Daftar produk yang dibeli
   * Total harga

 4. Kesimpulan

Project ini merupakan aplikasi toko sederhana berbasis OOP yang menunjukkan cara:

* Menerapkan **inheritance** pada class Food dan Electronic yang berasal dari Product
* Menggunakan **virtual function** untuk **polymorphism dan dynamic binding**
* Mengelola daftar produk pada toko menggunakan array pointer
* Melakukan transaksi pembelian dengan menampung produk ke dalam class Transaction

Kalau mau, saya juga bisa **buatkan diagram class** atau **versi Word/PDF** untuk laporan.
