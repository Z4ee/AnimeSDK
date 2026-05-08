#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B9D00)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsymmetricSignatureFormatter_TypeDefinitionIndex = 1043;

	class AsymmetricSignatureFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER__CTOR_OFFSET))(this);
		}
	};
}
