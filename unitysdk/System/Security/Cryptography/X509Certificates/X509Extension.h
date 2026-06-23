#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsnEncodedData.h"

namespace System { class String; }
namespace System::Security::Cryptography { class Oid; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1C08BB20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_FORMATUNKOWNDATA_OFFSET UNITYSDK_OFFSET(0x1C08BBF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_GET_CRITICAL_OFFSET UNITYSDK_OFFSET(0x1C08BB00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_SET_CRITICAL_OFFSET UNITYSDK_OFFSET(0x1C08BB10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C08B900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C08B9F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C08BAE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C08B8F0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Extension_TypeDefinitionIndex = 3204;

	class X509Extension : public ::System::Security::Cryptography::AsnEncodedData
	{
	public:
		::System::Boolean _critical; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsnEncodedData* encodedExtension, ::System::Boolean critical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION__CTOR_1_OFFSET))(this, encodedExtension, critical);
		}

		::System::Void _ctor_2(::System::Security::Cryptography::Oid* oid, ::Il2CppArray<::System::Byte>* rawData, ::System::Boolean critical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Oid*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION__CTOR_2_OFFSET))(this, oid, rawData, critical);
		}

		::System::Void _ctor_3(::System::String* oid, ::Il2CppArray<::System::Byte>* rawData, ::System::Boolean critical)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION__CTOR_3_OFFSET))(this, oid, rawData, critical);
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
