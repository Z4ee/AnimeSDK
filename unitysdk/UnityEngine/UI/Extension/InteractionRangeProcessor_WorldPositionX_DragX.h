#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/InteractionRangeProcessorFloat.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { template <typename T> class InteractionRangeParam_1; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x1A5168F0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A516A00)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A516940)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5167C0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX___BASE_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x1A516A70)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX___BASE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A516B50)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX___BASE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A516BA0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessor_WorldPositionX_DragX_TypeDefinitionIndex = 86281;

	class InteractionRangeProcessor_WorldPositionX_DragX : public ::UnityEngine::UI::Extension::InteractionRangeProcessorFloat
	{
	public:
		::UnityEngine::Transform* m_trans; // 0xA8

		::System::Void _ctor(::UnityEngine::Transform* trans, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>* param)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX__CTOR_OFFSET))(this, trans, param);
		}

		::System::Boolean CanInteract(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX_CANINTERACT_OFFSET))(this, eventData);
		}

		::System::Void SetValue(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX_SETVALUE_OFFSET))(this, val);
		}

		::System::Single GetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX_GETVALUE_OFFSET))(this);
		}

		::System::Boolean __base_CanInteract(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX___BASE_CANINTERACT_OFFSET))(this, P0);
		}

		::System::Single __base_GetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX___BASE_GETVALUE_OFFSET))(this);
		}

		::System::Void __base_SetValue(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_WORLDPOSITIONX_DRAGX___BASE_SETVALUE_OFFSET))(this, P0);
		}
	};
}
