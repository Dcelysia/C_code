#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	string s, s1, s2;
//
//
//	int i = 0;
//	cin >> s;
//	int len = s.size();
//	if (s[s.length() - 1] == ',')
//	{
//		s1 = s;
//		s1[s.size() - 1] = '\n';
//		s2 = s;
//		s2[s.size() - 1] = '\n';
//	}
//
//	else
//	{
//		s1 = s;
//		s2 = s;
//	}
//
//	while (cin >> s)
//	{
//
//		char c = getchar();
//		len = s.size();
//		if (s[s.size() - 1] == ',')
//		{
//			len = s.size() - 1;
//			if (s1.size() > len)
//			{
//				s1 = s;
//				s1[s.size() - 1] = '\n';
//			}
//			if (s2.size() < len)
//			{
//				s2 = s;
//				s2[s.size() - 1] = '\n';
//			}
//
//		}
//		else
//		{
//			if (s1.size() > len)
//				s1 = s;
//			if (s2.size() < len)
//				s2 = s;
//		}
//		if (c == '\n') break;
//	}
//	cout << s2 << endl;
//	cout << s1 << endl;
//	return 0;
//}