#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CA7AE00)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CA7AE30)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CA7A0B0)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA79C50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PerformDynamicRes_TypeDefinitionIndex = 18668;

	class PerformDynamicRes : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES__CTOR_OFFSET))(this, object, method);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Single EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
