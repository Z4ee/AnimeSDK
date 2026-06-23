#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_DELTAXGREATER_OFFSET UNITYSDK_OFFSET(0x1BF50EE0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_DELTAYGREATER_OFFSET UNITYSDK_OFFSET(0x1BF510B0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETLOCALPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1BF513D0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETLOCALPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1BF51440)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETLOCALPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x1BF514B0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETWORLDPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1BF51280)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETWORLDPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1BF512F0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETWORLDPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x1BF51360)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_HASSCROLLDELTAX_OFFSET UNITYSDK_OFFSET(0x1BF50E70)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_HASSCROLLDELTAY_OFFSET UNITYSDK_OFFSET(0x1BF50E00)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETLOCALPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1BF51520)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETLOCALPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1BF515E0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETLOCALPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x1BF516B0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETWORLDPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1BF51770)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETWORLDPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1BF51830)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETWORLDPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x1BF51900)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeUtility_TypeDefinitionIndex = 67712;

	class InteractionRangeUtility : public ::System::Object
	{
	public:
		static ::System::Boolean HasScrollDeltaY(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_HASSCROLLDELTAY_OFFSET))(eventData);
		}

		static ::System::Boolean HasScrollDeltaX(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_HASSCROLLDELTAX_OFFSET))(eventData);
		}

		static ::System::Boolean DeltaXGreater(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_DELTAXGREATER_OFFSET))(eventData);
		}

		static ::System::Boolean DeltaYGreater(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_DELTAYGREATER_OFFSET))(eventData);
		}

		static ::System::Single GetWorldPositionX(::UnityEngine::Transform* trans)
		{
			return ((::System::Single(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETWORLDPOSITIONX_OFFSET))(trans);
		}

		static ::System::Single GetWorldPositionY(::UnityEngine::Transform* trans)
		{
			return ((::System::Single(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETWORLDPOSITIONY_OFFSET))(trans);
		}

		static ::System::Single GetWorldPositionZ(::UnityEngine::Transform* trans)
		{
			return ((::System::Single(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETWORLDPOSITIONZ_OFFSET))(trans);
		}

		static ::System::Single GetLocalPositionX(::UnityEngine::Transform* trans)
		{
			return ((::System::Single(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETLOCALPOSITIONX_OFFSET))(trans);
		}

		static ::System::Single GetLocalPositionY(::UnityEngine::Transform* trans)
		{
			return ((::System::Single(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETLOCALPOSITIONY_OFFSET))(trans);
		}

		static ::System::Single GetLocalPositionZ(::UnityEngine::Transform* trans)
		{
			return ((::System::Single(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETLOCALPOSITIONZ_OFFSET))(trans);
		}

		static ::System::Void SetLocalPositionX(::UnityEngine::Transform* trans, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETLOCALPOSITIONX_OFFSET))(trans, value);
		}

		static ::System::Void SetLocalPositionY(::UnityEngine::Transform* trans, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETLOCALPOSITIONY_OFFSET))(trans, value);
		}

		static ::System::Void SetLocalPositionZ(::UnityEngine::Transform* trans, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETLOCALPOSITIONZ_OFFSET))(trans, value);
		}

		static ::System::Void SetWorldPositionX(::UnityEngine::Transform* trans, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETWORLDPOSITIONX_OFFSET))(trans, value);
		}

		static ::System::Void SetWorldPositionY(::UnityEngine::Transform* trans, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETWORLDPOSITIONY_OFFSET))(trans, value);
		}

		static ::System::Void SetWorldPositionZ(::UnityEngine::Transform* trans, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETWORLDPOSITIONZ_OFFSET))(trans, value);
		}
	};
}
