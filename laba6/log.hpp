#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;


enum class loglevel {
	DEBUG,
	ERROR,
	INFO
};
class log
{
private:
	static ofstream m_out;
	static loglevel m_loglevel;
public:
	log() {
		cout << "Constr" << endl;
	}
	static void SetLoglevel(loglevel loglevel) {
		m_loglevel = loglevel;
	}
	static void SetLogPath(const string& path) {
		m_out.open(path);
	}
	static void Info(const string& msg) {
		if (m_loglevel == loglevel::INFO) {
			cerr << msg << endl;
		}
		m_out << msg << endl;

		//time_t now = time(0);
		//char* dt = ctime(&now);
		//cout << dt << endl;
		//m_out.flush(); // сбросить в файл все что есть в буфере
	}

	static void Error(const string& msg) {
		if (m_loglevel == loglevel::ERROR) {
			cerr << msg << endl;
		}
		m_out << msg << endl;

		/*time_t now = time(0);
		char* dt = ctime(&now);
		cout << dt << endl;*/
	}

	static void Debug(const string& msg) {
		if (m_loglevel == loglevel::DEBUG) {
			cerr << msg << endl;
		}
		m_out << msg << endl;

		/*time_t now = time(0);
		char* dt = ctime(&now);
		cout << dt << endl;
*/
	}
	~log() {
		cout << "Destr" << endl;
	}
};


