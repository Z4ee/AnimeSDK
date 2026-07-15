#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAParameters_TypeDefinitionIndex = 1041;

	struct alignas(8) RSAParameters
	{
		::Il2CppArray<::System::Byte>* Exponent; // 0x10
		::Il2CppArray<::System::Byte>* Modulus; // 0x18
		::Il2CppArray<::System::Byte>* P; // 0x20
		::Il2CppArray<::System::Byte>* Q; // 0x28
		::Il2CppArray<::System::Byte>* DP; // 0x30
		::Il2CppArray<::System::Byte>* DQ; // 0x38
		::Il2CppArray<::System::Byte>* InverseQ; // 0x40
		::Il2CppArray<::System::Byte>* D; // 0x48
	};
}
