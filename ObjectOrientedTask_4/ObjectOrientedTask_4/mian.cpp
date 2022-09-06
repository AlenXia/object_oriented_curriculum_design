#include"Matrix.h"
int main()
{
	int n;
	std::cout << "请输入你要创建几阶方阵：";
	std::cin >> n;
	std::cout << std::endl;
	Matrix ma(n);
	std::cout << "创建成功。"<<std::endl<<std::endl;
	std::cout << "查找最大值和最小值："<<std::endl;
	ma.findMaxMin();

	std::cout << "矩阵转置：" << std::endl;
	ma.transpose();
	std::cout << "转置成功。" << std::endl << std::endl;

	std::cout << "请输入你要重新创建几阶方阵：";
	std::cin >> n;
	ma.change(n);
	std::cout << "创建成功。" << std::endl << std::endl;
	return 0;
}