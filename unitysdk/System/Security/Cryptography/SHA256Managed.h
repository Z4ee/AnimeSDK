#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SHA256.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_CH_OFFSET UNITYSDK_OFFSET(0x166C57C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x166C43F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x166C45A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x166C4310)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x166C43A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_MAJ_OFFSET UNITYSDK_OFFSET(0x166C5840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0x166C5850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHA256EXPAND_OFFSET UNITYSDK_OFFSET(0x166C55E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHATRANSFORM_OFFSET UNITYSDK_OFFSET(0x166C4700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_1_OFFSET UNITYSDK_OFFSET(0x166C57D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_OFFSET UNITYSDK_OFFSET(0x166C5860)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_1_OFFSET UNITYSDK_OFFSET(0x166C5750)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_OFFSET UNITYSDK_OFFSET(0x166C58D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__CCTOR_OFFSET UNITYSDK_OFFSET(0x166C5940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x166C4290)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__ENDHASH_OFFSET UNITYSDK_OFFSET(0x166C45B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__HASHDATA_OFFSET UNITYSDK_OFFSET(0x166C4400)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA256Managed_TypeDefinitionIndex = 1058;

	class SHA256Managed : public ::System::Security::Cryptography::SHA256
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__K()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SHA256Managed_TypeDefinitionIndex)->GetStaticField(0xF7D0);
		}
		::Il2CppArray<::System::Byte>* _buffer; // 0x28
		::Il2CppArray<::System::UInt32>* _W; // 0x30
		::Il2CppArray<::System::UInt32>* _stateSHA256; // 0x38
		::System::Int64 _count; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHCORE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHFINAL_OFFSET))(this);
		}

		::System::Void InitializeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_INITIALIZESTATE_OFFSET))(this);
		}

		::System::Void _HashData(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__HASHDATA_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* _EndHash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__ENDHASH_OFFSET))(this);
		}

		static ::System::Void SHATransform(::System::UInt32* a1, ::System::UInt32* a2, ::System::Byte* a3)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::UInt32*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHATRANSFORM_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 RotateRight(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_ROTATERIGHT_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Ch(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_CH_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 Maj(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_MAJ_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 sigma_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_OFFSET))(a1);
		}

		static ::System::UInt32 sigma_1(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_OFFSET))(a1);
		}

		static ::System::UInt32 Sigma_0_1(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_1_OFFSET))(a1);
		}

		static ::System::UInt32 Sigma_1_1(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_1_OFFSET))(a1);
		}

		static ::System::Void SHA256Expand(::System::UInt32* a1)
		{
			return ((::System::Void(*)(::System::UInt32*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHA256EXPAND_OFFSET))(a1);
		}
	};
}
