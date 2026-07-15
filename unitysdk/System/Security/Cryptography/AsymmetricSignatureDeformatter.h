#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18359FC0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsymmetricSignatureDeformatter_TypeDefinitionIndex = 995;

	class AsymmetricSignatureDeformatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREDEFORMATTER__CTOR_OFFSET))(this);
		}
	};
}
