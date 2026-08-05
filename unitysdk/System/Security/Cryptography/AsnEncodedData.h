#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class Oid; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_BASICCONSTRAINTSEXTENSION_OFFSET UNITYSDK_OFFSET(0x1D416BA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1D416460)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1D4165F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_ENHANCEDKEYUSAGEEXTENSION_OFFSET UNITYSDK_OFFSET(0x1D416CA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_FORMAT_OFFSET UNITYSDK_OFFSET(0x1D4165C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_GET_OID_OFFSET UNITYSDK_OFFSET(0x1D416440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_GET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x1D416450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_KEYUSAGEEXTENSION_OFFSET UNITYSDK_OFFSET(0x1D416DA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_NETSCAPECERTTYPE_OFFSET UNITYSDK_OFFSET(0x1D4174B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SET_OID_OFFSET UNITYSDK_OFFSET(0x1D416270)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x1D416080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SUBJECTALTNAME_OFFSET UNITYSDK_OFFSET(0x1D416FA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SUBJECTKEYIDENTIFIEREXTENSION_OFFSET UNITYSDK_OFFSET(0x1D416EA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D416750)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D415FA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D4161E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D4162F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D416430)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D415F90)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsnEncodedData_TypeDefinitionIndex = 3165;

	class AsnEncodedData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _raw; // 0x10
		::System::Security::Cryptography::Oid* _oid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* oid, ::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_1_OFFSET))(this, oid, rawData);
		}

		::System::Void _ctor_2(::System::Security::Cryptography::Oid* oid, ::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Oid*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_2_OFFSET))(this, oid, rawData);
		}

		::System::Void _ctor_3(::System::Security::Cryptography::AsnEncodedData* asnEncodedData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_3_OFFSET))(this, asnEncodedData);
		}

		::System::Void _ctor_4(::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA__CTOR_4_OFFSET))(this, rawData);
		}

		::System::Security::Cryptography::Oid* get_Oid()
		{
			return ((::System::Security::Cryptography::Oid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_GET_OID_OFFSET))(this);
		}

		::System::Void set_Oid(::System::Security::Cryptography::Oid* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Oid*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SET_OID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_RawData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_GET_RAWDATA_OFFSET))(this);
		}

		::System::Void set_RawData(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SET_RAWDATA_OFFSET))(this, value);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_COPYFROM_OFFSET))(this, asnEncodedData);
		}

		::System::String* Format(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_FORMAT_OFFSET))(this, multiLine);
		}

		::System::String* ToString(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_TOSTRING_OFFSET))(this, multiLine);
		}

		::System::String* Default(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_DEFAULT_OFFSET))(this, multiLine);
		}

		::System::String* BasicConstraintsExtension(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_BASICCONSTRAINTSEXTENSION_OFFSET))(this, multiLine);
		}

		::System::String* EnhancedKeyUsageExtension(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_ENHANCEDKEYUSAGEEXTENSION_OFFSET))(this, multiLine);
		}

		::System::String* KeyUsageExtension(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_KEYUSAGEEXTENSION_OFFSET))(this, multiLine);
		}

		::System::String* SubjectKeyIdentifierExtension(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SUBJECTKEYIDENTIFIEREXTENSION_OFFSET))(this, multiLine);
		}

		::System::String* SubjectAltName(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_SUBJECTALTNAME_OFFSET))(this, multiLine);
		}

		::System::String* NetscapeCertType(::System::Boolean multiLine)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASNENCODEDDATA_NETSCAPECERTTYPE_OFFSET))(this, multiLine);
		}
	};
}
