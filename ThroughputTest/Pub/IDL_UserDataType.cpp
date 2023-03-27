// Don't modify this file as it will be overwritten.
//
#include "IDL_UserDataType.h"

UserDataType::UserDataType(const UserDataType &IDL_s){
  number = IDL_s.number;
  length = IDL_s.length;
  data = IDL_s.data;
}

UserDataType& UserDataType::operator= (const UserDataType &IDL_s){
  if (this == &IDL_s) return *this;
  number = IDL_s.number;
  length = IDL_s.length;
  data = IDL_s.data;
  return *this;
}

void UserDataType::Marshal(CDR *cdr) const {
  cdr->PutLong(number);
  cdr->PutLong(length);
  cdr->PutString(data);
}

void UserDataType::UnMarshal(CDR *cdr){
  cdr->GetLong(number);
  cdr->GetLong(length);
  {
    char *IDL_str;
    cdr->GetString(IDL_str);
    if(data != NULL )
    {
        delete data;
        data = NULL;
    }
    data = IDL_str;
  }
}

