// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the USERMGR_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// USERMGR_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef USERMGR_EXPORTS
#define USERMGR_API __declspec(dllexport)
#else
#define USERMGR_API __declspec(dllimport)
#endif

// This class is exported from the usermgr.dll
class USERMGR_API Cusermgr {
public:
	Cusermgr(void);
	// TODO: add your methods here.
};

extern USERMGR_API int nusermgr;

USERMGR_API int fnusermgr(void);
USERMGR_API void test_msg_singleton();
USERMGR_API void user_free_buffer(char* buf);
