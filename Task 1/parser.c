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
#ifdef DEBUG
printf("Started parsing FUNCTION");
#endif
    int i;
    char* tempStr;
    *funcY=string[9];
    if(string[10] = '=') {
        i = 11;
        while (string[i] != '*')
        {
            strcat(string, tempStr);
        }
        *k = atoi(string);
        return 0;        
    }
    else return 7;
}

/**
 * @param char string[] - строка для парсинга
 * @param int argument - 
 * @return код ошибки
 */

int parseSet(char* string, int* argument, char* setX, int setNum) {
#ifdef DEBUG
printf("Started parsing SET\n");
#endif
    char* tempStr;
    int i;
    setX[setNum] = string[4];
#ifdef DEBUG
printf("X letter defined\n");
#endif

    if(string[5] != '=') return 3;
    else {
#ifdef DEBUG
printf("Started looking for number\n");
#endif
        i = 6;
        while(isdigit(string[i])) {
            printf("%d\n", i);
            strcat(tempStr, string);
            i++;
        }
        *argument = atoi(tempStr);
#ifdef DEBUG
printf("Defined number\n");
#endif
    }
#ifdef DEBUG
printf("Ended parsing SET\n");
#endif
}
