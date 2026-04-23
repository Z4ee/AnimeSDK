#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A322640)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A322670)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A31E930)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31E570)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PerformDynamicRes_TypeDefinitionIndex = 33392;

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
