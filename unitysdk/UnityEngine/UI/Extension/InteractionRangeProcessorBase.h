#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/InteractionSegment.h"
#include "unitysdk/UnityEngine/UI/Extension/Quantization.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_APPLYEVENTDATA_1_OFFSET UNITYSDK_OFFSET(0x17928D20)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_APPLYEVENTDATA_OFFSET UNITYSDK_OFFSET(0x17928CC0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_CANINTERACT_1_OFFSET UNITYSDK_OFFSET(0x17928A00)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x17928970)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_CANRUNINCURRENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x17928860)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_CLAMP_OFFSET UNITYSDK_OFFSET(0x17928A70)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17928780)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_GETDELTA_1_OFFSET UNITYSDK_OFFSET(0x17928610)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_GETDELTA_OFFSET UNITYSDK_OFFSET(0x17928540)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_GETTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x17928C60)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_GET_ISCLAMPING_OFFSET UNITYSDK_OFFSET(0x179280A0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_HANDLEEVENTDATA_1_OFFSET UNITYSDK_OFFSET(0x17928B90)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_HANDLEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x17928AB0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_ISINTERACTING_OFFSET UNITYSDK_OFFSET(0x179288E0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_REFRESHINTERACTSTATE_OFFSET UNITYSDK_OFFSET(0x179280B0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_REFRESHSENSITIVITY_OFFSET UNITYSDK_OFFSET(0x179281C0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_SETENABLED_OFFSET UNITYSDK_OFFSET(0x17928920)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_SETINTERACTSTATE_OFFSET UNITYSDK_OFFSET(0x17928170)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_SETQUANTIZATIONTYPE_OFFSET UNITYSDK_OFFSET(0x17928450)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_SETREVERSERATIO_OFFSET UNITYSDK_OFFSET(0x179284E0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_SETRUNINCURRENTPLATFORMFUNC_OFFSET UNITYSDK_OFFSET(0x17928810)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17928D90)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessorBase_TypeDefinitionIndex = 75868;

	class InteractionRangeProcessorBase : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* m_canRunInCurrentPlatform; // 0x10
		::UnityEngine::AnimationCurve* m_clampCurve; // 0x18
		::UnityEngine::Camera* m_cam; // 0x20
		::UnityEngine::AnimationCurve* m_dampCurve; // 0x28
		::DG::Tweening::Tween* m_objResetTween; // 0x30
		::System::Func_2<::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean>* m_canInteractFunc; // 0x38
		::System::Single m_clampDuration; // 0x40
		::System::Single m_mobileSensitivity; // 0x44
		::UnityEngine::UI::Extension::InteractionSegment m_beginInteractSeg; // 0x48
		::System::Single m_reverseRatio; // 0x4C
		::System::Single m_sensitivity; // 0x50
		::UnityEngine::UI::Extension::Quantization m_quantizationType; // 0x54
		::System::Boolean m_isClamping; // 0x58
		::System::Boolean m_enabled; // 0x59
		::System::Boolean m_isInteracting; // 0x5A
		::System::Single m_pcSensitivity; // 0x5C
		::UnityEngine::UI::Extension::InteractionSegment m_endInteractSeg; // 0x60
		::System::Single m_consoleSensitivity; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsClamping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_GET_ISCLAMPING_OFFSET))(this);
		}

		::System::Void RefreshInteractState(::UnityEngine::UI::Extension::InteractionSegment interactionSegment)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::InteractionSegment))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_REFRESHINTERACTSTATE_OFFSET))(this, interactionSegment);
		}

		::System::Void RefreshSensitivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_REFRESHSENSITIVITY_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::InteractionRangeProcessorBase* SetQuantizationType(::UnityEngine::UI::Extension::Quantization type)
		{
			return ((::UnityEngine::UI::Extension::InteractionRangeProcessorBase*(*)(::PVOID, ::UnityEngine::UI::Extension::Quantization))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_SETQUANTIZATIONTYPE_OFFSET))(this, type);
		}

		::UnityEngine::UI::Extension::InteractionRangeProcessorBase* SetReverseRatio(::System::Single ratio)
		{
			return ((::UnityEngine::UI::Extension::InteractionRangeProcessorBase*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_SETREVERSERATIO_OFFSET))(this, ratio);
		}

		::System::Single GetDelta(::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_GETDELTA_OFFSET))(this, data);
		}

		::System::Single GetDelta_1(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_GETDELTA_1_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void SetRunInCurrentPlatformFunc(::System::Func_1<::System::Boolean>* func)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_SETRUNINCURRENTPLATFORMFUNC_OFFSET))(this, func);
		}

		::System::Boolean CanRunInCurrentPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_CANRUNINCURRENTPLATFORM_OFFSET))(this);
		}

		::System::Void SetInteractState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_SETINTERACTSTATE_OFFSET))(this, state);
		}

		::System::Boolean IsInteracting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_ISINTERACTING_OFFSET))(this);
		}

		::System::Void SetEnabled(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_SETENABLED_OFFSET))(this, enable);
		}

		::System::Boolean CanInteract(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_CANINTERACT_OFFSET))(this, eventData);
		}

		::System::Boolean CanInteract_1(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_CANINTERACT_1_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New);
		}

		::System::Void Clamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_CLAMP_OFFSET))(this);
		}

		::System::Void HandleEventData(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPointDelta, ::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_HANDLEEVENTDATA_OFFSET))(this, eventData, worldPointDelta, rect);
		}

		::System::Void HandleEventData_1(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_HANDLEEVENTDATA_1_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New);
		}

		::System::Single GetTotalSize(::UnityEngine::Rect rect)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_GETTOTALSIZE_OFFSET))(this, rect);
		}

		::System::Void ApplyEventData(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Single sizeX)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_APPLYEVENTDATA_OFFSET))(this, eventData, sizeX);
		}

		::System::Void ApplyEventData_1(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORBASE_APPLYEVENTDATA_1_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New);
		}
	};
}
