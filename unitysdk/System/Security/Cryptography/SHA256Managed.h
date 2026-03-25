#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SHA256.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_CH_OFFSET UNITYSDK_OFFSET(0x161DE8A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x161DD3D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x161DD580)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x161DD280)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x161DD380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_MAJ_OFFSET UNITYSDK_OFFSET(0x161DE920)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0x161DE930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHA256EXPAND_OFFSET UNITYSDK_OFFSET(0x161DE6C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHATRANSFORM_OFFSET UNITYSDK_OFFSET(0x161DD770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_1_OFFSET UNITYSDK_OFFSET(0x161DE8B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_OFFSET UNITYSDK_OFFSET(0x161DE940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_1_OFFSET UNITYSDK_OFFSET(0x161DE830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_OFFSET UNITYSDK_OFFSET(0x161DE9B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__CCTOR_OFFSET UNITYSDK_OFFSET(0x161DEA20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x161DD200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__ENDHASH_OFFSET UNITYSDK_OFFSET(0x161DD590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__HASHDATA_OFFSET UNITYSDK_OFFSET(0x161DD3E0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA256Managed_TypeDefinitionIndex = 1048;

	class SHA256Managed : public ::System::Security::Cryptography::SHA256
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__K()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SHA256Managed_TypeDefinitionIndex)->GetStaticField(0x57B0);
		}
		::Il2CppArray<::System::UInt32>* _W; // 0x28
		::Il2CppArray<::System::UInt32>* _stateSHA256; // 0x30
		::Il2CppArray<::System::Byte>* _buffer; // 0x38
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

		::System::Void HashCore(::Il2CppArray<::System::Byte>* rgb, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHCORE_OFFSET))(this, rgb, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_HASHFINAL_OFFSET))(this);
		}

		::System::Void InitializeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_INITIALIZESTATE_OFFSET))(this);
		}

		::System::Void _HashData(::Il2CppArray<::System::Byte>* partIn, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__HASHDATA_OFFSET))(this, partIn, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* _EndHash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED__ENDHASH_OFFSET))(this);
		}

		static ::System::Void SHATransform(::System::UInt32* expandedBuffer, ::System::UInt32* state, ::System::Byte* block)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::UInt32*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHATRANSFORM_OFFSET))(expandedBuffer, state, block);
		}

		static ::System::UInt32 RotateRight(::System::UInt32 x, ::System::Int32 n)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_ROTATERIGHT_OFFSET))(x, n);
		}

		static ::System::UInt32 Ch(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_CH_OFFSET))(x, y, z);
		}

		static ::System::UInt32 Maj(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_MAJ_OFFSET))(x, y, z);
		}

		static ::System::UInt32 sigma_0(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_OFFSET))(x);
		}

		static ::System::UInt32 sigma_1(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_OFFSET))(x);
		}

		static ::System::UInt32 Sigma_0_1(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_0_1_OFFSET))(x);
		}

		static ::System::UInt32 Sigma_1_1(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SIGMA_1_1_OFFSET))(x);
		}

		static ::System::Void SHA256Expand(::System::UInt32* x)
		{
			return ((::System::Void(*)(::System::UInt32*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_SHA256EXPAND_OFFSET))(x);
		}
	};
}
