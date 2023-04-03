void ft_div_ultimate_mod(int *dividend, int *divisor)
{
    int quotient = *dividend / *divisor;
    int remainder = *dividend % *divisor;

    *dividend = quotient;
    *divisor = remainder;
}
