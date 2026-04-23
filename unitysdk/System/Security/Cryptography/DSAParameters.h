#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSAParameters_TypeDefinitionIndex = 1012;

	struct alignas(8) DSAParameters
	{
		::Il2CppArray<::System::Byte>* P; // 0x10
		::Il2CppArray<::System::Byte>* Q; // 0x18
		::Il2CppArray<::System::Byte>* G; // 0x20
		::Il2CppArray<::System::Byte>* Y; // 0x28
		::Il2CppArray<::System::Byte>* J; // 0x30
		::Il2CppArray<::System::Byte>* X; // 0x38
		::Il2CppArray<::System::Byte>* Seed; // 0x40
		::System::Int32 Counter; // 0x48
	};
}
