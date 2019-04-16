/**
 * Файл с обработкой ошибок
 * Калькулятор с функцией посчета корня линейной функции.
 * @link https://github.com/rufus20145/My-calc-2
 * @link http://moria.1586.su/moodle/mod/page/view.php?id=1709
 * @author Ivan.rufus20145
 */

/**
 * Функция обработки ошибок
 * @param *errorCode - указатель на переменную с кодом ошибки
 * @uses <stdio.h>
 */

void handleError(int* errorCode) {
    switch (*errorCode)
    {
        case 1:
            printf("Input error!");
            break;
        case 2:
            printf("Unknown argument!");
    }
    *errorCode = 0;
}
