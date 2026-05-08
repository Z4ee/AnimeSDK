#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define UIREWARDPROGRESSWIDGET_CONVERTPROGRESS_OFFSET UNITYSDK_OFFSET(0x18D4FD80)
#define UIREWARDPROGRESSWIDGET_GETMAXVAL_OFFSET UNITYSDK_OFFSET(0x18D4FDE0)
#define UIREWARDPROGRESSWIDGET_INITPROGRESS_OFFSET UNITYSDK_OFFSET(0x18D4F610)
#define UIREWARDPROGRESSWIDGET_SETPROGERSS_OFFSET UNITYSDK_OFFSET(0x18D4F680)
#define UIREWARDPROGRESSWIDGET_SETREWARD_OFFSET UNITYSDK_OFFSET(0x18D4FE30)
#define UIREWARDPROGRESSWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18D50040)

inline static constexpr unsigned int UIRewardProgressWidget_TypeDefinitionIndex = 56821;

class UIRewardProgressWidget : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* ProgressRoot; // 0x18
	::System::Single maxValue; // 0x20
	::UnityEngine::RectTransform* ProgressRect; // 0x28
	::Il2CppArray<::UnityEngine::RectTransform*>* rewardsTrans; // 0x30
	::System::Action_2<::UnityEngine::UI::Image*, ::System::String*>* LoadSpriteFunc; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPROGRESSWIDGET__CTOR_OFFSET))(this);
	}

	::System::Void InitProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPROGRESSWIDGET_INITPROGRESS_OFFSET))(this);
	}

	::System::Void SetProgerss(::System::Single progress)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UIREWARDPROGRESSWIDGET_SETPROGERSS_OFFSET))(this, progress);
	}

	::System::Single GetMaxVal()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPROGRESSWIDGET_GETMAXVAL_OFFSET))(this);
	}

	::UnityEngine::UI::Image* SetReward(::System::Int32 index, ::System::Int32 rewardID, ::System::Int32 rewardNum)
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UIREWARDPROGRESSWIDGET_SETREWARD_OFFSET))(this, index, rewardID, rewardNum);
	}

	::System::Single ConvertProgress(::System::Single realProgress)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UIREWARDPROGRESSWIDGET_CONVERTPROGRESS_OFFSET))(this, realProgress);
	}
};
