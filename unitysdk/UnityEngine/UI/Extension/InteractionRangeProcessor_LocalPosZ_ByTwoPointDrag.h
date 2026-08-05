#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/InteractionRangeProcessor_TwoPointDragFloat.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { template <typename T> class InteractionRangeParam_1; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1C3F4410)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C3F4390)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1C3F44C0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F4180)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG___BASE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1C3F4560)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG___BASE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C3F45B0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessor_LocalPosZ_ByTwoPointDrag_TypeDefinitionIndex = 50656;

	class InteractionRangeProcessor_LocalPosZ_ByTwoPointDrag : public ::UnityEngine::UI::Extension::InteractionRangeProcessor_TwoPointDragFloat
	{
	public:
		::UnityEngine::Transform* m_trans; // 0xB0

		::System::Void _ctor(::UnityEngine::Transform* trans, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>* param)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG__CTOR_OFFSET))(this, trans, param);
		}

		::System::Void SetValue(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG_SETVALUE_OFFSET))(this, val);
		}

		::System::Single GetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG_GETVALUE_OFFSET))(this);
		}

		::System::Void Simulate(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG_SIMULATE_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New);
		}

		::System::Single __base_GetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG___BASE_GETVALUE_OFFSET))(this);
		}

		::System::Void __base_SetValue(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSOR_LOCALPOSZ_BYTWOPOINTDRAG___BASE_SETVALUE_OFFSET))(this, P0);
		}
	};
}
