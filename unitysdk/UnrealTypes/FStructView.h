#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class ScriptStruct; }

#define UNREALTYPES_FSTRUCTVIEW_EQUALS_OFFSET UNITYSDK_OFFSET(0x93B200)
#define UNREALTYPES_FSTRUCTVIEW_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x93B100)
#define UNREALTYPES_FSTRUCTVIEW_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNREALTYPES_FSTRUCTVIEW_GET_POINTER_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNREALTYPES_FSTRUCTVIEW_GET_SCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define UNREALTYPES_FSTRUCTVIEW_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AD9C900)
#define UNREALTYPES_FSTRUCTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x93B120)

namespace UnrealTypes
{
	inline static constexpr unsigned int FStructView_TypeDefinitionIndex = 25335;

	struct alignas(8) FStructView
	{
		::System::Void* _structMemory; // 0x10
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> _scriptStruct; // 0x18

		::System::Void _ctor(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>& scriptStruct, ::System::Void* structMemory)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>&, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW__CTOR_OFFSET))(this, scriptStruct, structMemory);
		}

		::System::Void* get_Memory()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW_GET_MEMORY_OFFSET))(this);
		}

		::System::IntPtr get_Pointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW_GET_POINTER_OFFSET))(this);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_ScriptStruct()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW_GET_SCRIPTSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW_GET_ISVALID_OFFSET))(this);
		}

		/*
		static ::UnrealTypes::FStructView op_Implicit(::UnrealTypes::FInstancedStruct& instancedStruct)
		{
			return ((::UnrealTypes::FStructView(*)(::UnrealTypes::FInstancedStruct&))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW_OP_IMPLICIT_OFFSET))(instancedStruct);
		}
		*/

		::System::Boolean Equals(::UnrealTypes::FStructView other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCTVIEW_EQUALS_OFFSET))(this, other);
		}
	};
}
