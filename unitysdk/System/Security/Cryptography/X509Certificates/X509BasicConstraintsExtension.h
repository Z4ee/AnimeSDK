#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsnDecodeStatus.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509Extension.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsnEncodedData; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1F0ABCD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1F0AB800)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x1F0ABA40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_CERTIFICATEAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1F0ABB80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_HASPATHLENGTHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1F0ABBF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_PATHLENGTHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1F0ABC60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0A86D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0A8650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F0AB970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0AB7B0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509BasicConstraintsExtension_TypeDefinitionIndex = 2691;

	class X509BasicConstraintsExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension
	{
	public:
		// static const ::System::String* oid; // 0x0
		// static const ::System::String* friendlyName; // 0x0
		::System::Int32 _pathLengthConstraint; // 0x28
		::System::Security::Cryptography::AsnDecodeStatus _status; // 0x2C
		::System::Boolean _hasPathLengthConstraint; // 0x30
		::System::Boolean _certificateAuthority; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsnEncodedData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Boolean a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_CertificateAuthority()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_CERTIFICATEAUTHORITY_OFFSET))(this);
		}

		::System::Boolean get_HasPathLengthConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_HASPATHLENGTHCONSTRAINT_OFFSET))(this);
		}

		::System::Int32 get_PathLengthConstraint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_PATHLENGTHCONSTRAINT_OFFSET))(this);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_COPYFROM_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::AsnDecodeStatus Decode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Security::Cryptography::AsnDecodeStatus(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_DECODE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* Encode()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_ENCODE_OFFSET))(this);
		}

		::System::String* ToString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_TOSTRING_OFFSET))(this, a1);
		}
	};
}
