#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsnEncodedData.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X500DistinguishedNameFlags.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x1923B560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_CANONIZE_OFFSET UNITYSDK_OFFSET(0x1923B2E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_DECODERAWDATA_OFFSET UNITYSDK_OFFSET(0x1923A880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_DECODE_OFFSET UNITYSDK_OFFSET(0x1923ADD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_FORMAT_OFFSET UNITYSDK_OFFSET(0x1923B230)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_GETSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1923B180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_GET_CANONICALENCODING_OFFSET UNITYSDK_OFFSET(0x1923B160)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1923B170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1923A920)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1923AA40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1923AA50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1923AF80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1923B090)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1923A7D0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X500DistinguishedName_TypeDefinitionIndex = 3186;

	class X500DistinguishedName : public ::System::Security::Cryptography::AsnEncodedData
	{
	public:
		// static const ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags AllFlags; // 0x0
		::System::String* name; // 0x20
		::Il2CppArray<::System::Byte>* canonEncoding; // 0x28

		::System::Void _ctor(::System::Security::Cryptography::AsnEncodedData* encodedDistinguishedName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_OFFSET))(this, encodedDistinguishedName);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* encodedDistinguishedName)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_1_OFFSET))(this, encodedDistinguishedName);
		}

		::System::Void _ctor_2(::System::String* distinguishedName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_2_OFFSET))(this, distinguishedName);
		}

		::System::Void _ctor_3(::System::String* distinguishedName, ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_3_OFFSET))(this, distinguishedName, flag);
		}

		::System::Void _ctor_4(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* distinguishedName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_4_OFFSET))(this, distinguishedName);
		}

		::System::Void _ctor_5(::Il2CppArray<::System::Byte>* encoded, ::Il2CppArray<::System::Byte>* canonEncoding, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME__CTOR_5_OFFSET))(this, encoded, canonEncoding, name);
		}

		::Il2CppArray<::System::Byte>* get_CanonicalEncoding()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_GET_CANONICALENCODING_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_GET_NAME_OFFSET))(this);
		}

		::System::String* Decode(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag)
		{
			return ((::System::String*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_DECODE_OFFSET))(this, flag);
		}

		::System::String* Format(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_FORMAT_OFFSET))(this, multiLine);
		}

		static ::System::String* GetSeparator(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag)
		{
			return ((::System::String*(*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_GETSEPARATOR_OFFSET))(flag);
		}

		::System::Void DecodeRawData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_DECODERAWDATA_OFFSET))(this);
		}

		static ::System::String* Canonize(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_CANONIZE_OFFSET))(s);
		}

		static ::System::Boolean AreEqual(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name1, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name2)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_AREEQUAL_OFFSET))(name1, name2);
		}
	};
}
