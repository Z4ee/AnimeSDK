#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/InteractionRangeProcessorBase.h"
#include "unitysdk/UnityEngine/UI/Extension/JudgeMethod.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::UI::Extension { template <typename T> class InteractionRangeParam_1; }
namespace UnityEngine::UI::Extension { template <typename T> class Range_1; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessorBase_1_TypeDefinitionIndex = 56069;

	template <typename T>
	class InteractionRangeProcessorBase_1 : public ::UnityEngine::UI::Extension::InteractionRangeProcessorBase
	{
	public:
		::System::Action_1<T>* m_onInteractCallback; // 0x0
		::System::Single m_minClampRatio; // 0x0
		T m_centerVal; // 0x0
		T m_freeRange; // 0x0
		T m_maxRange; // 0x0
		::UnityEngine::UI::Extension::Range_1<T>* m_freeRangeEx; // 0x0
		::UnityEngine::UI::Extension::Range_1<T>* m_maxRangeEx; // 0x0
		::UnityEngine::UI::Extension::JudgeMethod m_judgeMethod; // 0x0
		::System::Func_1<T>* m_getValFunc; // 0x0
		::System::Action_1<T>* m_setValFunc; // 0x0
	};
}
