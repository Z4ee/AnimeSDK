#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricAlgorithm.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET UNITYSDK_OFFSET(0x187EDE90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x187EDEE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x187EE7A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA__CTOR_OFFSET UNITYSDK_OFFSET(0x187EDE80)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSA_TypeDefinitionIndex = 1012;

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

		::System::Void FromXmlString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_FROMXMLSTRING_OFFSET))(this, a1);
		}

		::System::String* ToXmlString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TOXMLSTRING_OFFSET))(this, a1);
		}
	};
}
