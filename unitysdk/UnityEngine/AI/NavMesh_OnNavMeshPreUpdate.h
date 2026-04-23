#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A4005E0)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A400610)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A3FFB40)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4005C0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMesh_OnNavMeshPreUpdate_TypeDefinitionIndex = 5379;

	class NavMesh_OnNavMeshPreUpdate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
