#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvyUISpline; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_UIFLOWPATH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C151300)
#define UNITYENGINE_UI_UIFLOWPATH_START_OFFSET UNITYSDK_OFFSET(0x1C150B40)
#define UNITYENGINE_UI_UIFLOWPATH_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C150C80)
#define UNITYENGINE_UI_UIFLOWPATH_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C150C10)
#define UNITYENGINE_UI_UIFLOWPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C151540)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int UIFlowPath_TypeDefinitionIndex = 90187;

	class UIFlowPath : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _target; // 0x18
		::FluffyUnderware::Curvy::CurvyUISpline* spline; // 0x20
		::System::Single progress; // 0x28
		::System::Boolean updateRotation; // 0x2C
		::System::Boolean enableSinWave; // 0x2D
		::System::Single sinAmplitude; // 0x30
		::System::Single sinFrequency; // 0x34
		::System::Single _lastProgress; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIFLOWPATH__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIFLOWPATH_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIFLOWPATH_UPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIFLOWPATH_ONVALIDATE_OFFSET))(this);
		}

		::System::Void UpdatePosition(::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIFLOWPATH_UPDATEPOSITION_OFFSET))(this, t);
		}
	};
}
