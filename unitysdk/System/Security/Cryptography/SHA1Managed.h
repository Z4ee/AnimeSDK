#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SHA1.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1C6E71B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1C6E7320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x1C6E70B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6E7160)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_SHAEXPAND_OFFSET UNITYSDK_OFFSET(0x1C6E81D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_SHATRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C6E7540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E7030)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED__ENDHASH_OFFSET UNITYSDK_OFFSET(0x1C6E7330)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED__HASHDATA_OFFSET UNITYSDK_OFFSET(0x1C6E71C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA1Managed_TypeDefinitionIndex = 1095;

	class SHA1Managed : public ::System::Security::Cryptography::SHA1
	{
	public:
		::Il2CppArray<::System::Byte>* _buffer; // 0x28
		::Il2CppArray<::System::UInt32>* _stateSHA1; // 0x30
		::Il2CppArray<::System::UInt32>* _expandedBuffer; // 0x38
		::System::Int64 _count; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* rgb, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_HASHCORE_OFFSET))(this, rgb, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_HASHFINAL_OFFSET))(this);
		}

		::System::Void InitializeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_INITIALIZESTATE_OFFSET))(this);
		}

		::System::Void _HashData(::Il2CppArray<::System::Byte>* partIn, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED__HASHDATA_OFFSET))(this, partIn, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* _EndHash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED__ENDHASH_OFFSET))(this);
		}

		static ::System::Void SHATransform(::System::UInt32* expandedBuffer, ::System::UInt32* state, ::System::Byte* block)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::UInt32*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_SHATRANSFORM_OFFSET))(expandedBuffer, state, block);
		}

		static ::System::Void SHAExpand(::System::UInt32* x)
		{
			return ((::System::Void(*)(::System::UInt32*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1MANAGED_SHAEXPAND_OFFSET))(x);
		}
	};
}
