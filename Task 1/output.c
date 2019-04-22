/**
 * Файл с функциями вывода результатов
 * Калькулятор с функцией посчета корня линейной функции.
 * @link https://github.com/rufus20145/My-calc-2
 * @link http://moria.1586.su/moodle/mod/page/view.php?id=1709
 * @author Ivan.rufus20145
 */

/**
 * @param x - аргумент функции
 * @param y - значение функции
 * @return void
 */

void printResult(int value, int argument, char funcY) {
    printf("%c(%d) = %d", funcY, argument, value);
}