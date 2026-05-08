#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableBinding_CreateOutputMethod; }

#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AE76890)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUT_OFFSET UNITYSDK_OFFSET(0x947D70)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_GET_SOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x28B580)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_GET_STREAMNAME_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE768B0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableBinding_TypeDefinitionIndex = 6263;

	struct alignas(8) PlayableBinding
	{
		static ::Il2CppArray<::UnityEngine::Playables::PlayableBinding>** StaticGet_None()
		{
			return (::Il2CppArray<::UnityEngine::Playables::PlayableBinding>**)Il2CppClass::FromTypeDefinitionIndex(PlayableBinding_TypeDefinitionIndex)->GetStaticField(0x4E60);
		}
		static ::System::Double* StaticGet_DefaultDuration()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(PlayableBinding_TypeDefinitionIndex)->GetStaticField(0x2310);
		}
		::System::String* m_StreamName; // 0x10
		::UnityEngine::Object* m_SourceObject; // 0x18
		::System::Type* m_SourceBindingType; // 0x20
		::UnityEngine::Playables::PlayableBinding_CreateOutputMethod* m_CreateOutputMethod; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING__CCTOR_OFFSET))();
		}

		::System::String* get_streamName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_GET_STREAMNAME_OFFSET))(this);
		}

		::UnityEngine::Object* get_sourceObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_GET_SOURCEOBJECT_OFFSET))(this);
		}

		/*
		::UnityEngine::Playables::PlayableOutput CreateOutput(::UnityEngine::Playables::PlayableGraph graph)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUT_OFFSET))(this, graph);
		}
		*/

		static ::UnityEngine::Playables::PlayableBinding CreateInternal(::System::String* name, ::UnityEngine::Object* sourceObject, ::System::Type* sourceType, ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod* createFunction)
		{
			return ((::UnityEngine::Playables::PlayableBinding(*)(::System::String*, ::UnityEngine::Object*, ::System::Type*, ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEINTERNAL_OFFSET))(name, sourceObject, sourceType, createFunction);
		}
	};
}
