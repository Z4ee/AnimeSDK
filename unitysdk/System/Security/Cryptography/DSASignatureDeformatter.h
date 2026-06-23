#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureDeformatter.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D0BDF60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x1D0BDEA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1D0BE010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0BDD80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BDD20)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSASignatureDeformatter_TypeDefinitionIndex = 1060;

	class DSASignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter
	{
	public:
		::System::String* _oid; // 0x10
		::System::Security::Cryptography::DSA* _dsaKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER__CTOR_1_OFFSET))(this, key);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETKEY_OFFSET))(this, key);
		}

		::System::Void SetHashAlgorithm(::System::String* strName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET))(this, strName);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Byte>* rgbHash, ::Il2CppArray<::System::Byte>* rgbSignature)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET))(this, rgbHash, rgbSignature);
		}
	};
}
