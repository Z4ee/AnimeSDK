#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/CompilerServices/CompilationRelaxations.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE_GET_COMPILATIONRELAXATIONS_OFFSET UNITYSDK_OFFSET(0x179BEBA0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179BEB90)
#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x179BEB80)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CompilationRelaxationsAttribute_TypeDefinitionIndex = 1370;

	class CompilationRelaxationsAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 m_relaxations; // 0x10

		::System::Void _ctor(::System::Int32 relaxations)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE__CTOR_OFFSET))(this, relaxations);
		}

		::System::Void _ctor_1(::System::Runtime::CompilerServices::CompilationRelaxations relaxations)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::CompilationRelaxations))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE__CTOR_1_OFFSET))(this, relaxations);
		}

		::System::Int32 get_CompilationRelaxations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE_GET_COMPILATIONRELAXATIONS_OFFSET))(this);
		}
	};
}
