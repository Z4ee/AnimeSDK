#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCKUNALIGNED_OFFSET UNITYSDK_OFFSET(0x1FC6FF20)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1FC6FF10)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_OFFSET UNITYSDK_OFFSET(0x1FC6FF00)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_1_OFFSET UNITYSDK_OFFSET(0x1FC6FF60)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_OFFSET UNITYSDK_OFFSET(0x1FC6FF50)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1FC6FF40)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCK_OFFSET UNITYSDK_OFFSET(0x1FC6FF30)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int Unsafe_TypeDefinitionIndex = 6539;

	class Unsafe : public ::System::Object
	{
	public:
		static ::System::Void CopyBlock(::System::Void* destination, ::System::Void* source, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_OFFSET))(destination, source, byteCount);
		}

		static ::System::Void CopyBlock_1(::System::Byte& destination, ::System::Byte& source, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_1_OFFSET))(destination, source, byteCount);
		}

		static ::System::Void CopyBlockUnaligned(::System::Void* destination, ::System::Void* source, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCKUNALIGNED_OFFSET))(destination, source, byteCount);
		}

		static ::System::Void InitBlock(::System::Void* startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCK_OFFSET))(startAddress, value, byteCount);
		}

		static ::System::Void InitBlock_1(::System::Byte& startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCK_1_OFFSET))(startAddress, value, byteCount);
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
