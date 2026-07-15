#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/SymmetricTransform.h"

namespace System::Security::Cryptography { class RC2; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x1836A420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1836BF50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x18369AE0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RC2Transform_TypeDefinitionIndex = 1071;

	class RC2Transform : public ::Mono::Security::Cryptography::SymmetricTransform
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_pitable()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(RC2Transform_TypeDefinitionIndex)->GetStaticField(0x1B550);
		}
		::Il2CppArray<::System::UInt16>* K; // 0x50
		::System::Int32 j; // 0x58
		::System::UInt16 R2; // 0x5C
		::System::UInt16 R3; // 0x5E
		::System::UInt16 R1; // 0x60
		::System::UInt16 R0; // 0x62

		::System::Void _ctor(::System::Security::Cryptography::RC2* a1, ::System::Boolean a2, ::Il2CppArray<::System::Byte>* a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RC2*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM__CCTOR_OFFSET))();
		}

		::System::Void ECB(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM_ECB_OFFSET))(this, a1, a2);
		}
	};
}
