// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �� ������Ʈ ���� ���� ������
// ��� �ִ� ���� �����Դϴ�.
//

#pragma once

#pragma warning(disable : 4018)

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <iostream>
#include <set>
#include <map>
#include <memory>
#include <utility>

#include <process.h>

// Library
#include <boost/asio.hpp>
using boost::asio::ip::tcp;

#include <windows/gperftools/tcmalloc.h>
#ifdef _DEBUG
#pragma comment(lib, "libtcmalloc_minimal-debug.lib")
#else
#pragma comment(lib, "libtcmalloc_minimal.lib")
#endif

#include <ppl.h>
using namespace concurrency;



// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
