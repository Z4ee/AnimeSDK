#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsnDecodeStatus.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509Extension.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsnEncodedData; }
namespace System::Security::Cryptography { class OidCollection; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1A3355A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1A334B70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x1A335110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_GET_ENHANCEDKEYUSAGES_OFFSET UNITYSDK_OFFSET(0x1A335360)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A335710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A334AF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A334E80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A334AA0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509EnhancedKeyUsageExtension_TypeDefinitionIndex = 3204;

	class X509EnhancedKeyUsageExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension
	{
	public:
		// static const ::System::String* oid; // 0x0
		// static const ::System::String* friendlyName; // 0x0
		::System::Security::Cryptography::OidCollection* _enhKeyUsage; // 0x28
		::System::Security::Cryptography::AsnDecodeStatus _status; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsnEncodedData* encodedEnhancedKeyUsages, ::System::Boolean critical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION__CTOR_1_OFFSET))(this, encodedEnhancedKeyUsages, critical);
		}

		::System::Void _ctor_2(::System::Security::Cryptography::OidCollection* enhancedKeyUsages, ::System::Boolean critical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::OidCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION__CTOR_2_OFFSET))(this, enhancedKeyUsages, critical);
		}

		::System::Security::Cryptography::OidCollection* get_EnhancedKeyUsages()
		{
			return ((::System::Security::Cryptography::OidCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_GET_ENHANCEDKEYUSAGES_OFFSET))(this);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_COPYFROM_OFFSET))(this, asnEncodedData);
		}

		::System::Security::Cryptography::AsnDecodeStatus Decode(::Il2CppArray<::System::Byte>* extension)
		{
			return ((::System::Security::Cryptography::AsnDecodeStatus(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_DECODE_OFFSET))(this, extension);
		}

		::Il2CppArray<::System::Byte>* Encode()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_ENCODE_OFFSET))(this);
		}

		::System::String* ToString(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_TOSTRING_OFFSET))(this, multiLine);
		}
	};
}
