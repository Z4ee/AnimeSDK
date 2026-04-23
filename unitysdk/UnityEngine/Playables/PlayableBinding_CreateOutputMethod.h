#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutput.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A465170)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A4651D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A464BB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A465150)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableBinding_CreateOutputMethod_TypeDefinitionIndex = 4718;

	class PlayableBinding_CreateOutputMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::Playables::PlayableOutput Invoke(::UnityEngine::Playables::PlayableGraph graph, ::System::String* name)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_INVOKE_OFFSET))(this, graph, name);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Playables::PlayableGraph graph, ::System::String* name, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_BEGININVOKE_OFFSET))(this, graph, name, callback, object);
		}

		::UnityEngine::Playables::PlayableOutput EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUTMETHOD_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
