// dz4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//using namespace std;
//int main()
//{
//    std::cout << "Hello World!\n";
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	const int size = 3;
//	int ar[size]; // ��������� ������ � ����� ��������
//	// ����, �� �������� �������� ������
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter element\n";
//		/* �� ����� �������� ����� ������������
//		������������� ������� � �������� i ���
//		����������. ������ � ����, �� i � ������
//		���� �������� */
//		
//			cin >> ar[i];
//	}
//	cout << "\n\n";
//	// ����, �� �������� �������� ������
//	for (int i = 0; i < size; i++)
//	{
//		// ���� �������� � �������� i �� �����
//		cout << ar[i] << "\n";
//	}
//	return 0;
//}
// #include <iostream>
//using namespace std;
//int main()
//{
//	// ���������� ������� �������� ������
//	const int size = 5;
//	// ��������� �� ����������� ������
//	int ar[size] = { 23,11,9,18,25 };
//	int max = ar[0]; // ����� 0 ������� ���� ������������
//	int min = ar[0]; // ����� 0 ������� ���� ���������
//	// ���� �������� ��������
//	// ������, ��������� � �������
//	for (int i = 1; i < size; i++)
//	{
//		// ���� �������� ������� ������ �� �����
//		if (min > ar[i])
//			// ������������ �������� ������
//			min = ar[i];
//		// ���� �������� ������� ������ �� ��������
//		if (max < ar[i])
//			// ������������ �������� ���������
//			max = ar[i];
//	}
//	// ���� ���������� �� �����
//	cout << "Max = " << max << "\n\n";
//	cout << "Min = " << min << "\n\n";
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	const int size = 11;
//	int m[size] = { 3, -12, 5, 14, 27, -6, 1, -34, 10, -15, 0 };
//
//	int b = 100;
//	int k = 4;
//	for (int i = size - 1; i > k; i--) {
//		//���� �������� �� ���� ������� �����
//		m[i + 1] = m[i];
//	}
//	m[k + 1] = b; //������� �������� �� ���� ���� k-��
//
//	for (int i = 0; i < size; i++) {
//		cout << m[i] << " ";
//	}
//	cout << endl;
//
//
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	// ���������� ������ � ����� ��������� ���������� �������� ������ �
//	int k = 0;
//	const int N = 10;
//	int A[N] = { 1, -8 , 6, -9, -75, 23, 15, -3, 33, -20 };
//	int B[N];
//	for (int i = 0; i < N; i++)
//	{
//		if (A[i] > 0)
//		{
//			B[k] = A[i];
//			k++;
//		}
//	}
//	cout << "B have plus element A:" << endl;
//	for (int i = 0; i < k; i++)
//	{
//		cout << B[i] << " ";
//	}
//	cout << endl;
//
//	return 0;

//}
//#include <iostream>
//#include <ctime>
//#include <cstdlib>

//
//using namespace std;
//int main() {
//	setlocale(LC_ALL, 0);
//	int a[40] = { 2, 4, 3, 5, 7, 2, 6, 4, 5, 3, 4, 5, 3, 2, 7, 6, 5, 4, 8, 6, 5, 3, 4, 6, 7, 4, 3, 2, 5, 6, 3, 7, 5, 6, 4, 3, 2, 5, 4 };
//	const int floors = 5;
//	const int apartament = 2;
//	const int entrance = 4;
//	int apart = 0;
//
//	//  ��������� ������ �������, �� ������ ��������� ��'�
//	cout << "Apartments with large families (>5 residents): ";
//	for (int i = 0; i < 40; i++) {
//		if (a[i] > 5) {
//			cout  << i + 1 << " ";
//		}
//}
//	//��������� ������� ��������� �� ���� ����� ��� ������ ��������
//	cout << "Enter number apart";
//	cin >> apart;
//	cout << "Residents in apartment" << apart << ":" << a[apart - 1] << endl;
//	if (apart % apartament != 1) {
//		cout << "Sosedi on floor: " << a[apart - 2] << " ";
//	}
//	if (apart % apartament != 0) {
//		cout << a[apart] << endl;
//	}
//	// b. ��������� ������� ������� ��������� ��� ������� ��'����
//	int podezd[entrance] = { 0 };
//
//	for (int i = 0; i < 40; ++i) {
//		int entrance1 = (i / apartament) / floors;
//		podezd[entrance1] += a[i];
//	}
//
//	cout << "Total residents per entrance:" << endl;
//	for (int i = 0; i < entrance; ++i) {
//		cout << "Entrance " << i + 1 << ": " << podezd[i] << endl;
//	}
//
//
//	cout << endl;
//
//
//	return 0;
//}


//4.	� ����� ���������� ���������� ��� �� ���������� ������� � 30 ���.��������� ���������� ����� � �� �����������.����� �� - ��������� �� ���� ������.��� ��������� ��� ����������� ����� �� ����������(����� � ���� �� �����������).

//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//int main() {
//	setlocale(LC_ALL, 0);
//	int a[30] = { 0 };
//	for (int i = 0; i < 30; i++) {
//		a[i] = rand() % 50 + 1950;
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	int vik = 0;
//	for (int i = 0; i < 30; i++) {
//		vik = 2000 - a[i];
//		cout << vik << " ";
//	}
	/*cout << endl;
	int max = a[0];
	int min = a[0];
	int i_max = 0;
	int i_min = 0;
	int vik1 = 0;
	int vik2 = 0;
	for (int i = 0; i < 30; i++) {
		if (max > a[i]) {
			max = a[i];
			i_max = i;
			vik1 = 2000 - a[i];

		}
		if (min < a[i]) {
			min = a[i];
			i_min = i;
			vik2 = 2000 - a[i];
		}*/
		
		
	/*}
	cout << "max years = " << max << " number " << i_max << " " << "vik:" << vik1 << "\n";
	cout << "min years = " << min << " number " << i_min << " " << "vik:" << vik2 << "\n";



	}*/
	//5.	� ����� �������� ���������� ��� ���� ������� � 25 ���� �����.
		 //      ���� � ���� �� ����� �����. �������� ��������� ����� � ���� ������ 
		 //      ������� ������ ��� ���� ����, �� ����������. ���������� ���� ���� �������� ����.
		 //      ϳ� ���������� �������� ������ ��� ������� :
		 //1) ���������� ����� �������� � ������ ������ ������� ��� ��������� �� ��� �������� ���� �� 1 �������;
		 //2) ��������� ���������� �������� ������ �������� 0.
/*  const int size = 25;
	 int height[size] = {
		 175, 145, 200, 150, 155, 188, 199, 201, 145, 158,
		 176, 146, 199, 157, 168, 187, 181, 173, 200, 151,
		 177, 142, 203, 128, 175 };
	 int k = 0;
	 cout << "enter k student: ";
	 cin >> k;
	 for (int i = k - 1; i < size; i++)
	 {
		 height[i] = height[i + 1];
	 }
	 height[size - 1] = 0;
	 for (int i = 0; i < size; i++)
	 {
		 cout << height[i] << "  ";
	 }
	 cout << endl;*/

	 ///6.	���� ����� ����� ����� A. ���������� ���� ������ �������� � ����� ����� ������ ������ ������:
		  //  a.������������ �������� �� ��� ����� �����, �� � � ��������� �����;
		  //  b.������������ �������� ����� � ������� ������.

	 //
	 //    const int size = 9;
	 //    int a[size] = { 2,4,1,7,5,6,7,8,2 };
	 //    int b[size] = { 0 };
	 //    float c[size] = { 0 };
	 //
	 //    cout << endl << endl;
	 //    cout << "���� ����� ����� ����� A\n";
	 //    cout << endl << endl;
	 //for (int i = 0; i < size; i++) {
	 //    cout << " " << a[i] << " ";
	 //}
	 //
//
//cout << endl << endl;
//cout << "���������� ���� ������ �������� � ����� ����� ������ ������ ������:\n";
//cout << "a.������������ �������� �� ��� ����� �����, �� � � ��������� �����\n";
//cout << endl << endl;
//
//for (int i = 0; i < size; i++)
//{
//    if (a[i] % 2 == 0) {
//        a[i] = 0;
//    }
//    cout << " " << a[i] << " ";
//}
//
//cout << endl << endl;
//
//
//int count = 0;
//for (int i = 0; i < size; i++) {
//    if (a[i] > 0) {
//        b[count] = a[i];
//        count++;
//    }
//    else { continue; }
//}
//cout << endl << endl;
//cout << "b.������������ �������� ����� � ������� ������.\n";
//cout << endl << endl;
//for (int i = 0; i < size; i++) {
//    cout << " "<< b[i] << " ";
//}
//cout << endl << endl;
//    return 0;


//}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
