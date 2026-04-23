#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A31E0D0)
#define UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A31E100)
#define UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A31DE30)
#define UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31DE10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DisposeManagerResCb_TypeDefinitionIndex = 33473;

	class DisposeManagerResCb : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
