#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/CullingGroupEvent.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_CULLINGGROUP_STATECHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B287850)
#define UNITYENGINE_CULLINGGROUP_STATECHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B2878C0)
#define UNITYENGINE_CULLINGGROUP_STATECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B2877D0)
#define UNITYENGINE_CULLINGGROUP_STATECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2877E0)

namespace UnityEngine
{
	inline static constexpr unsigned int CullingGroup_StateChanged_TypeDefinitionIndex = 4036;

	class CullingGroup_StateChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_STATECHANGED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::CullingGroupEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CullingGroupEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_STATECHANGED_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::CullingGroupEvent a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::CullingGroupEvent, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_STATECHANGED_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_STATECHANGED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
