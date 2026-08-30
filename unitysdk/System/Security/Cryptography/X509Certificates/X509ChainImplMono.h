#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/StoreLocation.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainImpl.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainStatus.h"

namespace System::Security::Cryptography::X509Certificates { class X509ChainElementCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainPolicy; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1828A820)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_SET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x1828A830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1828A840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x1828A4C0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainImplMono_TypeDefinitionIndex = 2703;

	class X509ChainImplMono : public ::System::Security::Cryptography::X509Certificates::X509ChainImpl
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>** StaticGet_Empty()
		{
			return (::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>**)Il2CppClass::FromTypeDefinitionIndex(X509ChainImplMono_TypeDefinitionIndex)->GetStaticField(0x25610);
		}
		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements; // 0x10
		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy; // 0x18
		::System::Security::Cryptography::X509Certificates::StoreLocation location; // 0x20

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_ChainPolicy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_SET_CHAINPOLICY_OFFSET))(this, a1);
		}
	};
}
