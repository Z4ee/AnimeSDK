#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithmName.h"
#include "unitysdk/System/Security/Cryptography/RSAEncryptionPaddingMode.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x185B92B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_CREATEOAEP_OFFSET UNITYSDK_OFFSET(0x185B9120)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x185B9320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_OFFSET UNITYSDK_OFFSET(0x185B92C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x185B91C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPSHA1_OFFSET UNITYSDK_OFFSET(0x185B90B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_PKCS1_OFFSET UNITYSDK_OFFSET(0x185B9050)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x185B95F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x185B9570)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x185B9610)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CCTOR_OFFSET UNITYSDK_OFFSET(0x185B97E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CTOR_OFFSET UNITYSDK_OFFSET(0x185B9110)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAEncryptionPadding_TypeDefinitionIndex = 989;

	class RSAEncryptionPadding : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA256()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0xF100);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_pkcs1()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0xF108);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA384()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0xF110);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA1()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0xF118);
		}
		static ::System::Security::Cryptography::RSAEncryptionPadding** StaticGet_s_oaepSHA512()
		{
			return (::System::Security::Cryptography::RSAEncryptionPadding**)Il2CppClass::FromTypeDefinitionIndex(RSAEncryptionPadding_TypeDefinitionIndex)->GetStaticField(0xF120);
		}
		::System::Security::Cryptography::HashAlgorithmName _oaepHashAlgorithm; // 0x10
		::System::Security::Cryptography::RSAEncryptionPaddingMode _mode; // 0x18

		::System::Void _ctor(::System::Security::Cryptography::RSAEncryptionPaddingMode a1, ::System::Security::Cryptography::HashAlgorithmName a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAEncryptionPaddingMode, ::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING__CTOR_OFFSET))(this, a1, a2);
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

		static ::System::Security::Cryptography::RSAEncryptionPadding* CreateOaep(::System::Security::Cryptography::HashAlgorithmName a1)
		{
			return ((::System::Security::Cryptography::RSAEncryptionPadding*(*)(::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_CREATEOAEP_OFFSET))(a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_COMBINEHASHCODES_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Security::Cryptography::RSAEncryptionPadding* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::System::Security::Cryptography::RSAEncryptionPadding* a1, ::System::Security::Cryptography::RSAEncryptionPadding* a2)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSAEncryptionPadding*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Security::Cryptography::RSAEncryptionPadding* a1, ::System::Security::Cryptography::RSAEncryptionPadding* a2)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSAEncryptionPadding*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_TOSTRING_OFFSET))(this);
		}
	};
}
