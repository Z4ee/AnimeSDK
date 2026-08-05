#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricAlgorithm.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET UNITYSDK_OFFSET(0x1DCFFB30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1DCFFB80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1DD00420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCFFB20)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSA_TypeDefinitionIndex = 1059;

	class DSA : public ::System::Security::Cryptography::AsymmetricAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::DSA* Create()
		{
			return ((::System::Security::Cryptography::DSA*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET))();
		}

		::System::Void FromXmlString(::System::String* xmlString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_FROMXMLSTRING_OFFSET))(this, xmlString);
		}

		::System::String* ToXmlString(::System::Boolean includePrivateParameters)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TOXMLSTRING_OFFSET))(this, includePrivateParameters);
		}
	};
}
