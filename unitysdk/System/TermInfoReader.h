#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TermInfoNumbers.h"
#include "unitysdk/System/TermInfoStrings.h"

namespace System { class String; }

#define SYSTEM_TERMINFOREADER_GETINT16_OFFSET UNITYSDK_OFFSET(0x185ECD50)
#define SYSTEM_TERMINFOREADER_GETSTRINGBYTES_1_OFFSET UNITYSDK_OFFSET(0x185ECEA0)
#define SYSTEM_TERMINFOREADER_GETSTRINGBYTES_OFFSET UNITYSDK_OFFSET(0x185EC810)
#define SYSTEM_TERMINFOREADER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x185ECDC0)
#define SYSTEM_TERMINFOREADER_GET_1_OFFSET UNITYSDK_OFFSET(0x185E7280)
#define SYSTEM_TERMINFOREADER_GET_OFFSET UNITYSDK_OFFSET(0x185E73F0)
#define SYSTEM_TERMINFOREADER_READHEADER_OFFSET UNITYSDK_OFFSET(0x185ECA20)
#define SYSTEM_TERMINFOREADER_READNAMES_OFFSET UNITYSDK_OFFSET(0x185ECC50)
#define SYSTEM_TERMINFOREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185E6800)
#define SYSTEM_TERMINFOREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x185E6590)

namespace System
{
	inline static constexpr unsigned int TermInfoReader_TypeDefinitionIndex = 429;

	class TermInfoReader : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Int32 booleansOffset; // 0x18
		::System::Int16 boolSize; // 0x1C
		::System::Int16 numSize; // 0x1E
		::System::Int16 strOffsets; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void ReadHeader(::Il2CppArray<::System::Byte>* a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_READHEADER_OFFSET))(this, a1, a2);
		}

		::System::Void ReadNames(::Il2CppArray<::System::Byte>* a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_READNAMES_OFFSET))(this, a1, a2);
		}

		::System::Int32 Get(::System::TermInfoNumbers a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::TermInfoNumbers))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GET_OFFSET))(this, a1);
		}

		::System::String* Get_1(::System::TermInfoStrings a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::TermInfoStrings))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GET_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetStringBytes(::System::TermInfoStrings a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::TermInfoStrings))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETSTRINGBYTES_OFFSET))(this, a1);
		}

		::System::Int16 GetInt16(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int16(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETINT16_OFFSET))(this, a1, a2);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETSTRING_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* GetStringBytes_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETSTRINGBYTES_1_OFFSET))(this, a1, a2);
		}
	};
}
