#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ECC6DE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ECC6E40)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ECC6C90)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECC6D70)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableBinding_CreateOutputMethod_TypeDefinitionIndex = 4909;

	class PlayableBinding_CreateOutputMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::PlayableOutput Invoke(::UnityEngine::Playables::PlayableGraph a1, ::System::String* a2)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Playables::PlayableGraph a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Playables::PlayableOutput EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
