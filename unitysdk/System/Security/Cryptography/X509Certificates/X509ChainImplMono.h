#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/StoreLocation.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainImpl.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainStatus.h"

namespace System::Security::Cryptography::X509Certificates { class X509ChainElementCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainPolicy; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A175660)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_SET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x1A175670)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A175680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A175300)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainImplMono_TypeDefinitionIndex = 2692;

	class X509ChainImplMono : public ::System::Security::Cryptography::X509Certificates::X509ChainImpl
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>** StaticGet_Empty()
		{
			return (::Il2CppArray<::System::Security::Cryptography::X509Certificates::X509ChainStatus>**)Il2CppClass::FromTypeDefinitionIndex(X509ChainImplMono_TypeDefinitionIndex)->GetStaticField(0x10580);
		}
		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements; // 0x10
		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy; // 0x18
		::System::Security::Cryptography::X509Certificates::StoreLocation location; // 0x20

		::System::Void _ctor(::System::Boolean useMachineContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CTOR_OFFSET))(this, useMachineContext);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_ChainPolicy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_SET_CHAINPOLICY_OFFSET))(this, value);
		}
	};
}
