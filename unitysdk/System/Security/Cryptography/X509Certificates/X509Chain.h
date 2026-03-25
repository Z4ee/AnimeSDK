#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography::X509Certificates { class X509ChainImpl; }
namespace System::Security::Cryptography::X509Certificates { class X509ChainPolicy; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1873A8A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1873A850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1873A960)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x1873A720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_SET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x1873A820)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1873A7B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1873A780)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Chain_TypeDefinitionIndex = 2687;

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
