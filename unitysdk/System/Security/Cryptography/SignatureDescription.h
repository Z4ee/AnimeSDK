#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DEFORMATTERALGORITHM_OFFSET UNITYSDK_OFFSET(0x1780EEC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DIGESTALGORITHM_OFFSET UNITYSDK_OFFSET(0x1780EEA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_FORMATTERALGORITHM_OFFSET UNITYSDK_OFFSET(0x1780EEB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_KEYALGORITHM_OFFSET UNITYSDK_OFFSET(0x1780EE90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17800840)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SignatureDescription_TypeDefinitionIndex = 1055;

	class SignatureDescription : public ::System::Object
	{
	public:
		::System::String* _strDeformatter; // 0x10
		::System::String* _strKey; // 0x18
		::System::String* _strFormatter; // 0x20
		::System::String* _strDigest; // 0x28

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
