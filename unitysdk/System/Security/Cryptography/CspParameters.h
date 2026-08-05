#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/CspProviderFlags.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1E129E50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E129FC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E129F70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E12A010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E129F20)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CspParameters_TypeDefinitionIndex = 1049;

	class CspParameters : public ::System::Object
	{
	public:
		::System::String* ProviderName; // 0x10
		::System::String* KeyContainerName; // 0x18
		::System::Int32 KeyNumber; // 0x20
		::System::Int32 m_flags; // 0x24
		::System::Int32 ProviderType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 dwTypeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_1_OFFSET))(this, dwTypeIn);
		}

		::System::Void _ctor_2(::System::Int32 dwTypeIn, ::System::String* strProviderNameIn, ::System::String* strContainerNameIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_2_OFFSET))(this, dwTypeIn, strProviderNameIn, strContainerNameIn);
		}

		::System::Void _ctor_3(::System::Int32 providerType, ::System::String* providerName, ::System::String* keyContainerName, ::System::Security::Cryptography::CspProviderFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Security::Cryptography::CspProviderFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_3_OFFSET))(this, providerType, providerName, keyContainerName, flags);
		}

		::System::Void set_Flags(::System::Security::Cryptography::CspProviderFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspProviderFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_FLAGS_OFFSET))(this, value);
		}
	};
}
