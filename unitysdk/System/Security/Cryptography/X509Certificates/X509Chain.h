#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography::X509Certificates { class X509ChainImpl; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainPolicy; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A174C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A174C30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A174D40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x1A174B00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_SET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x1A174C00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A174B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A174B60)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Chain_TypeDefinitionIndex = 2688;

	class X509Chain : public ::System::Object
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean useMachineContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_1_OFFSET))(this, useMachineContext);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainImpl* get_Impl()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509ChainImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_IMPL_OFFSET))(this);
		}

		::System::Void set_ChainPolicy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_SET_CHAINPOLICY_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_FINALIZE_OFFSET))(this);
		}
	};
}
