#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_ADDLENGTH_OFFSET UNITYSDK_OFFSET(0x1D819C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_FILLBUFF_OFFSET UNITYSDK_OFFSET(0x1D819A30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1D817660)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1D8188E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALISEBUFF_OFFSET UNITYSDK_OFFSET(0x1D818E70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D8175B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x1D817750)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1D818C90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D817540)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA1Internal_TypeDefinitionIndex = 1121;

	class SHA1Internal : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _ProcessingBuffer; // 0x10
		::Il2CppArray<::System::UInt32>* buff; // 0x18
		::Il2CppArray<::System::UInt32>* _H; // 0x20
		::System::Int32 _ProcessingBufferCount; // 0x28
		::System::UInt64 count; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL__CTOR_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* rgb, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHCORE_OFFSET))(this, rgb, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHFINAL_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALIZE_OFFSET))(this);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::UInt32 inputOffset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSBLOCK_OFFSET))(this, inputBuffer, inputOffset);
		}

		static ::System::Void InitialiseBuff(::Il2CppArray<::System::UInt32>* buff, ::Il2CppArray<::System::Byte>* input, ::System::UInt32 inputOffset)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALISEBUFF_OFFSET))(buff, input, inputOffset);
		}

		static ::System::Void FillBuff(::Il2CppArray<::System::UInt32>* buff)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_FILLBUFF_OFFSET))(buff);
		}

		::System::Void ProcessFinalBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSFINALBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::System::Void AddLength(::System::UInt64 length, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_ADDLENGTH_OFFSET))(this, length, buffer, position);
		}
	};
}
