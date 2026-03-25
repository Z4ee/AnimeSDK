#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Field_1.h"

namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GUIContent; }

#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_CURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x188E2790)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_GETINDEX_OFFSET UNITYSDK_OFFSET(0x188E2750)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_SETINDEX_OFFSET UNITYSDK_OFFSET(0x188E2770)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_INITINDEXES_OFFSET UNITYSDK_OFFSET(0x188E2C20)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_INITQUICKSEPARATORS_OFFSET UNITYSDK_OFFSET(0x188E2D30)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_AUTOENUM_OFFSET UNITYSDK_OFFSET(0x188E27D0)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_CURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x188E27B0)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_GETINDEX_OFFSET UNITYSDK_OFFSET(0x188E2760)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_SETINDEX_OFFSET UNITYSDK_OFFSET(0x188E2780)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x188CA070)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_EnumField_TypeDefinitionIndex = 27821;

	class DebugUI_EnumField : public ::UnityEngine::Rendering::DebugUI_Field_1<::System::Int32>
	{
	public:
		::Il2CppArray<::System::Int32>* indexes; // 0x50
		::Il2CppArray<::System::Int32>* enumValues; // 0x58
		::System::Action_1<::System::Int32>* _setIndex_k__BackingField; // 0x60
		::Il2CppArray<::System::Int32>* quickSeparators; // 0x68
		::Il2CppArray<::UnityEngine::GUIContent*>* enumNames; // 0x70
		::System::Func_1<::System::Int32>* _getIndex_k__BackingField; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD__CTOR_OFFSET))(this);
		}

		::System::Func_1<::System::Int32>* get_getIndex()
		{
			return ((::System::Func_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_GETINDEX_OFFSET))(this);
		}

		::System::Void set_getIndex(::System::Func_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_GETINDEX_OFFSET))(this, value);
		}

		::System::Action_1<::System::Int32>* get_setIndex()
		{
			return ((::System::Action_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_SETINDEX_OFFSET))(this);
		}

		::System::Void set_setIndex(::System::Action_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_SETINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_currentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_CURRENTINDEX_OFFSET))(this);
		}

		::System::Void set_currentIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_CURRENTINDEX_OFFSET))(this, value);
		}

		::System::Void set_autoEnum(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_AUTOENUM_OFFSET))(this, value);
		}

		::System::Void InitQuickSeparators()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_INITQUICKSEPARATORS_OFFSET))(this);
		}

		::System::Void InitIndexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_INITINDEXES_OFFSET))(this);
		}
	};
}
