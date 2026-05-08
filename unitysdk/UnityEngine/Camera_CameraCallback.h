#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_CAMERA_CAMERACALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B3BFEA0)
#define UNITYENGINE_CAMERA_CAMERACALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B3BFED0)
#define UNITYENGINE_CAMERA_CAMERACALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B3BF9A0)
#define UNITYENGINE_CAMERA_CAMERACALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3BF990)

namespace UnityEngine
{
	inline static constexpr unsigned int Camera_CameraCallback_TypeDefinitionIndex = 5142;

	class Camera_CameraCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_CAMERACALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Camera* cam)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_CAMERACALLBACK_INVOKE_OFFSET))(this, cam);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Camera* cam, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Camera*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_CAMERACALLBACK_BEGININVOKE_OFFSET))(this, cam, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_CAMERACALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
