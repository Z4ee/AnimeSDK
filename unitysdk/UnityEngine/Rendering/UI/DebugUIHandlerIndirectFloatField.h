#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1A330870)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_INIT_OFFSET UNITYSDK_OFFSET(0x1A32D230)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x1A330930)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x1A330770)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x1A330860)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x1A330690)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x1A3305B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A330940)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerIndirectFloatField_TypeDefinitionIndex = 33599;

	class DebugUIHandlerIndirectFloatField : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Text* valueLabel; // 0x60
		::System::Func_1<::System::Single>* getter; // 0x68
		::System::Action_1<::System::Single>* setter; // 0x70
		::System::Func_1<::System::Single>* incStepGetter; // 0x78
		::System::Func_1<::System::Single>* incStepMultGetter; // 0x80
		::System::Func_1<::System::Single>* decimalsGetter; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_INIT_OFFSET))(this);
		}

		::System::Boolean OnSelection(::System::Boolean fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONSELECTION_OFFSET))(this, fromNext, previous);
		}

		::System::Void OnDeselection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONDESELECTION_OFFSET))(this);
		}

		::System::Void OnIncrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONINCREMENT_OFFSET))(this, fast);
		}

		::System::Void OnDecrement(::System::Boolean fast)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONDECREMENT_OFFSET))(this, fast);
		}

		::System::Void ChangeValue(::System::Boolean fast, ::System::Single multiplier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_CHANGEVALUE_OFFSET))(this, fast, multiplier);
		}

		::System::Void UpdateValueLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_UPDATEVALUELABEL_OFFSET))(this);
		}
	};
}
