int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int i = pow(2, index);
    
    if (n == NULL)
        return (-1);
    *n = *n | i;
    return (1);
    
}
