#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EBFEEB0)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EBFEEE0)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBFA090)
#define UNITYENGINE_RENDERING_PERFORMDYNAMICRES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFEE40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PerformDynamicRes_TypeDefinitionIndex = 34812;

	class PerformDynamicRes : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PERFORMDYNAMICRES_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
