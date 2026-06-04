#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B255320)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B255390)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B254EE0)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2552B0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMesh_OnNavMeshChanged_TypeDefinitionIndex = 5657;

	class NavMesh_OnNavMeshChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
