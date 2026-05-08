#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A7CC1C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7CC110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CC1D0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DeriveBytes_TypeDefinitionIndex = 1056;

	class DeriveBytes : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
