/**
 * Файл с вычислением значения функции
 * Калькулятор с функцией посчета корня линейной функции.
 * @link https://github.com/rufus20145/My-calc-2
 * @link http://moria.1586.su/moodle/mod/page/view.php?id=1709
 * @author Ivan.rufus20145
 */

/**
 * @param int argument - значение аргумента функции
 * @param int k - значение углового коэффициента
 * @param int b - значение свободного члена
 * @param *value - указатель на ячейку, куда класть значение функции
 * @return void
 */

int computeFunction(char funcX, char funcY, char setX, int argument, int k, int b, int* value) {
    *value = argument * k + b;
    return 0;
}
