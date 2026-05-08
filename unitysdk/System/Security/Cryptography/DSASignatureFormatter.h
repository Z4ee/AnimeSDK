#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureFormatter.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x19606DC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x19606D10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x19606C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19606B30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19606AD0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSASignatureFormatter_TypeDefinitionIndex = 1062;

	class DSASignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter
	{
	public:
		::System::String* _oid; // 0x10
		::System::Security::Cryptography::DSA* _dsaKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER__CTOR_1_OFFSET))(this, key);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_SETKEY_OFFSET))(this, key);
		}

		::System::Void SetHashAlgorithm(::System::String* strName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_SETHASHALGORITHM_OFFSET))(this, strName);
		}

		::Il2CppArray<::System::Byte>* CreateSignature(::Il2CppArray<::System::Byte>* rgbHash)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_CREATESIGNATURE_OFFSET))(this, rgbHash);
		}
	};
}
