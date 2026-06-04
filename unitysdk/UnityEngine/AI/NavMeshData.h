#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B256750)
#define UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B256700)
#define UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2567B0)
#define UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B256770)
#define UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2566F0)
#define UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B2566A0)
#define UNITYENGINE_AI_NAVMESHDATA_GET_TILECOUNT_OFFSET UNITYSDK_OFFSET(0x1B2567D0)
#define UNITYENGINE_AI_NAVMESHDATA_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B256690)
#define UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B256760)
#define UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B256520)
#define UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2567C0)
#define UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B256530)
#define UNITYENGINE_AI_NAVMESHDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B256510)
#define UNITYENGINE_AI_NAVMESHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B256680)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshData_TypeDefinitionIndex = 5651;

	class NavMeshData : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void Internal_Create(::UnityEngine::AI::NavMeshData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshData*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_INTERNAL_CREATE_OFFSET))(a1, a2);
		}

		::UnityEngine::Bounds get_sourceBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Int32 get_tileCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_TILECOUNT_OFFSET))(this);
		}

		::System::Void get_sourceBounds_Injected(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_position_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_rotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_rotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_INJECTED_OFFSET))(this, a1);
		}
	};
}
