#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A400540)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A4005B0)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A3FFE10)
#define UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A400520)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMesh_OnNavMeshChanged_TypeDefinitionIndex = 5380;

	class NavMesh_OnNavMeshChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 changeStamp, ::System::Int32 changedTiles)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_INVOKE_OFFSET))(this, changeStamp, changedTiles);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 changeStamp, ::System::Int32 changedTiles, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_BEGININVOKE_OFFSET))(this, changeStamp, changedTiles, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ONNAVMESHCHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
