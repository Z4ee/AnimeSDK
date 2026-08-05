#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureFormatter.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x1CE8FC90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x1CE8FBE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x1CE8FB20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE8FA00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8F9A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSASignatureFormatter_TypeDefinitionIndex = 1061;

	class DSASignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter
	{
	public:
		::System::Security::Cryptography::DSA* _dsaKey; // 0x10
		::System::String* _oid; // 0x18

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
