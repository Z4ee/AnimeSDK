#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/Vec3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF4C920)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF4C9B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF4C480)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4C460)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int CombineCallback_TypeDefinitionIndex = 27122;

	class CombineCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 position, ::Il2CppArray<::System::Object*>* data, ::Il2CppArray<::System::Single>* weights)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_INVOKE_OFFSET))(this, position, data, weights);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 position, ::Il2CppArray<::System::Object*>* data, ::Il2CppArray<::System::Single>* weights, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Single>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_BEGININVOKE_OFFSET))(this, position, data, weights, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_COMBINECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
