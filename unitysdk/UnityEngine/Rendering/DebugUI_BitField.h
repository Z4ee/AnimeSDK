#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"

namespace System { class Type; }
namespace System { struct Enum; }
namespace UnityEngine { class GUIContent; }

#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMNAMES_OFFSET UNITYSDK_OFFSET(0x188E0EC0)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x188E1350)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0x188E0EE0)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMNAMES_OFFSET UNITYSDK_OFFSET(0x188E0ED0)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x188E0F00)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0x188E0EF0)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x188E1360)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_BitField_TypeDefinitionIndex = 27824;

	class DebugUI_BitField : public ::UnityEngine::Rendering::DebugUI_Field_1<::System::Enum*>
	{
	public:
		::System::Type* m_EnumType; // 0x50
		::Il2CppArray<::UnityEngine::GUIContent*>* _enumNames_k__BackingField; // 0x58
		::Il2CppArray<::System::Int32>* _enumValues_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::GUIContent*>* get_enumNames()
		{
			return ((::Il2CppArray<::UnityEngine::GUIContent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMNAMES_OFFSET))(this);
		}

		::System::Void set_enumNames(::Il2CppArray<::UnityEngine::GUIContent*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GUIContent*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMNAMES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_enumValues()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMVALUES_OFFSET))(this);
		}

		::System::Void set_enumValues(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMVALUES_OFFSET))(this, value);
		}

		::System::Void set_enumType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMTYPE_OFFSET))(this, value);
		}

		::System::Type* get_enumType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMTYPE_OFFSET))(this);
		}
	};
}
