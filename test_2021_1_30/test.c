#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//void print_all_arr(vector<int>& a, vector<int>& b, int& m, int& n, int& sum)
//{
//    map<int, bool> mp;
//    vector<int> smaller(a);
//    vector<int> bigger(b);
//    int nsmaller = (m >= n) ? n : m;
//    int nbigger = (m >= n) ? m : n;
//    if (m > n)
//    {
//        smaller = b;
//        bigger = a;
//    }
//    for (int i = 0; i < nsmaller; i++)
//    {
//        mp.insert(pair<int, bool>(smaller[i], true));
//    }
//    for (int i = 0; i < nbigger; i++)
//    {
//        if (mp.find(sum - bigger[i]) != mp.end())
//        {
//            cout << "(" << bigger[i] << "," << sum - bigger[i] << ")" << endl;
//        }
//    }
//}
//
//int main()
//{
//    int sum, m, n;
//    cin >> sum >> m >> n;
//    vector<int> a(m, 0);
//    vector<int> b(n, 0);
//    for (int i = 0; i < m; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cin >> b[i];
//    }
//    print_all_arr(a, b, m, n, sum);
//
//    return 0;
//}
//int dup_elem(vector<int>& a, int& n)
//{
//    int res = 0;
//    for (int i = 0; i < n; i++)
//    {
//        res ^= a[i];
//    }
//    for (int i = 1; i < n; i++)
//    {
//        res ^= i;
//    }
//    return res;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n, 0);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    int res = 0;
//    res = dup_elem(a, n);
//    cout << res << endl;
//    return 0;
//}
//void permu(vector<int>& a, int& n)
//{
//    int i = 0, j = n - 1;
//    while (i < j)
//    {
//        while (a[i] % 2 == 1 && j > i) i += 1;
//        while (a[j] % 2 == 0 && j > i) j -= 1;
//        swap(a[i], a[j]);
//    }
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n, 0);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//
//    permu(a, n);
//    for (int i = 0; i < n; i++)
//    {
//        cout << a[i] << ends;
//    }
//    return 0;
//}
//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//void print_all_arr(vector<int>& a, vector<int>& b, int& m, int& n, int& sum)
//{
//    map<int, bool> mp;
//    vector<int> smaller(a);
//    vector<int> bigger(b);
//    int nsmaller = (m >= n) ? n : m;
//    int nbigger = (m >= n) ? m : n;
//    if (m > n)
//    {
//        smaller = b;
//        bigger = a;
//    }
//    for (int i = 0; i < nsmaller; i++)
//    {
//        mp.insert(pair<int, bool>(smaller[i], true));
//    }
//    for (int i = 0; i < nbigger; i++)
//    {
//        if (mp.find(sum - bigger[i]) != mp.end())
//        {
//            cout << "(" << bigger[i] << "," << sum - bigger[i] << ")" << endl;
//        }
//    }
//}
//
//int main()
//{
//    int sum, m, n;
//    cin >> sum >> m >> n;
//    vector<int> a(m, 0);
//    vector<int> b(n, 0);
//    for (int i = 0; i < m; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cin >> b[i];
//    }
//    print_all_arr(a, b, m, n, sum);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		
//	}
//	return 0;
//}
//void permu(vector<int>& a, int& n)
//{
//    int i = 0, j = n - 1;
//    while (i < j)
//    {
//        while (a[i] % 2 == 1 && j > i) i += 1;
//        while (a[j] % 2 == 0 && j > i) j -= 1;
//        swap(a[i], a[j]);
//    }
//}
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n, 0);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    permu(a, n);
//    for (int i = 0; i < n; i++)
//    {
//        cout << a[i] << ends;
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int 
//	return 0;
//}