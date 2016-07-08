// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the MSG_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// MSG_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MSG_EXPORTS
#define MSG_API __declspec(dllexport)
#else
#define MSG_API __declspec(dllimport)
#endif

// This class is exported from the msg.dll
class MSG_API Cmsg {
public:
	Cmsg(void);
	// TODO: add your methods here.
};

class MSG_API CMsgService{
public:
  static CMsgService* instance();
public:
  CMsgService(){
    m_count = 0;
  }
public:
  int m_count;
};
extern MSG_API int nmsg;

MSG_API int fnmsg(void);
MSG_API char* msg_alloc_buffer(int size);
