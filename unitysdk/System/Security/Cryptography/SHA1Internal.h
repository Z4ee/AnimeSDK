#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_ADDLENGTH_OFFSET UNITYSDK_OFFSET(0x166C2EB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_FILLBUFF_OFFSET UNITYSDK_OFFSET(0x166C2D20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHCORE_OFFSET UNITYSDK_OFFSET(0x166C10B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x166C11C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALISEBUFF_OFFSET UNITYSDK_OFFSET(0x166C2690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x166C1540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x166C15B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x166C24F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x166C0FD0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA1Internal_TypeDefinitionIndex = 1082;

	class SHA1Internal : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _ProcessingBuffer; // 0x10
		::Il2CppArray<::System::UInt32>* buff; // 0x18
		::Il2CppArray<::System::UInt32>* _H; // 0x20
		::System::UInt64 count; // 0x28
		::System::Int32 _ProcessingBufferCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL__CTOR_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHCORE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHFINAL_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALIZE_OFFSET))(this);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Byte>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSBLOCK_OFFSET))(this, a1, a2);
		}

		static ::System::Void InitialiseBuff(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALISEBUFF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FillBuff(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_FILLBUFF_OFFSET))(a1);
		}

		::System::Void ProcessFinalBlock(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSFINALBLOCK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddLength(::System::UInt64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_ADDLENGTH_OFFSET))(this, a1, a2, a3);
		}
	};
}
