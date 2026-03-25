#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography::X509Certificates { class X509ChainPolicy; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1873AE90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1873A910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1873AEA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1873AF10)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainImpl_TypeDefinitionIndex = 2690;

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

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPL_FINALIZE_OFFSET))(this);
		}
	};
}
