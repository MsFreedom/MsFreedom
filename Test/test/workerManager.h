#pragma once // 防止头文件重复包含
#include <iostream>  //包含输入输出流头文件
using namespace std; //使用标准命名空间
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>
#define FILENAME "empFile.txt"




class WorkerManager
{
public:

	WorkerManager();

	void Show_Menu();

	void ExitSystem();

	int m_EmpNum;

	Worker ** m_EmpArray;

	void Add_Emp();

	void save();

	bool m_FileIsEmpty;

	int get_EmpNum();

	void init_Emp();

	void Show_Emp();

	void Del_Emp();

	int IsExist(int id);

	void Mod_Emp();

	void Find_Emp();

	void Sort_Emp();

	void Clean_File();

	~WorkerManager();

};