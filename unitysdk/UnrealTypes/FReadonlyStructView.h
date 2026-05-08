#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class ScriptStruct; }

#define UNREALTYPES_FREADONLYSTRUCTVIEW_EQUALS_OFFSET UNITYSDK_OFFSET(0x93B130)
#define UNREALTYPES_FREADONLYSTRUCTVIEW_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x93B100)
#define UNREALTYPES_FREADONLYSTRUCTVIEW_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNREALTYPES_FREADONLYSTRUCTVIEW_GET_POINTER_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNREALTYPES_FREADONLYSTRUCTVIEW_GET_SCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define UNREALTYPES_FREADONLYSTRUCTVIEW_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1AD9C8C0)
#define UNREALTYPES_FREADONLYSTRUCTVIEW_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1ADA1040)
#define UNREALTYPES_FREADONLYSTRUCTVIEW_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AD9EDD0)
#define UNREALTYPES_FREADONLYSTRUCTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x93B120)

namespace UnrealTypes
{
	inline static constexpr unsigned int FReadOnlyStructView_TypeDefinitionIndex = 25336;

	struct alignas(8) FReadOnlyStructView
	{
		::System::Void* _structMemory; // 0x10
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> _scriptStruct; // 0x18

		::System::Void _ctor(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>& scriptStruct, ::System::Void* structMemory)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>&, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW__CTOR_OFFSET))(this, scriptStruct, structMemory);
		}

		::System::Void* get_Memory()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_GET_MEMORY_OFFSET))(this);
		}

		::System::IntPtr get_Pointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_GET_POINTER_OFFSET))(this);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_ScriptStruct()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_GET_SCRIPTSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_GET_ISVALID_OFFSET))(this);
		}

		/*
		static ::UnrealTypes::FReadOnlyStructView op_Implicit(::UnrealTypes::FStructView& structView)
		{
			return ((::UnrealTypes::FReadOnlyStructView(*)(::UnrealTypes::FStructView&))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_OP_IMPLICIT_OFFSET))(structView);
		}
		*/

		/*
		static ::UnrealTypes::FReadOnlyStructView op_Implicit_1(::UnrealTypes::FInstancedStruct& instancedStruct)
		{
			return ((::UnrealTypes::FReadOnlyStructView(*)(::UnrealTypes::FInstancedStruct&))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_OP_IMPLICIT_1_OFFSET))(instancedStruct);
		}
		*/

		::System::Boolean Equals(::UnrealTypes::FReadOnlyStructView other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Inequality(::UnrealTypes::FReadOnlyStructView& lhs, ::UnrealTypes::FReadOnlyStructView& rhs)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FReadOnlyStructView&, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + UNREALTYPES_FREADONLYSTRUCTVIEW_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}
	};
}
