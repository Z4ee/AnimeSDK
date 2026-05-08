#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC9C930)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsymmetricSignatureDeformatter_TypeDefinitionIndex = 1042;

	class AsymmetricSignatureDeformatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREDEFORMATTER__CTOR_OFFSET))(this);
		}
	};
}
