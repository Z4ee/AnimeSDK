#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/InteractionRangeProcessor_TwoPointDragFloat.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::UI::Extension { template <typename T> class InteractionRangeParam_1; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A516600)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A516590)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1A516660)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A516490)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG___BASE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A516700)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG___BASE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A516750)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessor_Fov_ByTwoPointDrag_TypeDefinitionIndex = 49052;

	class InteractionRangeProcessor_Fov_ByTwoPointDrag : public ::UnityEngine::UI::Extension::InteractionRangeProcessor_TwoPointDragFloat
	{
	public:
		::UnityEngine::Camera* m_cam; // 0xB0

		::System::Void _ctor(::UnityEngine::Camera* cam, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>* param)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG__CTOR_OFFSET))(this, cam, param);
		}

		::System::Void SetValue(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG_SETVALUE_OFFSET))(this, val);
		}

		::System::Single GetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG_GETVALUE_OFFSET))(this);
		}

		::System::Void Simulate(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG_SIMULATE_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New);
		}

		::System::Single __base_GetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG___BASE_GETVALUE_OFFSET))(this);
		}

		::System::Void __base_SetValue(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_FOV_BYTWOPOINTDRAG___BASE_SETVALUE_OFFSET))(this, P0);
		}
	};
}
