#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RIPEMD160.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_F_OFFSET UNITYSDK_OFFSET(0x1DC09440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_G_OFFSET UNITYSDK_OFFSET(0x1DC09450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1DC079A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1DC07B10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_H_OFFSET UNITYSDK_OFFSET(0x1DC09460)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x1DC078A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DC07950)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_I_OFFSET UNITYSDK_OFFSET(0x1DC09470)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_J_OFFSET UNITYSDK_OFFSET(0x1DC09480)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_MDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DC07D30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC07820)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__ENDHASH_OFFSET UNITYSDK_OFFSET(0x1DC07B20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__HASHDATA_OFFSET UNITYSDK_OFFSET(0x1DC079B0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RIPEMD160Managed_TypeDefinitionIndex = 1086;

	class RIPEMD160Managed : public ::System::Security::Cryptography::RIPEMD160
	{
	public:
		::Il2CppArray<::System::Byte>* _buffer; // 0x28
		::Il2CppArray<::System::UInt32>* _blockDWords; // 0x30
		::Il2CppArray<::System::UInt32>* _stateMD160; // 0x38
		::System::Int64 _count; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* rgb, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHCORE_OFFSET))(this, rgb, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHFINAL_OFFSET))(this);
		}

		::System::Void InitializeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_INITIALIZESTATE_OFFSET))(this);
		}

		::System::Void _HashData(::Il2CppArray<::System::Byte>* partIn, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__HASHDATA_OFFSET))(this, partIn, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* _EndHash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__ENDHASH_OFFSET))(this);
		}

		static ::System::Void MDTransform(::System::UInt32* blockDWords, ::System::UInt32* state, ::System::Byte* block)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::UInt32*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_MDTRANSFORM_OFFSET))(blockDWords, state, block);
		}

		static ::System::UInt32 F(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_F_OFFSET))(x, y, z);
		}

		static ::System::UInt32 G(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_G_OFFSET))(x, y, z);
		}

		static ::System::UInt32 H(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_H_OFFSET))(x, y, z);
		}

		static ::System::UInt32 I(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_I_OFFSET))(x, y, z);
		}

		static ::System::UInt32 J(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_J_OFFSET))(x, y, z);
		}
	};
}
