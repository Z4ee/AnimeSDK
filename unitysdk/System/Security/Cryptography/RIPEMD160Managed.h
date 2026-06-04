#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RIPEMD160.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_F_OFFSET UNITYSDK_OFFSET(0x187F71E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_G_OFFSET UNITYSDK_OFFSET(0x187F71F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x187F5A10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x187F5B80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_H_OFFSET UNITYSDK_OFFSET(0x187F7200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_INITIALIZESTATE_OFFSET UNITYSDK_OFFSET(0x187F5900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x187F5970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_I_OFFSET UNITYSDK_OFFSET(0x187F7210)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_J_OFFSET UNITYSDK_OFFSET(0x187F7220)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_MDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x187F5CE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x187E6CF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__ENDHASH_OFFSET UNITYSDK_OFFSET(0x187F5B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__HASHDATA_OFFSET UNITYSDK_OFFSET(0x187F5A20)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RIPEMD160Managed_TypeDefinitionIndex = 1038;

	class RIPEMD160Managed : public ::System::Security::Cryptography::RIPEMD160
	{
	public:
		::Il2CppArray<::System::UInt32>* _blockDWords; // 0x28
		::Il2CppArray<::System::Byte>* _buffer; // 0x30
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

		::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHCORE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_HASHFINAL_OFFSET))(this);
		}

		::System::Void InitializeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_INITIALIZESTATE_OFFSET))(this);
		}

		::System::Void _HashData(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__HASHDATA_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* _EndHash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED__ENDHASH_OFFSET))(this);
		}

		static ::System::Void MDTransform(::System::UInt32* a1, ::System::UInt32* a2, ::System::Byte* a3)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::UInt32*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_MDTRANSFORM_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 F(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_F_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 G(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_G_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 H(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_H_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 I(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_I_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 J(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160MANAGED_J_OFFSET))(a1, a2, a3);
		}
	};
}
