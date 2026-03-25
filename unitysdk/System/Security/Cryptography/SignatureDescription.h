#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DEFORMATTERALGORITHM_OFFSET UNITYSDK_OFFSET(0x161E2390)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DIGESTALGORITHM_OFFSET UNITYSDK_OFFSET(0x161E2370)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_FORMATTERALGORITHM_OFFSET UNITYSDK_OFFSET(0x161E2380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_KEYALGORITHM_OFFSET UNITYSDK_OFFSET(0x161E2360)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x161D3D10)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SignatureDescription_TypeDefinitionIndex = 1053;

	class SignatureDescription : public ::System::Object
	{
	public:
		::System::String* _strFormatter; // 0x10
		::System::String* _strDeformatter; // 0x18
		::System::String* _strDigest; // 0x20
		::System::String* _strKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION__CTOR_OFFSET))(this);
		}

		::System::Void set_KeyAlgorithm(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_KEYALGORITHM_OFFSET))(this, value);
		}

		::System::Void set_DigestAlgorithm(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DIGESTALGORITHM_OFFSET))(this, value);
		}

		::System::Void set_FormatterAlgorithm(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_FORMATTERALGORITHM_OFFSET))(this, value);
		}

		::System::Void set_DeformatterAlgorithm(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DEFORMATTERALGORITHM_OFFSET))(this, value);
		}
	};
}
