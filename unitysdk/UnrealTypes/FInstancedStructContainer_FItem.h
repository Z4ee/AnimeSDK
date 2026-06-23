#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class ScriptStruct; }

#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_FITEM_GET_ENDOFFSET_OFFSET UNITYSDK_OFFSET(0x9DD610)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_FITEM_GET_MINALIGNMENT_OFFSET UNITYSDK_OFFSET(0x9DD500)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_FITEM_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x9DD3E0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_FITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)

namespace UnrealTypes
{
	inline static constexpr unsigned int FInstancedStructContainer_FItem_TypeDefinitionIndex = 27792;

	struct alignas(4) FInstancedStructContainer_FItem
	{
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> ScriptStruct; // 0x10
		::System::Int32 Offset; // 0x14

		::System::Void _ctor(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> scriptStruct, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_FITEM__CTOR_OFFSET))(this, scriptStruct, offset);
		}

		::System::Int32 get_StructureSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_FITEM_GET_STRUCTURESIZE_OFFSET))(this);
		}

		::System::Int32 get_MinAlignment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_FITEM_GET_MINALIGNMENT_OFFSET))(this);
		}

		::System::Int32 get_EndOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_FITEM_GET_ENDOFFSET_OFFSET))(this);
		}
	};
}
