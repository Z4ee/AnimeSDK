#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class Oid; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_BASICCONSTRAINTSEXTENSION_OFFSET UNITYSDK_OFFSET(0x1AFCFEB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1AFCF900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1AFD0A10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_ENHANCEDKEYUSAGEEXTENSION_OFFSET UNITYSDK_OFFSET(0x1AFCFFB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_GET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x1AFCF8F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_KEYUSAGEEXTENSION_OFFSET UNITYSDK_OFFSET(0x1AFD00B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_NETSCAPECERTTYPE_OFFSET UNITYSDK_OFFSET(0x1AFD0720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SET_OID_OFFSET UNITYSDK_OFFSET(0x1AFCF6C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x1AFCF740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SUBJECTALTNAME_OFFSET UNITYSDK_OFFSET(0x1AFD02B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SUBJECTKEYIDENTIFIEREXTENSION_OFFSET UNITYSDK_OFFSET(0x1AFD01B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AFCFA60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFCF630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCF620)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsnEncodedData_TypeDefinitionIndex = 2669;

	class AsnEncodedData : public ::System::Object
	{
	public:
		::System::Security::Cryptography::Oid* _oid; // 0x10
		::Il2CppArray<::System::Byte>* _raw; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::Oid* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Oid*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void set_Oid(::System::Security::Cryptography::Oid* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Oid*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SET_OID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_RawData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_GET_RAWDATA_OFFSET))(this);
		}

		::System::Void set_RawData(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SET_RAWDATA_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_COPYFROM_OFFSET))(this, a1);
		}

		::System::String* ToString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* Default(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_DEFAULT_OFFSET))(this, a1);
		}

		::System::String* BasicConstraintsExtension(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_BASICCONSTRAINTSEXTENSION_OFFSET))(this, a1);
		}

		::System::String* EnhancedKeyUsageExtension(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_ENHANCEDKEYUSAGEEXTENSION_OFFSET))(this, a1);
		}

		::System::String* KeyUsageExtension(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_KEYUSAGEEXTENSION_OFFSET))(this, a1);
		}

		::System::String* SubjectKeyIdentifierExtension(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SUBJECTKEYIDENTIFIEREXTENSION_OFFSET))(this, a1);
		}

		::System::String* SubjectAltName(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SUBJECTALTNAME_OFFSET))(this, a1);
		}

		::System::String* NetscapeCertType(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_NETSCAPECERTTYPE_OFFSET))(this, a1);
		}
	};
}
