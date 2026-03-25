#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithmName.h"
#include "unitysdk/System/Security/Cryptography/RSAEncryptionPaddingMode.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x16420100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_CREATEOAEP_OFFSET UNITYSDK_OFFSET(0x1641FF80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16420170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_OFFSET UNITYSDK_OFFSET(0x16420110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16420010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPSHA1_OFFSET UNITYSDK_OFFSET(0x1641FF10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_PKCS1_OFFSET UNITYSDK_OFFSET(0x1641FEB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1641DB50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16420340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164203C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CCTOR_OFFSET UNITYSDK_OFFSET(0x16420440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1641FF70)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAEncryptionPadding_TypeDefinitionIndex = 988;

	class RSAEncryptionPadding : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA384()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0x5C00);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_pkcs1()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0x5C08);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA1()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0x5C10);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA512()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0x5C18);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA256()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0x5C20);
		}
		::System::Security::Cryptography::HashAlgorithmName _oaepHashAlgorithm; // 0x10
		::System::Security::Cryptography::RSAEncryptionPaddingMode _mode; // 0x18

		::System::Void _ctor(::System::Security::Cryptography::RSAEncryptionPaddingMode mode, ::System::Security::Cryptography::HashAlgorithmName oaepHashAlgorithm)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAEncryptionPaddingMode, ::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CTOR_OFFSET))(this, mode, oaepHashAlgorithm);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CCTOR_OFFSET))();
		}

		static ::System::Security::Cryptography::RSAEncryptionPadding* get_Pkcs1()
		{
			return ((::System::Security::Cryptography::RSAEncryptionPadding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_PKCS1_OFFSET))();
		}

		static ::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA1()
		{
			return ((::System::Security::Cryptography::RSAEncryptionPadding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPSHA1_OFFSET))();
		}

		static ::System::Security::Cryptography::RSAEncryptionPadding* CreateOaep(::System::Security::Cryptography::HashAlgorithmName hashAlgorithm)
		{
			return ((::System::Security::Cryptography::RSAEncryptionPadding*(*)(::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_CREATEOAEP_OFFSET))(hashAlgorithm);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_COMBINEHASHCODES_OFFSET))(h1, h2);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Security::Cryptography::RSAEncryptionPadding* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::System::Security::Cryptography::RSAEncryptionPadding* left, ::System::Security::Cryptography::RSAEncryptionPadding* right)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSAEncryptionPadding*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Security::Cryptography::RSAEncryptionPadding* left, ::System::Security::Cryptography::RSAEncryptionPadding* right)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSAEncryptionPadding*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_TOSTRING_OFFSET))(this);
		}
	};
}
