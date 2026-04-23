#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_OFFSET UNITYSDK_OFFSET(0x19F8EA60)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_1_OFFSET UNITYSDK_OFFSET(0x19F8EA80)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_OFFSET UNITYSDK_OFFSET(0x19F8EA70)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int Unsafe_TypeDefinitionIndex = 4889;

	class Unsafe : public ::System::Object
	{
	public:
		static ::System::Void CopyBlock(::System::Byte& destination, ::System::Byte& source, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_OFFSET))(destination, source, byteCount);
		}

		static ::System::Void InitBlockUnaligned(::System::Void* startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_OFFSET))(startAddress, value, byteCount);
		}

		static ::System::Void InitBlockUnaligned_1(::System::Byte& startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_1_OFFSET))(startAddress, value, byteCount);
		}
	};
}
