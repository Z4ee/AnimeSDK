#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::UI::Extension { class IPostCanvasRebuild; }

#define UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_ENSUREREGISTERED_OFFSET UNITYSDK_OFFSET(0x18C5F660)
#define UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_FLUSH_OFFSET UNITYSDK_OFFSET(0x18C5FA00)
#define UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_REMOVE_OFFSET UNITYSDK_OFFSET(0x18C5F950)
#define UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x18C5F870)
#define UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C5FF20)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int PostCanvasRebuildDispatcher_TypeDefinitionIndex = 45917;

	class PostCanvasRebuildDispatcher : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Extension::IPostCanvasRebuild*>** StaticGet__pendings()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Extension::IPostCanvasRebuild*>**)Il2CppClass::FromTypeDefinitionIndex(PostCanvasRebuildDispatcher_TypeDefinitionIndex)->GetStaticField(0x3B370);
		}
		static ::System::Boolean* StaticGet__registered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostCanvasRebuildDispatcher_TypeDefinitionIndex)->GetStaticField(0xDEA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRegistered()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_ENSUREREGISTERED_OFFSET))();
		}

		static ::System::Void Schedule(::UnityEngine::UI::Extension::IPostCanvasRebuild* item)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::IPostCanvasRebuild*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_SCHEDULE_OFFSET))(item);
		}

		static ::System::Void Remove(::UnityEngine::UI::Extension::IPostCanvasRebuild* item)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::IPostCanvasRebuild*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_REMOVE_OFFSET))(item);
		}

		static ::System::Void Flush()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_FLUSH_OFFSET))();
		}
	};
}
