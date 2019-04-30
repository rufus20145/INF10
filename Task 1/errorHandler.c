/**
 * Файл с функцией обработки ошибок
 * Калькулятор с функцией посчета корня линейной функции.
 * @link https://github.com/rufus20145/My-calc-2
 * @link http://moria.1586.su/moodle/mod/page/view.php?id=1709
 * @author Ivan.rufus20145
 */

/**
 * Функция обработки ошибок
 * @param int errorCode - код ошибки
 * @uses <stdio.h>
 */

void handleError(int errorCode) {
    switch (errorCode)
    {
        case 0:
            break;
        case 1:
            printf("Input error!\n");
            break;
        case 2:
            printf("Wrong FUNCTION expression!\n");
            break;
        case 3:
            printf("Wrong SET expression!\n");
            break;
        case 4:
            printf("Has no such variable!");
            break;
        case 5:
            printf("Have no function at all");
            break;
        case 6:
            printf("Cannot set constant");
    }
    errorCode = 0;
}
