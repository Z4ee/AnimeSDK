#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/SymmetricTransform.h"

namespace System::Security::Cryptography { class DESTransform; }
namespace System::Security::Cryptography { class TripleDES; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x166CB610)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_GETSTRONGKEY_OFFSET UNITYSDK_OFFSET(0x166CB500)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x166CADE0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TripleDESTransform_TypeDefinitionIndex = 1084;

	class TripleDESTransform : public ::Mono::Security::Cryptography::SymmetricTransform
	{
	public:
		::System::Security::Cryptography::DESTransform* D3; // 0x50
		::System::Security::Cryptography::DESTransform* E1; // 0x58
		::System::Security::Cryptography::DESTransform* E3; // 0x60
		::System::Security::Cryptography::DESTransform* E2; // 0x68
		::System::Security::Cryptography::DESTransform* D1; // 0x70
		::System::Security::Cryptography::DESTransform* D2; // 0x78

		::System::Void _ctor(::System::Security::Cryptography::TripleDES* a1, ::System::Boolean a2, ::Il2CppArray<::System::Byte>* a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::TripleDES*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ECB(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_ECB_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* GetStrongKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_GETSTRONGKEY_OFFSET))();
		}
	};
}
