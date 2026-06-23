#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/InteractionRangeProcessorFloat.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { template <typename T> class InteractionRangeParam_1; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x1A0F0510)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0F0620)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0F05B0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F03E0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY___BASE_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x1A0F0680)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY___BASE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0F0760)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY___BASE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0F07B0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessor_Fov_ByScrollY_TypeDefinitionIndex = 79388;

	class InteractionRangeProcessor_Fov_ByScrollY : public ::UnityEngine::UI::Extension::InteractionRangeProcessorFloat
	{
	public:
		::UnityEngine::Camera* m_cam; // 0xA8

		::System::Void _ctor(::UnityEngine::Camera* cam, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>* param)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY__CTOR_OFFSET))(this, cam, param);
		}

		::System::Boolean CanInteract(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY_CANINTERACT_OFFSET))(this, eventData);
		}

		::System::Void SetValue(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY_SETVALUE_OFFSET))(this, val);
		}

		::System::Single GetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY_GETVALUE_OFFSET))(this);
		}

		::System::Boolean __base_CanInteract(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY___BASE_CANINTERACT_OFFSET))(this, P0);
		}

		::System::Single __base_GetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY___BASE_GETVALUE_OFFSET))(this);
		}

		::System::Void __base_SetValue(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYSCROLLY___BASE_SETVALUE_OFFSET))(this, P0);
		}
	};
}
