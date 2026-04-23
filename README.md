# 42 İstanbul — Piscine C Projeleri

> 42 İstanbul Piscine sürecinde tamamladığım C ve Shell programlama egzersizleri.

---

## Hakkında

Bu repo, 42 İstanbul'un yoğun giriş programı olan **Piscine** sürecinde tamamladığım tüm C modüllerini ve Shell alıştırmalarını içermektedir. Piscine; sıfırdan C programlama, Unix ortamı ve algoritmik düşünce becerilerini kazandırmak amacıyla tasarlanmış yoğun bir eğitim sürecidir.

---

## Modüller ve Puanlar

| Modül     | Konu                                      | Puan  |
|-----------|-------------------------------------------|-------|
| Shell00   | Unix temelleri, dosya izinleri, komutlar  | 100   |
| Shell01   | Gelişmiş shell komutları, scripting       | 70    |
| C00       | Temel fonksiyonlar, karakter yazdırma     | 85    |
| C01       | Pointerlar ve bellek adresleme            | 100   |
| C02       | String işlemleri                          | 85    |
| C03       | String karşılaştırma ve birleştirme       | 100   |
| C04       | Sayı dönüşümleri (itoa, atoi vb.)         | 85    |
| C05       | Özyinelemeli (recursive) fonksiyonlar     | 80    |
| C06       | `argc` / `argv` — komut satırı argümanları | 100  |
| C07       | Dinamik bellek yönetimi (malloc)          | 60    |
| C08       | Header dosyaları ve struct kullanımı      | 70    |

---

## Modül İçerikleri

### Shell00 & Shell01
Unix/Linux ortamına giriş: dosya sistemi gezinme, izin yönetimi, temel komut satırı araçları ve basit shell scriptleri.

### C00 — Temel Fonksiyonlar
`write` sistem çağrısı kullanılarak karakterlerin, sayıların ve şekillerin terminale yazdırılması. Döngüler ve koşul yapılarının temeli.

### C01 — Pointerlar
C dilinin en temel kavramlarından biri olan pointer (işaretçi) yapısı; adres alma, değer değiştirme ve pointer aritmetiği.

### C02 — String İşlemleri
`ft_strcpy`, `ft_strncpy`, `ft_str_is_alpha` gibi karakter dizisi fonksiyonlarının sıfırdan yazılması.

### C03 — String Karşılaştırma ve Birleştirme
`ft_strcmp`, `ft_strcat`, `ft_strncat`, `ft_strstr` gibi standart kütüphane fonksiyonlarının yeniden implementasyonu.

### C04 — Sayı Dönüşümleri
Sayı-string dönüşümleri: `ft_atoi` (ASCII'den tam sayıya) ve `ft_putnbr` (sayı yazdırma).

### C05 — Özyineleme (Recursion)
Faktöriyel, fibonacci gibi matematiksel problemlerin recursive fonksiyonlarla çözümü.

### C06 — Komut Satırı Argümanları
`main(int argc, char **argv)` kullanımı ile program argümanlarının işlenmesi.

### C07 — Dinamik Bellek
`malloc` ile dinamik bellek tahsisi; `ft_strdup`, `ft_range` gibi fonksiyonlar.

### C08 — Header ve Struct
`#include`, `#ifndef` gibi preprocessor direktifleri; `struct` tanımlamaları ve header dosyalarının düzenlenmesi.

---

## Teknolojiler

- **Dil:** C (C99 standardı)
- **Shell:** Bash / Zsh
- **Derleme:** `gcc` ile `-Wall -Wextra -Werror` bayrakları
- **Norm:** 42'nin `norminette` kod stili kurallarına uygun

---

## Kurulum ve Derleme

```bash
# Repoyu klonla
git clone https://github.com/bckblt/42_Piscine_C_Project.git
cd 42_Piscine_C_Project

# Herhangi bir modüle gir
cd "C01 ---> 100"

# Dosyaları derle (örnek)
gcc -Wall -Wextra -Werror ft_ultimate_ft.c -o test
```

---

## 42 Piscine Nedir?

42 Network okullarında Piscine, adayların programa kabul edilip edilmeyeceğini belirleyen yoğun bir seçim sürecidir. Yaklaşık 1 ay boyunca katılımcılar günde 10-15 saat çalışarak C programlama ve Unix temellerini öğrenir. Peer-to-peer değerlendirme sistemi ile projeler hem akranlar hem de otomatik test sistemleri tarafından değerlendirilir.

---

## Yazar

**bckblt** — 42 İstanbul

[![GitHub](https://img.shields.io/badge/GitHub-bckblt-181717?style=flat&logo=github)](https://github.com/bckblt)
