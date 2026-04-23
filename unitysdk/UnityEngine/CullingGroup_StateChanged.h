#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/CullingGroupEvent.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_CULLINGGROUP_STATECHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A435DD0)
#define UNITYENGINE_CULLINGGROUP_STATECHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A435E40)
#define UNITYENGINE_CULLINGGROUP_STATECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A435AC0)
#define UNITYENGINE_CULLINGGROUP_STATECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A435DB0)

namespace UnityEngine
{
	inline static constexpr unsigned int CullingGroup_StateChanged_TypeDefinitionIndex = 3862;

	class CullingGroup_StateChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_STATECHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::CullingGroupEvent sphere)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CullingGroupEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_STATECHANGED_INVOKE_OFFSET))(this, sphere);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::CullingGroupEvent sphere, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::CullingGroupEvent, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_STATECHANGED_BEGININVOKE_OFFSET))(this, sphere, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_STATECHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
