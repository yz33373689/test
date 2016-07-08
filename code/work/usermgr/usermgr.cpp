// usermgr.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "usermgr.h"
#include "msg.h"

// This is an example of an exported variable
USERMGR_API int nusermgr=0;

// This is an example of an exported function.
USERMGR_API int fnusermgr(void)
{
	return 42+2;
}

USERMGR_API void test_msg_singleton()
{
  CMsgService* svr = CMsgService::instance();
  ++svr->m_count;
  ++svr->m_count;
}
USERMGR_API void user_free_buffer(char* buf)
{
  if (nullptr != buf)
    delete[]buf;
}
// This is the constructor of a class that has been exported.
// see usermgr.h for the class definition
Cusermgr::Cusermgr()
{
	return;
}
