#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFAF3B0)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFAF3E0)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFAEE30)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAF340)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMesh_OnNavMeshPreUpdate_TypeDefinitionIndex = 5650;

	class NavMesh_OnNavMeshPreUpdate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHPREUPDATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
