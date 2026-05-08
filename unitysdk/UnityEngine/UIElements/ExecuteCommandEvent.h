#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/CommandEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_EXECUTECOMMANDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x197AACA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ExecuteCommandEvent_TypeDefinitionIndex = 24992;

	class ExecuteCommandEvent : public ::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ExecuteCommandEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXECUTECOMMANDEVENT__CTOR_OFFSET))(this);
		}
	};
}
