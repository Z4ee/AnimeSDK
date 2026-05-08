#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/SymmetricTransform.h"

namespace System::Security::Cryptography { class DESTransform; }
namespace System::Security::Cryptography { class TripleDES; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x1AC9D2B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_GETSTRONGKEY_OFFSET UNITYSDK_OFFSET(0x1AC9D210)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC9CEA0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TripleDESTransform_TypeDefinitionIndex = 1124;

	class TripleDESTransform : public ::Mono::Security::Cryptography::SymmetricTransform
	{
	public:
		::System::Security::Cryptography::DESTransform* E3; // 0x50
		::System::Security::Cryptography::DESTransform* D2; // 0x58
		::System::Security::Cryptography::DESTransform* D1; // 0x60
		::System::Security::Cryptography::DESTransform* D3; // 0x68
		::System::Security::Cryptography::DESTransform* E2; // 0x70
		::System::Security::Cryptography::DESTransform* E1; // 0x78

		::System::Void _ctor(::System::Security::Cryptography::TripleDES* algo, ::System::Boolean encryption, ::Il2CppArray<::System::Byte>* key, ::Il2CppArray<::System::Byte>* iv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::TripleDES*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM__CTOR_OFFSET))(this, algo, encryption, key, iv);
		}

		::System::Void ECB(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_ECB_OFFSET))(this, input, output);
		}

		static ::Il2CppArray<::System::Byte>* GetStrongKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_GETSTRONGKEY_OFFSET))();
		}
	};
}
