#define _CRT_SECURE_NO_WARNINGS
//回文数的判定
//bool isPalindrome(int x) {
//    int size = 0;
//    int n3 = x;
//    if (x < 0)
//    {
//        return false;
//    }
//    while (n3)
//    {
//        size++;
//        n3 /= 10;
//    }
//    int n1 = x;
//    int n2 = 0;
//    if (size % 2 == 0)
//    {
//        for (int i = 0; i < size / 2; i++)
//        {
//            int tmp = n1 % 10;
//            n2 = n2 * 10 + tmp;
//            n1 /= 10;
//        }
//    }
//    else {
//        for (int i = 0; i < size / 2; i++)
//        {
//            int tmp = n1 % 10;
//            n2 = n2 * 10 + tmp;
//            n1 /= 10;
//        }
//        n1 /= 10;
//    }
//
//    if (n1 == n2)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}