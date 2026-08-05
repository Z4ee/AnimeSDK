#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9D4B20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D4AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D4B50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA1_OFFSET UNITYSDK_OFFSET(0x1DD00970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA256_OFFSET UNITYSDK_OFFSET(0x1DD009B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA384_OFFSET UNITYSDK_OFFSET(0x1DD009F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA512_OFFSET UNITYSDK_OFFSET(0x1DD00A30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DD00BE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D4A80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HashAlgorithmName_TypeDefinitionIndex = 1034;

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
