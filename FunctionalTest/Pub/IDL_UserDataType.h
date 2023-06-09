// Don't modify this file as it will be overwritten.
//
#include "CDR/CDR.h"
#include "ReturnCode.h"
#include "BasicTypes.h"

#ifndef IDL_UserDataType_hh
#define IDL_UserDataType_hh

#ifndef UserDataType_defined
#define UserDataType_defined

struct UserDataType {
  UserDataType()
	{
		for (int i0=0;i0<1024;i0++)
		{
			data[i0] = 0;
		}
		for (int i0=0;i0<16;i0++)
		{
			md5[i0] = 0;
		}
	}

  UserDataType(const UserDataType  &IDL_s);

  ~UserDataType(){
	}

  	int StructSize()
	{
		int strSize = 0;
		strSize += sizeof(UserDataType);
		for (int i0=0;i0<1024;i0++)
		{
		}
		for (int i0=0;i0<16;i0++)
		{
		}
		return strSize;
	}
  UserDataType& operator= (const UserDataType &IDL_s);

  void Marshal(CDR *cdr) const;
  void UnMarshal(CDR *cdr);

  char data[1024];
char md5[16];
  
};

typedef sequence<UserDataType> UserDataTypeSeq;

#endif




#endif /*IDL_UserDataType_hh */
