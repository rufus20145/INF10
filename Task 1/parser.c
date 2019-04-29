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
 * @return код ошибки
 */
int parseFunction(char string[], char* funcX, char* funcY, int* k, int* b) {//FUNCTION(y=k*x+b)
    int i;
    int j;
    char tempStr[MAX_LEN];

    *funcY = string[9];
    if(string[10] == '=') {
        i = 11;
        while(isdigit(string[i])) {
            tempStr[i-11] = string[i];
            i++;
        }
        *k = atoi(tempStr);
        for(int k = 0; k < MAX_LEN; k++) tempStr[k] = 'z'; /* необходимо
очистить массив от цифр, потому что в случае, когда второе число содержит меньше
цифр, возьмутся некоторые цифры из первого(как оформлять такие комментарии???)*/
        if(string[i] == '*') {
            i++;
            *funcX = string[i];
            i+=2;
            j = i;
            while(isdigit(string[i])) {
                tempStr[i-j] = string[i];
                i++;
            }
            *b = atoi(tempStr);
        }
        return 0;
    }
    else return 7;
}

/**
 * @param char string[] - строка для парсинга
 * @param int* argument - указатель на ячейку массива значений аргументов
 * @param char* setX - указатель на ячейку массива букв аргументов
 * @return код ошибки
 */

int parseSet(char string[], int* argument, char* setX) {//   SET(x=123)
    char tempStr[MAX_LEN];
    int i;

    *setX = string[4];//работает
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
