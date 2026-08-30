#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsnDecodeStatus.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509Extension.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyUsageFlags.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsnEncodedData; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1828C140)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1828BD60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x1828BF30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_GETVALIDFLAGS_OFFSET UNITYSDK_OFFSET(0x1828BF20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_GET_KEYUSAGES_OFFSET UNITYSDK_OFFSET(0x1828C0D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1828C2B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1828BCE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1828BEA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1828BC90)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509KeyUsageExtension_TypeDefinitionIndex = 2711;

	class X509KeyUsageExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension
	{
	public:
		// static const ::System::String* oid; // 0x0
		// static const ::System::String* friendlyName; // 0x0
		// static const ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags all; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _keyUsages; // 0x28
		::System::Security::Cryptography::AsnDecodeStatus _status; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsnEncodedData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags get_KeyUsages()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_GET_KEYUSAGES_OFFSET))(this);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_COPYFROM_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags GetValidFlags(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags a1)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_GETVALIDFLAGS_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::AsnDecodeStatus Decode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Security::Cryptography::AsnDecodeStatus(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_DECODE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* Encode()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_ENCODE_OFFSET))(this);
		}

		::System::String* ToString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_TOSTRING_OFFSET))(this, a1);
		}
	};
}
