#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }
namespace System { class WeakReference; }

#define UTF8JSON_JSONPARSINGEXCEPTION_GETUNDERLYINGBYTEARRAYUNSAFE_OFFSET UNITYSDK_OFFSET(0x1E6CFCA0)
#define UTF8JSON_JSONPARSINGEXCEPTION_GETUNDERLYINGSTRINGUNSAFE_OFFSET UNITYSDK_OFFSET(0x1E6CFD00)
#define UTF8JSON_JSONPARSINGEXCEPTION_GET_ACTUALCHAR_OFFSET UNITYSDK_OFFSET(0x1E6CFAC0)
#define UTF8JSON_JSONPARSINGEXCEPTION_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1E6CFAA0)
#define UTF8JSON_JSONPARSINGEXCEPTION_SET_ACTUALCHAR_OFFSET UNITYSDK_OFFSET(0x1E6CFAD0)
#define UTF8JSON_JSONPARSINGEXCEPTION_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1E6CFAB0)
#define UTF8JSON_JSONPARSINGEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6CFB60)
#define UTF8JSON_JSONPARSINGEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CFAE0)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonParsingException_TypeDefinitionIndex = 91080;

	class JsonParsingException : public ::System::Exception
	{
	public:
		::System::WeakReference* underyingBytes; // 0x88
		::System::String* _ActualChar_k__BackingField; // 0x90
		::System::Int32 limit; // 0x98
		::System::Int32 _Offset_k__BackingField; // 0x9C

		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONPARSINGEXCEPTION__CTOR_OFFSET))(this, message);
		}

		::System::Void _ctor_1(::System::String* message, ::Il2CppArray<::System::Byte>* underlyingBytes, ::System::Int32 offset, ::System::Int32 limit, ::System::String* actualChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONPARSINGEXCEPTION__CTOR_1_OFFSET))(this, message, underlyingBytes, offset, limit, actualChar);
		}

		::System::Int32 get_Offset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONPARSINGEXCEPTION_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONPARSINGEXCEPTION_SET_OFFSET_OFFSET))(this, value);
		}

		::System::String* get_ActualChar()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONPARSINGEXCEPTION_GET_ACTUALCHAR_OFFSET))(this);
		}

		::System::Void set_ActualChar(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONPARSINGEXCEPTION_SET_ACTUALCHAR_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetUnderlyingByteArrayUnsafe()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONPARSINGEXCEPTION_GETUNDERLYINGBYTEARRAYUNSAFE_OFFSET))(this);
		}

		::System::String* GetUnderlyingStringUnsafe()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONPARSINGEXCEPTION_GETUNDERLYINGSTRINGUNSAFE_OFFSET))(this);
		}
	};
}
