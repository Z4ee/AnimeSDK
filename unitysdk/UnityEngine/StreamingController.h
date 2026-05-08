#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_STREAMINGCONTROLLER_CANCELPRELOADING_OFFSET UNITYSDK_OFFSET(0x1C5614A0)
#define UNITYENGINE_STREAMINGCONTROLLER_GET_STREAMINGMIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0x1C561470)
#define UNITYENGINE_STREAMINGCONTROLLER_ISPRELOADING_OFFSET UNITYSDK_OFFSET(0x1C5614B0)
#define UNITYENGINE_STREAMINGCONTROLLER_SETPRELOADING_OFFSET UNITYSDK_OFFSET(0x1C561490)
#define UNITYENGINE_STREAMINGCONTROLLER_SET_STREAMINGMIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0x1C561480)
#define UNITYENGINE_STREAMINGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5614C0)

namespace UnityEngine
{
	inline static constexpr unsigned int StreamingController_TypeDefinitionIndex = 24924;

	class StreamingController : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STREAMINGCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Single get_streamingMipmapBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STREAMINGCONTROLLER_GET_STREAMINGMIPMAPBIAS_OFFSET))(this);
		}

		::System::Void set_streamingMipmapBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_STREAMINGCONTROLLER_SET_STREAMINGMIPMAPBIAS_OFFSET))(this, value);
		}

		::System::Void SetPreloading(::System::Single timeoutSeconds, ::System::Boolean activateCameraOnTimeout, ::UnityEngine::Camera* disableCameraCuttingFrom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_STREAMINGCONTROLLER_SETPRELOADING_OFFSET))(this, timeoutSeconds, activateCameraOnTimeout, disableCameraCuttingFrom);
		}

		::System::Void CancelPreloading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STREAMINGCONTROLLER_CANCELPRELOADING_OFFSET))(this);
		}

		::System::Boolean IsPreloading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STREAMINGCONTROLLER_ISPRELOADING_OFFSET))(this);
		}
	};
}
