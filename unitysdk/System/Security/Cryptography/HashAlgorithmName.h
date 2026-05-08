#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8E5990)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x8E5910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8E59C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA1_OFFSET UNITYSDK_OFFSET(0x1A5AD0B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA256_OFFSET UNITYSDK_OFFSET(0x1A5AD0F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA384_OFFSET UNITYSDK_OFFSET(0x1A5AD130)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA512_OFFSET UNITYSDK_OFFSET(0x1A5AD170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A5AD320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8E58F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HashAlgorithmName_TypeDefinitionIndex = 1035;

	struct alignas(8) HashAlgorithmName
	{
		::System::String* _name; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME__CTOR_OFFSET))(this, name);
		}

		static ::System::Security::Cryptography::HashAlgorithmName get_SHA1()
		{
			return ((::System::Security::Cryptography::HashAlgorithmName(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA1_OFFSET))();
		}

		static ::System::Security::Cryptography::HashAlgorithmName get_SHA256()
		{
			return ((::System::Security::Cryptography::HashAlgorithmName(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA256_OFFSET))();
		}

		static ::System::Security::Cryptography::HashAlgorithmName get_SHA384()
		{
			return ((::System::Security::Cryptography::HashAlgorithmName(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA384_OFFSET))();
		}

		static ::System::Security::Cryptography::HashAlgorithmName get_SHA512()
		{
			return ((::System::Security::Cryptography::HashAlgorithmName(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA512_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Security::Cryptography::HashAlgorithmName other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Security::Cryptography::HashAlgorithmName left, ::System::Security::Cryptography::HashAlgorithmName right)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_OP_EQUALITY_OFFSET))(left, right);
		}
	};
}
