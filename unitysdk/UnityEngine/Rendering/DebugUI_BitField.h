#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"

namespace System { class Type; }
namespace System { struct Enum; }
namespace UnityEngine { class GUIContent; }

#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMNAMES_OFFSET UNITYSDK_OFFSET(0x1CD17D90)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1CD18210)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0x1CD17DB0)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMNAMES_OFFSET UNITYSDK_OFFSET(0x1CD17DA0)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1CD17DD0)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0x1CD17DC0)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD18220)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_BitField_TypeDefinitionIndex = 34868;

	class DebugUI_BitField : public ::UnityEngine::Rendering::DebugUI_Field_1<::System::Enum*>
	{
	public:
		::Il2CppArray<::UnityEngine::GUIContent*>* _enumNames_k__BackingField; // 0x50
		::System::Type* m_EnumType; // 0x58
		::Il2CppArray<::System::Int32>* _enumValues_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::GUIContent*>* get_enumNames()
		{
			return ((::Il2CppArray<::UnityEngine::GUIContent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMNAMES_OFFSET))(this);
		}

		::System::Void set_enumNames(::Il2CppArray<::UnityEngine::GUIContent*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GUIContent*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMNAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_enumValues()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMVALUES_OFFSET))(this);
		}

		::System::Void set_enumValues(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMVALUES_OFFSET))(this, a1);
		}

		::System::Void set_enumType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMTYPE_OFFSET))(this, a1);
		}

		::System::Type* get_enumType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMTYPE_OFFSET))(this);
		}
	};
}
