#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_SECURESTRING_ALLOC_OFFSET UNITYSDK_OFFSET(0x161EAE70)
#define SYSTEM_SECURITY_SECURESTRING_DECRYPT_OFFSET UNITYSDK_OFFSET(0x161EB160)
#define SYSTEM_SECURITY_SECURESTRING_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161EB120)
#define SYSTEM_SECURITY_SECURESTRING_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x161EB0A0)
#define SYSTEM_SECURITY_SECURESTRING_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x161EB170)
#define SYSTEM_SECURITY_SECURESTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x161EB0B0)
#define SYSTEM_SECURITY_SECURESTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161EAF60)
#define SYSTEM_SECURITY_SECURESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x161EAE40)

namespace System::Security
{
	inline static constexpr unsigned int SecureString_TypeDefinitionIndex = 940;

	class SecureString : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* data; // 0x10
		::System::Boolean disposed; // 0x18
		::System::Int32 length; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Char* value, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING__CTOR_1_OFFSET))(this, value, length);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_GET_LENGTH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_DISPOSE_OFFSET))(this);
		}

		::System::Void Encrypt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_ENCRYPT_OFFSET))(this);
		}

		::System::Void Decrypt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_DECRYPT_OFFSET))(this);
		}

		::System::Void Alloc(::System::Int32 length, ::System::Boolean realloc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_ALLOC_OFFSET))(this, length, realloc);
		}

		::Il2CppArray<::System::Byte>* GetBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_GETBUFFER_OFFSET))(this);
		}
	};
}
