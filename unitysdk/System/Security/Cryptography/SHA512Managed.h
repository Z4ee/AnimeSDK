#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SHA512.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_CH_OFFSET UNITYSDK_OFFSET(0x185C7F70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x185C6A80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x185C6C40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x185C6960)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x185C6A30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_MAJ_OFFSET UNITYSDK_OFFSET(0x185C7FF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0x185C8000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SHA512EXPAND_OFFSET UNITYSDK_OFFSET(0x185C7D80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SHATRANSFORM_OFFSET UNITYSDK_OFFSET(0x185C6DA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SIGMA_0_1_OFFSET UNITYSDK_OFFSET(0x185C8010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SIGMA_0_OFFSET UNITYSDK_OFFSET(0x185C7F80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SIGMA_1_1_OFFSET UNITYSDK_OFFSET(0x185C8080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SIGMA_1_OFFSET UNITYSDK_OFFSET(0x185C7F00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED__CCTOR_OFFSET UNITYSDK_OFFSET(0x185C80F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x185C68E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED__ENDHASH_OFFSET UNITYSDK_OFFSET(0x185C6C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED__HASHDATA_OFFSET UNITYSDK_OFFSET(0x185C6A90)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA512Managed_TypeDefinitionIndex = 1053;

	class SHA512Managed : public ::System::Security::Cryptography::SHA512
	{
	public:
		static ::Il2CppArray<::System::UInt64>** StaticGet__K()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(SHA512Managed_TypeDefinitionIndex)->GetStaticField(0xFB20);
		}
		::Il2CppArray<::System::Byte>* _buffer; // 0x28
		::Il2CppArray<::System::UInt64>* _stateSHA512; // 0x30
		::Il2CppArray<::System::UInt64>* _W; // 0x38
		::System::UInt64 _count; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED__CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_HASHCORE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_HASHFINAL_OFFSET))(this);
		}

		::System::Void InitializeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_INITIALIZESTATE_OFFSET))(this);
		}

		::System::Void _HashData(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED__HASHDATA_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* _EndHash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED__ENDHASH_OFFSET))(this);
		}

		static ::System::Void SHATransform(::System::UInt64* a1, ::System::UInt64* a2, ::System::Byte* a3)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::UInt64*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SHATRANSFORM_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt64 RotateRight(::System::UInt64 a1, ::System::Int32 a2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_ROTATERIGHT_OFFSET))(a1, a2);
		}

		static ::System::UInt64 Ch(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_CH_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt64 Maj(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_MAJ_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt64 Sigma_0(::System::UInt64 a1)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SIGMA_0_OFFSET))(a1);
		}

		static ::System::UInt64 Sigma_1(::System::UInt64 a1)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SIGMA_1_OFFSET))(a1);
		}

		static ::System::UInt64 sigma_0_1(::System::UInt64 a1)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SIGMA_0_1_OFFSET))(a1);
		}

		static ::System::UInt64 sigma_1_1(::System::UInt64 a1)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SIGMA_1_1_OFFSET))(a1);
		}

		static ::System::Void SHA512Expand(::System::UInt64* a1)
		{
			return ((::System::Void(*)(::System::UInt64*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512MANAGED_SHA512EXPAND_OFFSET))(a1);
		}
	};
}
