#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_DELTAXGREATER_OFFSET UNITYSDK_OFFSET(0x18E2BF90)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_DELTAYGREATER_OFFSET UNITYSDK_OFFSET(0x18E2C160)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETLOCALPOSITIONX_OFFSET UNITYSDK_OFFSET(0x18E2C480)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETLOCALPOSITIONY_OFFSET UNITYSDK_OFFSET(0x18E2C4F0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETLOCALPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x18E2C560)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETWORLDPOSITIONX_OFFSET UNITYSDK_OFFSET(0x18E2C330)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETWORLDPOSITIONY_OFFSET UNITYSDK_OFFSET(0x18E2C3A0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_GETWORLDPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x18E2C410)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_HASSCROLLDELTAX_OFFSET UNITYSDK_OFFSET(0x18E2BF20)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_HASSCROLLDELTAY_OFFSET UNITYSDK_OFFSET(0x18E2BEB0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETLOCALPOSITIONX_OFFSET UNITYSDK_OFFSET(0x18E2C5D0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETLOCALPOSITIONY_OFFSET UNITYSDK_OFFSET(0x18E2C690)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETLOCALPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x18E2C760)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETWORLDPOSITIONX_OFFSET UNITYSDK_OFFSET(0x18E2C820)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETWORLDPOSITIONY_OFFSET UNITYSDK_OFFSET(0x18E2C8E0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEUTILITY_SETWORLDPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x18E2C9B0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeUtility_TypeDefinitionIndex = 60927;

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
