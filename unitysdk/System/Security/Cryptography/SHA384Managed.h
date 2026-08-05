#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SHA384.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_CH_OFFSET UNITYSDK_OFFSET(0x1E12E690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1E12D150)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1E12D310)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x1E12CFA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E12D100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_MAJ_OFFSET UNITYSDK_OFFSET(0x1E12E710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0x1E12E720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SHA384EXPAND_OFFSET UNITYSDK_OFFSET(0x1E12E490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SHATRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E12D530)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_0_1_OFFSET UNITYSDK_OFFSET(0x1E12E730)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_0_OFFSET UNITYSDK_OFFSET(0x1E12E6A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_1_1_OFFSET UNITYSDK_OFFSET(0x1E12E7A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_1_OFFSET UNITYSDK_OFFSET(0x1E12E620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12E810)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E12A1E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__ENDHASH_OFFSET UNITYSDK_OFFSET(0x1E12D320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__HASHDATA_OFFSET UNITYSDK_OFFSET(0x1E12D160)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA384Managed_TypeDefinitionIndex = 1099;

	class SHA384Managed : public ::System::Security::Cryptography::SHA384
	{
	public:
		static ::Il2CppArray<::System::UInt64>** StaticGet__K()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(SHA384Managed_TypeDefinitionIndex)->GetStaticField(0x13B0);
		}
		::Il2CppArray<::System::Byte>* _buffer; // 0x28
		::Il2CppArray<::System::UInt64>* _stateSHA384; // 0x30
		::Il2CppArray<::System::UInt64>* _W; // 0x38
		::System::UInt64 _count; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* rgb, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_HASHCORE_OFFSET))(this, rgb, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_HASHFINAL_OFFSET))(this);
		}

		::System::Void InitializeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_INITIALIZESTATE_OFFSET))(this);
		}

		::System::Void _HashData(::Il2CppArray<::System::Byte>* partIn, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__HASHDATA_OFFSET))(this, partIn, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* _EndHash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED__ENDHASH_OFFSET))(this);
		}

		static ::System::Void SHATransform(::System::UInt64* expandedBuffer, ::System::UInt64* state, ::System::Byte* block)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::UInt64*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SHATRANSFORM_OFFSET))(expandedBuffer, state, block);
		}

		static ::System::UInt64 RotateRight(::System::UInt64 x, ::System::Int32 n)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_ROTATERIGHT_OFFSET))(x, n);
		}

		static ::System::UInt64 Ch(::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_CH_OFFSET))(x, y, z);
		}

		static ::System::UInt64 Maj(::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_MAJ_OFFSET))(x, y, z);
		}

		static ::System::UInt64 Sigma_0(::System::UInt64 x)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_0_OFFSET))(x);
		}

		static ::System::UInt64 Sigma_1(::System::UInt64 x)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_1_OFFSET))(x);
		}

		static ::System::UInt64 sigma_0_1(::System::UInt64 x)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_0_1_OFFSET))(x);
		}

		static ::System::UInt64 sigma_1_1(::System::UInt64 x)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SIGMA_1_1_OFFSET))(x);
		}

		static ::System::Void SHA384Expand(::System::UInt64* x)
		{
			return ((::System::Void(*)(::System::UInt64*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384MANAGED_SHA384EXPAND_OFFSET))(x);
		}
	};
}
