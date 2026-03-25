#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_CRPACTOR_ADDACTOR_OFFSET UNITYSDK_OFFSET(0x18A3CD70)
#define UNITYENGINE_RENDERING_CRPACTOR_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x18A3CDD0)
#define UNITYENGINE_RENDERING_CRPACTOR_ATTACHRENDERS_OFFSET UNITYSDK_OFFSET(0x18A3CDB0)
#define UNITYENGINE_RENDERING_CRPACTOR_QUERYACTOR_OFFSET UNITYSDK_OFFSET(0x18A3CE20)
#define UNITYENGINE_RENDERING_CRPACTOR_REFRESHACTORRENDER_OFFSET UNITYSDK_OFFSET(0x18A3CDA0)
#define UNITYENGINE_RENDERING_CRPACTOR_REFRESHACTOR_OFFSET UNITYSDK_OFFSET(0x18A3CD90)
#define UNITYENGINE_RENDERING_CRPACTOR_REMOVEACTOR_OFFSET UNITYSDK_OFFSET(0x18A3CD80)
#define UNITYENGINE_RENDERING_CRPACTOR_REMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x18A3CDE0)
#define UNITYENGINE_RENDERING_CRPACTOR_SETABOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x18A3CDC0)
#define UNITYENGINE_RENDERING_CRPACTOR_SETOBJLOCALLIGHT_OFFSET UNITYSDK_OFFSET(0x18A3CE10)
#define UNITYENGINE_RENDERING_CRPACTOR_SETOVERRIDECACHEPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A3CE00)
#define UNITYENGINE_RENDERING_CRPACTOR_SETOVERRIDECACHEPOS_OFFSET UNITYSDK_OFFSET(0x18A3CDF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPActor_TypeDefinitionIndex = 4666;

	struct alignas(8) CRPActor
	{
		::System::IntPtr actorPtr; // 0x10
		::System::Int32 id; // 0x18
		::UnityEngine::Vector3 lastAffactLightVec; // 0x1C
		::System::Int32 lightType; // 0x28

		static ::System::Void AddActor(::UnityEngine::GameObject* go, ::System::UInt32 flag)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_ADDACTOR_OFFSET))(go, flag);
		}

		static ::System::Void RemoveActor(::System::Int32 instanceID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_REMOVEACTOR_OFFSET))(instanceID);
		}

		static ::System::Void RefreshActor(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_REFRESHACTOR_OFFSET))(go);
		}

		static ::System::Void RefreshActorRender(::UnityEngine::GameObject* go, ::UnityEngine::Renderer* render)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_REFRESHACTORRENDER_OFFSET))(go, render);
		}

		static ::System::Void AttachRenders(::UnityEngine::GameObject* go, ::UnityEngine::GameObject* subGO, ::System::Boolean attach)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_ATTACHRENDERS_OFFSET))(go, subGO, attach);
		}

		static ::System::Void SetAboveOffset(::UnityEngine::GameObject* go, ::System::Single offsetY)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_SETABOVEOFFSET_OFFSET))(go, offsetY);
		}

		static ::System::Void AddFlag(::UnityEngine::GameObject* go, ::System::UInt32 flag)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_ADDFLAG_OFFSET))(go, flag);
		}

		static ::System::Void RemoveFlag(::UnityEngine::GameObject* go, ::System::UInt32 flag)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_REMOVEFLAG_OFFSET))(go, flag);
		}

		static ::System::Void SetOverrideCachePos(::UnityEngine::GameObject* go, ::UnityEngine::Vector3 position, ::System::UInt32 flag, ::System::Boolean add)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_SETOVERRIDECACHEPOS_OFFSET))(go, position, flag, add);
		}

		static ::System::Void SetObjLocalLight(::UnityEngine::GameObject* go, ::UnityEngine::Light* light)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_SETOBJLOCALLIGHT_OFFSET))(go, light);
		}

		static ::System::Boolean QueryActor(::UnityEngine::GameObject* go, ::UnityEngine::Rendering::CRPActor& actor)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::Rendering::CRPActor&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_QUERYACTOR_OFFSET))(go, actor);
		}

		static ::System::Void SetOverrideCachePos_Injected(::UnityEngine::GameObject* go, ::UnityEngine::Vector3& position, ::System::UInt32 flag, ::System::Boolean add)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3&, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_SETOVERRIDECACHEPOS_INJECTED_OFFSET))(go, position, flag, add);
		}
	};
}
