#include <boost/numeric/ublas/matrix.hpp>//���������� ���������� ��� ������ � ���������
#include <boost/numeric/ublas/io.hpp>
#include <boost/random.hpp>//���������� ��� ��������� ��������� ��������
#include <iostream>
#include "complex.h"

int main()
{
	using namespace boost::numeric::ublas;
	boost::random::mt19937 rand;//����� ���������� ��������� �����
	boost::random::uniform_real_distribution<double> gen(-9.1, 9.1);//����� �������������
	matrix<Complex> m(3, 3);//������� �����������
	for (int i=0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//���������� ����������
			m(i, j).SetRe(gen(rand));
			m(i, j).SetIm(gen(rand));
		}
	}
	std::cout << "matrix M:" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			std::cout << m(i, j) << "\t";
		std::cout << std::endl;
	}
	std::cout << "matrix C:" << std::endl;
	matrix<Complex> c = trans(m);//����������������
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			std::cout << c(i, j) << "\t";
		std::cout << std::endl;
	}
	system("pause");
}