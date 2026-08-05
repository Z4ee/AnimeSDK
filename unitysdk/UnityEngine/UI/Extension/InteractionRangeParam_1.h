#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/JudgeMethod.h"

namespace MoleMole::Config { class InteractionCommonData; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI::Extension { template <typename T> class InteractionRangeParam_1; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeParam_1_TypeDefinitionIndex = 47077;

	template <typename T>
	class InteractionRangeParam_1 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::JudgeMethod CurJudgeMethod; // 0x0
		::System::Single Sensitivity; // 0x0
		::UnityEngine::AnimationCurve* DampCurve; // 0x0
		::UnityEngine::AnimationCurve* ClampCurve; // 0x0
		::System::Int32 ClampDuration; // 0x0
		::System::Single MobileSensitivity; // 0x0
		::System::Single ConsoleSensitivity; // 0x0
		T FreeRange; // 0x0
		T MaxRange; // 0x0
		::Sirenix::OdinInspector::ValueDropdownList_1<::UnityEngine::UI::Extension::JudgeMethod>* awakeConfigList; // 0x0
	};
}
