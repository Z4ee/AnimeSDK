#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B0F0520)
#define UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B0F0550)
#define UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B0F0510)
#define UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F04A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DisposeManagerResCb_TypeDefinitionIndex = 34126;

	class DisposeManagerResCb : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEMANAGERRESCB_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
