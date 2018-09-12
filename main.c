typedef uint64_t EncodeType;
EncodeType encodeString(char* str)
{
    EncodeType result = 0;

    if (strlen(str) <= sizeof(EncodeType))
    {
        for (int j = 0; j < sizeof(EncodeType); j++)
        {
            result |= ((EncodeType)str[j] << (j * 8));
        }
    }

    return result;
}

int main()
{
    // The string shouldn't be longer than (sizeof(EncodeType) - 1) chars
    EncodeType temp = encodeString("Hello"); 
    printf((char*)&temp);
    return 0;
}
