int storage(int value, int flag)
{
    static int saved_value = 0;

    if (flag == 0)
        saved_value = value;
    else if (flag == 1)
        return saved_value;

    return 0;
}

//store a value and retrieve when needed.
