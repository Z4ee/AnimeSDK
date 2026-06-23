#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/PseudoStates.h"

#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_PSEUDOSTATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x2BE890)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleComplexSelector_PseudoStateData_TypeDefinitionIndex = 27593;

	struct alignas(4) StyleComplexSelector_PseudoStateData
	{
		::UnityEngine::UIElements::PseudoStates state; // 0x10
		::System::Boolean negate; // 0x14

		::System::Void _ctor(::UnityEngine::UIElements::PseudoStates state, ::System::Boolean negate)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::PseudoStates, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_PSEUDOSTATEDATA__CTOR_OFFSET))(this, state, negate);
		}
	};
}
