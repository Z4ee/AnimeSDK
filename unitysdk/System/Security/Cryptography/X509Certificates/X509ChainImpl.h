#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography::X509Certificates { class X509ChainPolicy; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AFD9450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFD8EA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AFD9460)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD94D0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainImpl_TypeDefinitionIndex = 2691;

	class X509ChainImpl : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL_FINALIZE_OFFSET))(this);
		}
	};
}
