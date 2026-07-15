#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsnDecodeStatus.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509Extension.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509SubjectKeyIdentifierHashAlgorithm.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsnEncodedData; }
namespace System::Security::Cryptography::X509Certificates { class PublicKey; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x167CA790)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x167C9B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x167C9E80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHARS_OFFSET UNITYSDK_OFFSET(0x167CA940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHAR_OFFSET UNITYSDK_OFFSET(0x167CA900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEX_OFFSET UNITYSDK_OFFSET(0x167CA090)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_GET_SUBJECTKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x167CA700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x167CA9C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x167C9AE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x167C9C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x167C9F20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x167CA250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x167CA260)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x167C9A90)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509SubjectKeyIdentifierExtension_TypeDefinitionIndex = 2705;

	class X509SubjectKeyIdentifierExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension
	{
	public:
		// static const ::System::String* oid; // 0x0
		// static const ::System::String* friendlyName; // 0x0
		::Il2CppArray<::System::Byte>* _subjectKeyIdentifier; // 0x28
		::System::String* _ski; // 0x30
		::System::Security::Cryptography::AsnDecodeStatus _status; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsnEncodedData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::Security::Cryptography::X509Certificates::PublicKey* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::PublicKey*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_5(::System::Security::Cryptography::X509Certificates::PublicKey* a1, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::PublicKey*, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_5_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_SubjectKeyIdentifier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_GET_SUBJECTKEYIDENTIFIER_OFFSET))(this);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_COPYFROM_OFFSET))(this, a1);
		}

		static ::System::Byte FromHexChar(::System::Char a1)
		{
			return ((::System::Byte(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHAR_OFFSET))(a1);
		}

		static ::System::Byte FromHexChars(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Byte(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHARS_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* FromHex(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEX_OFFSET))(a1);
		}

		::System::Security::Cryptography::AsnDecodeStatus Decode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Security::Cryptography::AsnDecodeStatus(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_DECODE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* Encode()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_ENCODE_OFFSET))(this);
		}

		::System::String* ToString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_TOSTRING_OFFSET))(this, a1);
		}
	};
}
