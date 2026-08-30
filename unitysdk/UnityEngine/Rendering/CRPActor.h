#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_CRPACTOR_ADDACTOR_OFFSET UNITYSDK_OFFSET(0x1EAC68E0)
#define UNITYENGINE_RENDERING_CRPACTOR_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x1EAC6940)
#define UNITYENGINE_RENDERING_CRPACTOR_ATTACHRENDERS_OFFSET UNITYSDK_OFFSET(0x1EAC6920)
#define UNITYENGINE_RENDERING_CRPACTOR_QUERYACTOR_OFFSET UNITYSDK_OFFSET(0x1EAC6990)
#define UNITYENGINE_RENDERING_CRPACTOR_REFRESHACTORRENDER_OFFSET UNITYSDK_OFFSET(0x1EAC6910)
#define UNITYENGINE_RENDERING_CRPACTOR_REFRESHACTOR_OFFSET UNITYSDK_OFFSET(0x1EAC6900)
#define UNITYENGINE_RENDERING_CRPACTOR_REMOVEACTOR_OFFSET UNITYSDK_OFFSET(0x1EAC68F0)
#define UNITYENGINE_RENDERING_CRPACTOR_REMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x1EAC6950)
#define UNITYENGINE_RENDERING_CRPACTOR_SETABOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x1EAC6930)
#define UNITYENGINE_RENDERING_CRPACTOR_SETOBJLOCALLIGHT_OFFSET UNITYSDK_OFFSET(0x1EAC6980)
#define UNITYENGINE_RENDERING_CRPACTOR_SETOVERRIDECACHEPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EAC6970)
#define UNITYENGINE_RENDERING_CRPACTOR_SETOVERRIDECACHEPOS_OFFSET UNITYSDK_OFFSET(0x1EAC6960)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPActor_TypeDefinitionIndex = 4865;

	struct alignas(8) CRPActor
	{
		::System::IntPtr actorPtr; // 0x10
		::System::Int32 id; // 0x18
		::UnityEngine::Vector3 lastAffactLightVec; // 0x1C
		::System::Int32 lightType; // 0x28

		static ::System::Void AddActor(::UnityEngine::GameObject* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_ADDACTOR_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveActor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_REMOVEACTOR_OFFSET))(a1);
		}

		static ::System::Void RefreshActor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_REFRESHACTOR_OFFSET))(a1);
		}

		static ::System::Void RefreshActorRender(::UnityEngine::GameObject* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_REFRESHACTORRENDER_OFFSET))(a1, a2);
		}

		static ::System::Void AttachRenders(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_ATTACHRENDERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAboveOffset(::UnityEngine::GameObject* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_SETABOVEOFFSET_OFFSET))(a1, a2);
		}

		static ::System::Void AddFlag(::UnityEngine::GameObject* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_ADDFLAG_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveFlag(::UnityEngine::GameObject* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_REMOVEFLAG_OFFSET))(a1, a2);
		}

		static ::System::Void SetOverrideCachePos(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_SETOVERRIDECACHEPOS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetObjLocalLight(::UnityEngine::GameObject* a1, ::UnityEngine::Light* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_SETOBJLOCALLIGHT_OFFSET))(a1, a2);
		}

		static ::System::Boolean QueryActor(::UnityEngine::GameObject* a1, ::UnityEngine::Rendering::CRPActor& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::Rendering::CRPActor&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_QUERYACTOR_OFFSET))(a1, a2);
		}

		static ::System::Void SetOverrideCachePos_Injected(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3& a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3&, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTOR_SETOVERRIDECACHEPOS_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
	};
}
