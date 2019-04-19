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
 * @param char* ctring[] - указатель на строку для парсинга
 * @return void
 */
int parseFunction(char string[], char* funcX, char* funcY, int* k, int* b) {
}

/**
 * @param char* string[] - указатель на строку для парсинга
 * @return void
 */

int parseSet(char string[], int arguments[MAX_V], char setX[MAX_V], int setNum) {
    char tempStr[MAX_LEN];
    setX[setNum] = string[4];

    if(string[5] != '=') return 3;
    while(1) {
        int i = 6;
        if(isdigit(string[i])) {
            tempStr[i - 6] = string[i];
        }
        else break;
        i++;
    } 
}
