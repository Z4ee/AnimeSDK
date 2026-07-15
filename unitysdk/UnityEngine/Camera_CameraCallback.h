#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_CAMERA_CAMERACALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C1653A0)
#define UNITYENGINE_CAMERA_CAMERACALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C1653D0)
#define UNITYENGINE_CAMERA_CAMERACALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C165390)
#define UNITYENGINE_CAMERA_CAMERACALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C165320)

namespace UnityEngine
{
	inline static constexpr unsigned int Camera_CameraCallback_TypeDefinitionIndex = 4037;

	class Camera_CameraCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_CAMERACALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_CAMERACALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Camera* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Camera*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_CAMERACALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_CAMERACALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
