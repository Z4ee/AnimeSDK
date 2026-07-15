#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventModifiers.h"
#include "unitysdk/UnityEngine/UIElements/EventBase_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class IPointerEvent; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerEventBase_1_TypeDefinitionIndex = 6239;

	template <typename T>
	class PointerEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T>
	{
	public:
		::System::Int32 _pointerId_k__BackingField; // 0x0
		::System::String* _pointerType_k__BackingField; // 0x0
		::System::Boolean _isPrimary_k__BackingField; // 0x0
		::System::Int32 _button_k__BackingField; // 0x0
		::System::Int32 _pressedButtons_k__BackingField; // 0x0
		::UnityEngine::Vector3 _position_k__BackingField; // 0x0
		::UnityEngine::Vector3 _localPosition_k__BackingField; // 0x0
		::UnityEngine::Vector3 _deltaPosition_k__BackingField; // 0x0
		::System::Single _deltaTime_k__BackingField; // 0x0
		::System::Int32 _clickCount_k__BackingField; // 0x0
		::System::Single _pressure_k__BackingField; // 0x0
		::System::Single _tangentialPressure_k__BackingField; // 0x0
		::System::Single _altitudeAngle_k__BackingField; // 0x0
		::System::Single _azimuthAngle_k__BackingField; // 0x0
		::System::Single _twist_k__BackingField; // 0x0
		::UnityEngine::Vector2 _radius_k__BackingField; // 0x0
		::UnityEngine::Vector2 _radiusVariance_k__BackingField; // 0x0
		::UnityEngine::EventModifiers _modifiers_k__BackingField; // 0x0
		::System::Boolean _UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField; // 0x0
		::System::Boolean _UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField; // 0x0
	};
}
