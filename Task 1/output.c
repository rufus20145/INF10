/**
 * Файл с функциями вывода результатов
 * Калькулятор с функцией посчета корня линейной функции.
 * @link https://github.com/rufus20145/My-calc-2
 * @link http://moria.1586.su/moodle/mod/page/view.php?id=1709
 * @author Ivan.rufus20145
 */

/**
 * @param char funcY - буква зависимой переменной
 * @param int argument - значение аргумента функции
 * @param int value - значение функции
 * @param int hasError - код ошибки
 * @return void
 */
void printResult(char funcY, int argument, int value, int hasError) {
    if(0 == hasError) {
        printf("%c(%d)=%d\n", funcY, argument, value);
    }
}