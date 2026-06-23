#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GUIContent; }

#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4AAC80)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AACC0)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C__SET_ENUMTYPE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1B4AACD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_BitField___c_TypeDefinitionIndex = 18290;

	class DebugUI_BitField___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::UnityEngine::GUIContent*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::GUIContent*>**)Il2CppClass::FromTypeDefinitionIndex(DebugUI_BitField___c_TypeDefinitionIndex)->GetStaticField(0x7B20);
		}
		static ::UnityEngine::Rendering::DebugUI_BitField___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::DebugUI_BitField___c**)Il2CppClass::FromTypeDefinitionIndex(DebugUI_BitField___c_TypeDefinitionIndex)->GetStaticField(0x7B28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::GUIContent* _set_enumType_b__10_0(::System::String* x)
		{
			return ((::UnityEngine::GUIContent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C__SET_ENUMTYPE_B__10_0_OFFSET))(this, x);
		}
	};
}
