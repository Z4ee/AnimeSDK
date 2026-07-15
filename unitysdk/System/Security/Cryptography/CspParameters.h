#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/CspProviderFlags.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x18361480)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x18361490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18361600)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x183615B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18361650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x18361560)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CspParameters_TypeDefinitionIndex = 1003;

	class CspParameters : public ::System::Object
	{
	public:
		::System::String* ProviderName; // 0x10
		::System::String* KeyContainerName; // 0x18
		::System::Int32 ProviderType; // 0x20
		::System::Int32 m_flags; // 0x24
		::System::Int32 KeyNumber; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Security::Cryptography::CspProviderFlags a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Security::Cryptography::CspProviderFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Security::Cryptography::CspProviderFlags get_Flags()
		{
			return ((::System::Security::Cryptography::CspProviderFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::System::Security::Cryptography::CspProviderFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspProviderFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_FLAGS_OFFSET))(this, a1);
		}
	};
}
