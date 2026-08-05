#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CREATE_OFFSET UNITYSDK_OFFSET(0x1DD00D10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_EFFECTIVEKEYSIZE_OFFSET UNITYSDK_OFFSET(0x1DD00C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1DD00C90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1DD00CA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD00D60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD00C10)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RC2_TypeDefinitionIndex = 1078;

	class RC2 : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(RC2_TypeDefinitionIndex)->GetStaticField(0xE30);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(RC2_TypeDefinitionIndex)->GetStaticField(0xE38);
		}
		::System::Int32 EffectiveKeySizeValue; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2__CCTOR_OFFSET))();
		}

		::System::Int32 get_EffectiveKeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_EFFECTIVEKEYSIZE_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void set_KeySize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_SET_KEYSIZE_OFFSET))(this, value);
		}

		static ::System::Security::Cryptography::RC2* Create()
		{
			return ((::System::Security::Cryptography::RC2*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CREATE_OFFSET))();
		}
	};
}
