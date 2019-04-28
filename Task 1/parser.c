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
 * @return код ошибки
 */
int parseFunction(char string[], char* funcX, char* funcY, int* k, int* b) {//FUNCTION(y=k*x+b)
    int i;
    char* tempStr;

    *funcY=string[9];//определение буквы зависимой переменной
    if(string[10] == '=') {
        i = 11;
        *k = atoi((char*)(&string[i]));

        i++;
        if(isdigit(string[i])) {
            *k *= 10;
            *k += atoi((char*)(&string[i]));
            i++;
        }
        
        return 0;
    }
    else return 7;
}

/**
 * @param char string[] - строка для парсинга
 * @param int argument - 
 * @return код ошибки
 */

int parseSet(char string[], int* argument, char* setX) {//   SET(x=123)
    char* tempStr;
    int i;

    *setX = string[4];//работает
    if(string[5] == '=') {
        i = 6;
        *argument = atoi((char*)(&string[i]));
        
        // while(isdigit(string[i])) {
        //     strcat(tempStr, (char *)(string[i]));
        //     i++;
        // }
        // printf("1");
        // *argument = atoi(tempStr);
        // printf("%d\n", *argument);
        return 0;
    } else  return 3;
}
