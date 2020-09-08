/**
 * Калькулятор с функцией посчета корня линейной функции.
 * @link https://github.com/rufus20145/My-calc-2
 * @link http://moria.1586.su/moodle/mod/page/view.php?id=1709
 * @author Ivan.rufus20145
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "errorHandler.c"
#include "parser.c"
#include "compute.c"
#include "output.c"

#define MAX_V 10
#define MAX_LEN 250
/**
 * @example # ./calc FUNCTION(y=7*x+12) SET(x=12) SET(x=4) SET(x=7)
 * @uses <stdio.h>
 * @uses <string.h>
 * @uses "errorHandler.c"
 * @uses "parser.c"
 * @uses "compute.c"
 * @uses "output.c" 
 * @return Возвращает код ошибки в систему
 */

int main(int argc, char* argv[]) {
    int hasError[MAX_V];
    int errorCode = 0;
    int k, b;
    char funcX, funcY;
    char setX[MAX_V];
    int arguments[MAX_V];
    int values[MAX_V];
    int setNum = 0;

    for(int i = 1; i < argc; i++) {
        if(strncmp(argv[i], "FUNCTION", 8) == 0) {//проверяем строку на FUNCTION
            errorCode = parseFunction(argv[i], &funcX, &funcY, &k, &b);
        }
        else if(strncmp(argv[i], "SET", 3) == 0) {//проверяем строку на SET
            errorCode = parseSet(argv[i], &arguments[setNum], &setX[setNum]);//setNum - номер найденного SET для работы с массивом
            setNum++;
        }
        else errorCode = 1;//если там что-то другое
        handleError(errorCode);
    }
    for (int i = 0; i < argc - 2; i++) {
        hasError[i] = computeFunction(funcX, funcY, setX[i], arguments[i], k, b, &values[i]);
    }
    for (int i = 0; i < argc - 2; i++) {
        printResult(funcY, arguments[i], values[i], hasError[i]);
    }
    return 0;
}
