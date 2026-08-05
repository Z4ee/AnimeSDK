#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/UnmanagedMemoryStream.h"

namespace System::Reflection { class Module; }

#define SYSTEM_REFLECTION_ASSEMBLY_UNMANAGEDMEMORYSTREAMFORMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DF38560)
#define SYSTEM_REFLECTION_ASSEMBLY_UNMANAGEDMEMORYSTREAMFORMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF384D0)

namespace System::Reflection
{
	inline static constexpr unsigned int Assembly_UnmanagedMemoryStreamForModule_TypeDefinitionIndex = 568;

	class Assembly_UnmanagedMemoryStreamForModule : public ::System::IO::UnmanagedMemoryStream
	{
	public:
		::System::Reflection::Module* module; // 0x68

		::System::Void _ctor(::System::Byte* pointer, ::System::Int64 length, ::System::Reflection::Module* module)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int64, ::System::Reflection::Module*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_UNMANAGEDMEMORYSTREAMFORMODULE__CTOR_OFFSET))(this, pointer, length, module);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_UNMANAGEDMEMORYSTREAMFORMODULE_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
