int my_little_bistro(int value1, char op, int value2)
{

    if (!value1 | !value2)
    {
        return 0;
    }

    switch (op)
    {
    case '+':
        return value1 + value2;

    case '-':
        return value1 - value2;

    case '*':
        return value1 * value2;

    case '/':
        if (value2 == 0)
        {
            return 0;
        }
        return value1 / value2;

    case '%':
        if (value2 == 0)
        {
            return 0;
        }
        return value1 % value2;

    default:
        return 0;
    }
};
