#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsnEncodedData.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1A1764B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_FORMATUNKOWNDATA_OFFSET UNITYSDK_OFFSET(0x1A176360)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_GET_CRITICAL_OFFSET UNITYSDK_OFFSET(0x1A176490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_SET_CRITICAL_OFFSET UNITYSDK_OFFSET(0x1A1764A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A175A10)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Extension_TypeDefinitionIndex = 2696;

	class X509Extension : public ::System::Security::Cryptography::AsnEncodedData
	{
	public:
		::System::Boolean _critical; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Critical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_GET_CRITICAL_OFFSET))(this);
		}

		::System::Void set_Critical(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_SET_CRITICAL_OFFSET))(this, value);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_COPYFROM_OFFSET))(this, asnEncodedData);
		}

		::System::String* FormatUnkownData(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_FORMATUNKOWNDATA_OFFSET))(this, data);
		}
	};
}
