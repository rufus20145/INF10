/**
 * Файл с функциями парсинга строк
 * Калькулятор с функцией посчета корня линейной функции.
 * @link https://github.com/rufus20145/My-calc-2
 * @link http://moria.1586.su/moodle/mod/page/view.php?id=1709
 * @author Ivan.rufus20145
 */

#define MAX_V 10
#define MAX_LEN 250

/**
 * @param char ctring[] - строка для парсинга
 * @param char* funcX - указатель на букву аргумента
 * @param char* funcY - указатель на букву зависимой переменной
 * @param int* k - указатель на уголовой коэффициент
 * @param int* b - указатель на свободный член
 * @return 0 - нет ошибки
 * @return 2 - ошибка парсинга(отсутствует ключевой символ: =, *, + )
 * @example y=5*f+4 => funcY = y, funcX = f, k = 5, b = 4
 * @uses <ctype.h>
 * @uses <string.h>
 */

int parseFunction(char string[], char* funcX, char* funcY, int* k, int* b) {//FUNCTION(y=k*x+b)
    int i;
    int j;
    char tempStr[MAX_LEN];

    *funcY = string[9];
    if(string[10] == '=') {//добавить проверку на k = 1
        i = 11;
        while(isdigit(string[i])) {
            tempStr[i-11] = string[i];
            i++;
        }
        *k = atoi(tempStr);
        for(int k = 0; k < MAX_LEN; k++) tempStr[k] = '\0'; //очистка временной строки
        if(string[i] == '*') {
            i++;
            *funcX = string[i];
            i++;
            if(string[i] == '+'){
                i++;
                j = i;
                while(isdigit(string[i])) {
                    tempStr[i-j] = string[i];
                    i++;
                }
                *b = atoi(tempStr);
            } else return 2;
        } else return 2;
        return 0;
    } else return 2;
}

/**
 * @param char string[] - строка для парсинга
 * @param int* argument - указатель на ячейку массива значений аргументов
 * @param char* setX - указатель на ячейку массива букв аргументов
 * @return 0 - нет ошибки
 * @return 3 0 ошибка парсинга (отсутствует ключевой символ: = )
 * @uses <ctype.h>
 */

int parseSet(char string[], int* argument, char* setX) {//   SET(x=123)
    char tempStr[MAX_LEN];
    int i;

    *setX = string[4];
    if(string[5] == '=') {
        i = 6;
        while(isdigit(string[i])) {
            tempStr[i-6] = string[i];
            i++;
        }
        *argument = atoi(tempStr);
        return 0;
    } else return 3;
}
