#include <iostream>
#include <string>
#include <vector>

#ifndef AFFINE_CIPHER_H
#define AFFINE_CIPHER_H

/*
TASK:

	An affine cipher is a special case of a more general monoalphabetic substitution cipher.

    Your task is to write a function that encrypts the transmitted string taking into account two keys.

    The encryption process. In an affine cipher, a number from the range 0...m-1 is assigned to each letter of the alphabet of size m. 
    Then, using modular arithmetic, a new number is calculated for each number corresponding to the letter of the original alphabet, 
    which will replace the old one in the ciphertext. The encryption function for each letter looks like this:

    f(x) = (key_a * x + key_b) mod m
    where:
        key_a - the first key
        key_b - the second key
        m - the size of the alphabet
    An important fact is that the first key (key_a) must be mutually simple with the size of the alphabet. You need to check it and if it is not, 
    then you should output : "The first key and the size of the alphabet are not mutually simple!"
    Examples of how the program works:

    affine_encrypt("hello", 3, 5) //armmv
    affine_encrypt("{Good morning!}", 7, 9) //{Zdde pdywnwz!}
    affine_encrypt("goodbye", 6, 10) //The first key and the size of the alphabet are not mutually simple!
    Note: lowercase letters should remain lowercase, uppercase letters should remain uppercase.
    Note: Punctuation marks and other symbols do not need to be encrypted.
    Note: If there are no characters in the string, then you need to return this string unchanged. Checking an empty message takes precedence over checking 
    a mutually simple key. That is, if the message is empty, return an empty string, even if key_a is not mutually prime with 26.
    Note: Mutually prime numbers are integers that have no common divisors other than ±1.


ЗАДАНИЕ:

    Аффинный шифр является частным случаем более общего моноалфавитного шифра замены.

    Ваша задача — написать функцию, которая шифрует передаваемую строку с учетом двух ключей.

    Процесс шифрования. В аффинном шифре каждой букве алфавита размера m присваивается число из диапазона 0...m-1. Затем с помощью модульной арифметики 
    для каждого числа, соответствующего букве исходного алфавита, вычисляется новое число, которое заменит старое в шифртексте. Функция шифрования для каждой буквы выглядит так:

    f(x) = (key_a * x + key_b) mod m
    where:
        key_a - the first key
        key_b - the second key
        m - the size of the alphabet
    Важным фактом является то, что первый ключ (key_a) должен быть взаимно простым с размером алфавита. Вам нужно это проверить и если это не так, 
    то следует вывести: "Первый ключ и размер алфавита не взаимно просты!"
    Примеры работы программы:

    affine_encrypt("hello", 3, 5) //armmv
    affine_encrypt("{Good morning!}", 7, 9) //{Zdde pdywnwz!}
    affine_encrypt("goodbye", 6, 10) //The first key and the size of the alphabet are not mutually simple!
    Примечание: строчные буквы должны оставаться строчными, прописные — прописными.
    Примечание. Знаки препинания и другие символы шифровать не нужно.
    Примечание: Если в строке нет символов, то нужно вернуть эту строку без изменений. Проверка пустого сообщения имеет приоритет над проверкой взаимно
    простого ключа. То есть, если сообщение пусто, вернуть пустую строку, даже если key_a не является взаимно простым с 26.
    Примечание. Взаимно простые числа — это целые числа, у которых нет общих делителей, отличных от ±1.

*/


bool check_prime_numbers(size_t a, size_t b) {

    for (size_t count = 2; count <= std::max(a / 2, b / 2); ++count) {
        if (a % count == 0 && b % count == 0)
            return false;
        else continue;
    }
    return true;
}

std::string affine_encrypt(const std::string& other, const size_t key_a, const size_t key_b, const size_t m) {
    if (other.size() == 0)
        return other;
    else if (!check_prime_numbers(key_a, m))
        return "The first key and the size of the alphabet are not mutually simple!";

    std::string result = "";

    for (size_t count = 0; count < other.size(); ++count) {
        if (other[count] >= 97 && other[count] <= 122)
            result += ((other[count]-97) * key_a + key_b) % m + 97;
        else if (other[count] >= 65 && other[count] <= 90)
            result += ((other[count] - 65) * key_a + key_b) % m + 65;
        else
            result += other[count];
    }

    return result;
}

#endif // !AFFINE_CIPHER_H
