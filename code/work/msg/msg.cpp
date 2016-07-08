// msg.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "msg.h"


// This is an example of an exported variable
MSG_API int nmsg=0;

// This is an example of an exported function.
MSG_API int fnmsg(void)
{
	return 42+1;
}

// This is the constructor of a class that has been exported.
// see msg.h for the class definition
Cmsg::Cmsg()
{
	return;
}
CMsgService* CMsgService::instance()
{
  static CMsgService _instance;
  return &_instance;
}
MSG_API char* msg_alloc_buffer(int size)
{
  if (0 >= size)
    size = 1;
  return new char[size];
}