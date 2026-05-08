#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GUIContent; }

#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x191F5090)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x191F50D0)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__INITQUICKSEPARATORS_B__17_0_OFFSET UNITYSDK_OFFSET(0x191F5130)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__SET_AUTOENUM_B__16_0_OFFSET UNITYSDK_OFFSET(0x191F50E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_EnumField___c_TypeDefinitionIndex = 9557;

	class DebugUI_EnumField___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::DebugUI_EnumField___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::DebugUI_EnumField___c**)Il2CppClass::FromTypeDefinitionIndex(DebugUI_EnumField___c_TypeDefinitionIndex)->GetStaticField(0x8A70);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::GUIContent*>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::GUIContent*>**)Il2CppClass::FromTypeDefinitionIndex(DebugUI_EnumField___c_TypeDefinitionIndex)->GetStaticField(0x8A78);
		}
		static ::System::Func_2<::UnityEngine::GUIContent*, ::System::String*>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::UnityEngine::GUIContent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DebugUI_EnumField___c_TypeDefinitionIndex)->GetStaticField(0x8A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::GUIContent* _set_autoEnum_b__16_0(::System::String* x)
		{
			return ((::UnityEngine::GUIContent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__SET_AUTOENUM_B__16_0_OFFSET))(this, x);
		}

		::System::String* _InitQuickSeparators_b__17_0(::UnityEngine::GUIContent* x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__INITQUICKSEPARATORS_B__17_0_OFFSET))(this, x);
		}
	};
}
