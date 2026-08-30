#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_OFFSET UNITYSDK_OFFSET(0x1E7B82F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_1_OFFSET UNITYSDK_OFFSET(0x1E7B8310)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_OFFSET UNITYSDK_OFFSET(0x1E7B8300)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int Unsafe_TypeDefinitionIndex = 3868;

	class Unsafe : public ::System::Object
	{
	public:
		static ::System::Void CopyBlock(::System::Byte& a1, ::System::Byte& a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void InitBlockUnaligned(::System::Void* a1, ::System::Byte a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void InitBlockUnaligned_1(::System::Byte& a1, ::System::Byte a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_1_OFFSET))(a1, a2, a3);
		}
	};
}
