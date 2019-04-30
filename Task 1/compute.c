/**
 * Файл с вычислением значения функции
 * Калькулятор с функцией посчета корня линейной функции.
 * @link https://github.com/rufus20145/My-calc-2
 * @link http://moria.1586.su/moodle/mod/page/view.php?id=1709
 * @author Ivan.rufus20145
 */

/**
 * @param char funcX - буква аргумента
 * @param char funcY - буква зависимой переменной
 * @param char setX - буква аргумента в SET
 * @param int argument - значение аргумента
 * @param int k - угловой коэффициент функции
 * @param int b - свободный член функции
 * @param int* value - указатель на значение функции
 * @return код ошибки||0
 * @throw return 5 совпадает зависимая переменная и аргумент
 * @throw return 6 совпадает зависимая переменная и аргумент из SET
 * @throw return 4 не совпадают аргументы из функции и SET
 */
int computeFunction(char funcX, char funcY, char setX, int argument, int k, int b, int* value){
    if(funcX == funcY) return 5;
    else {
        if(funcY == setX) return 6;
        else {
            if(funcX == setX) {
                *value = argument * k + b;
                return 0;
            } else return 4;
        }
    }
}