#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x183656A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183655C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES__CTOR_OFFSET UNITYSDK_OFFSET(0x183656B0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DeriveBytes_TypeDefinitionIndex = 1009;

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

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_DISPOSE_1_OFFSET))(this, a1);
		}
	};
}
