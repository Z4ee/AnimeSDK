#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsnDecodeStatus.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509Extension.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509SubjectKeyIdentifierHashAlgorithm.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsnEncodedData; }
namespace System::Security::Cryptography::X509Certificates { class PublicKey; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x19B08710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x19B078C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x19B07BE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHARS_OFFSET UNITYSDK_OFFSET(0x19B088C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHAR_OFFSET UNITYSDK_OFFSET(0x19B08880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEX_OFFSET UNITYSDK_OFFSET(0x19B07D80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_GET_SUBJECTKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x19B08680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B03A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B039F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19B079E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19B07C40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19B07F90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x19B07FA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B07870)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509SubjectKeyIdentifierExtension_TypeDefinitionIndex = 3212;

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

		::System::Void _ctor_1(::System::Security::Cryptography::AsnEncodedData* encodedSubjectKeyIdentifier, ::System::Boolean critical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_1_OFFSET))(this, encodedSubjectKeyIdentifier, critical);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* subjectKeyIdentifier, ::System::Boolean critical)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_2_OFFSET))(this, subjectKeyIdentifier, critical);
		}

		::System::Void _ctor_3(::System::String* subjectKeyIdentifier, ::System::Boolean critical)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_3_OFFSET))(this, subjectKeyIdentifier, critical);
		}

		::System::Void _ctor_4(::System::Security::Cryptography::X509Certificates::PublicKey* key, ::System::Boolean critical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::PublicKey*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_4_OFFSET))(this, key, critical);
		}

		::System::Void _ctor_5(::System::Security::Cryptography::X509Certificates::PublicKey* key, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm algorithm, ::System::Boolean critical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::PublicKey*, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION__CTOR_5_OFFSET))(this, key, algorithm, critical);
		}

		::System::String* get_SubjectKeyIdentifier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_GET_SUBJECTKEYIDENTIFIER_OFFSET))(this);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_COPYFROM_OFFSET))(this, asnEncodedData);
		}

		static ::System::Byte FromHexChar(::System::Char c)
		{
			return ((::System::Byte(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHAR_OFFSET))(c);
		}

		static ::System::Byte FromHexChars(::System::Char c1, ::System::Char c2)
		{
			return ((::System::Byte(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHARS_OFFSET))(c1, c2);
		}

		static ::Il2CppArray<::System::Byte>* FromHex(::System::String* hex)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEX_OFFSET))(hex);
		}

		::System::Security::Cryptography::AsnDecodeStatus Decode(::Il2CppArray<::System::Byte>* extension)
		{
			return ((::System::Security::Cryptography::AsnDecodeStatus(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_DECODE_OFFSET))(this, extension);
		}

		::Il2CppArray<::System::Byte>* Encode()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_ENCODE_OFFSET))(this);
		}

		::System::String* ToString(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_TOSTRING_OFFSET))(this, multiLine);
		}
	};
}
