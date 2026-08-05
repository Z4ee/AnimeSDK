#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Composites/AxisComposite_WhichSideWins.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingComposite_1.h"

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1F166E80)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_GET_MIDPOINT_OFFSET UNITYSDK_OFFSET(0x1F166D40)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x1F166D60)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F166F20)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int AxisComposite_TypeDefinitionIndex = 32711;

	class AxisComposite : public ::UnityEngine::InputSystem::InputBindingComposite_1<::System::Single>
	{
	public:
		::System::Single minValue; // 0x10
		::System::Int32 negative; // 0x14
		::System::Single maxValue; // 0x18
		::System::Int32 positive; // 0x1C
		::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins whichSideWins; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE__CTOR_OFFSET))(this);
		}

		::System::Single get_midPoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_GET_MIDPOINT_OFFSET))(this);
		}

		::System::Single ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_READVALUE_OFFSET))(this, context);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_EVALUATEMAGNITUDE_OFFSET))(this, context);
		}
	};
}
