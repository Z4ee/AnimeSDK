#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TermInfoNumbers.h"
#include "unitysdk/System/TermInfoStrings.h"

namespace System { class String; }

#define SYSTEM_TERMINFOREADER_GETINT16_OFFSET UNITYSDK_OFFSET(0x17832EA0)
#define SYSTEM_TERMINFOREADER_GETSTRINGBYTES_1_OFFSET UNITYSDK_OFFSET(0x17833010)
#define SYSTEM_TERMINFOREADER_GETSTRINGBYTES_OFFSET UNITYSDK_OFFSET(0x17832820)
#define SYSTEM_TERMINFOREADER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x17832F20)
#define SYSTEM_TERMINFOREADER_GET_1_OFFSET UNITYSDK_OFFSET(0x1782D3A0)
#define SYSTEM_TERMINFOREADER_GET_OFFSET UNITYSDK_OFFSET(0x1782D540)
#define SYSTEM_TERMINFOREADER_READHEADER_OFFSET UNITYSDK_OFFSET(0x17832AB0)
#define SYSTEM_TERMINFOREADER_READNAMES_OFFSET UNITYSDK_OFFSET(0x17832DA0)
#define SYSTEM_TERMINFOREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1782CA30)
#define SYSTEM_TERMINFOREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1782C7C0)

namespace System
{
	inline static constexpr unsigned int TermInfoReader_TypeDefinitionIndex = 430;

	class TermInfoReader : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Int32 booleansOffset; // 0x18
		::System::Int16 strOffsets; // 0x1C
		::System::Int16 numSize; // 0x1E
		::System::Int16 boolSize; // 0x20

		::System::Void _ctor(::System::String* term, ::System::String* filename)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER__CTOR_OFFSET))(this, term, filename);
		}

		::System::Void _ctor_1(::System::String* term, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER__CTOR_1_OFFSET))(this, term, buffer);
		}

		::System::Void ReadHeader(::Il2CppArray<::System::Byte>* buffer, ::System::Int32& position)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_READHEADER_OFFSET))(this, buffer, position);
		}

		::System::Void ReadNames(::Il2CppArray<::System::Byte>* buffer, ::System::Int32& position)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_READNAMES_OFFSET))(this, buffer, position);
		}

		::System::Int32 Get(::System::TermInfoNumbers number)
		{
			return ((::System::Int32(*)(::PVOID, ::System::TermInfoNumbers))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GET_OFFSET))(this, number);
		}

		::System::String* Get_1(::System::TermInfoStrings tstr)
		{
			return ((::System::String*(*)(::PVOID, ::System::TermInfoStrings))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GET_1_OFFSET))(this, tstr);
		}

		::Il2CppArray<::System::Byte>* GetStringBytes(::System::TermInfoStrings tstr)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::TermInfoStrings))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETSTRINGBYTES_OFFSET))(this, tstr);
		}

		::System::Int16 GetInt16(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Int16(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETINT16_OFFSET))(this, buffer, offset);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETSTRING_OFFSET))(this, buffer, offset);
		}

		::Il2CppArray<::System::Byte>* GetStringBytes_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETSTRINGBYTES_1_OFFSET))(this, buffer, offset);
		}
	};
}
