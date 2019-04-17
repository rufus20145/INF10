/**
 * Калькулятор с функцией посчета корня линейной функции.
 * @link https://github.com/rufus20145/My-calc-2
 * @link http://moria.1586.su/moodle/mod/page/view.php?id=1709
 * @author Ivan.rufus20145
 */

#include <stdio.h>
#include <string.h>
#include "errorHandler.c"
#include "parser.c"
#include "compute.c"
#include "output.c"

#define MAX_V 10
/**
 * @uses <stdio.h>
 * @uses <string.h>
 * @return Возвращает код ошибки в систему
 * @example для запуска надо набрать в консоли название исполняемого файла и аргументы SET и FUNCTION
 */

int main(int argc, char* argv[]) {
    int errorCode = 0;
    int k, b;
    char funcX, funcY;
    char setX[MAX_V];
    int arguments[MAX_V];
    int values[MAX_V];
    int setNum = 0;

    for(int i = 1; i < argc; i++) {
        if(strncmp(argv[i], "FUNCTION", 8) == 0) {//проверяем строку на FUNCTION
            parseFunction(argv[i], &funcX, &funcY, &k, &b);
            continue;
        }
        else if(strncmp(argv[i], "SET", 3) == 0) {//проверяем строку на SET
            for(int k = 0; k < MAX_V; k++) {
                arguments[k] = k;
            }
            parseSet(argv[i], arguments, setX, setNum);//setNum - номер найденного SET для работы с массивом
            setNum++;
            continue;
        }
        else errorCode = 2;//если там что-то другое
        handleError(&errorCode);
    }
    for (int i = 0; i < MAX_V; i++) {
        computeResult(funcX, setX[i], arguments[i], &values[i], &errorCode);
    }
}
