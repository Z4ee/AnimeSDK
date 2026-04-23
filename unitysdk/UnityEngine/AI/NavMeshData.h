#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A401910)
#define UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A4018C0)
#define UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A401970)
#define UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1A401930)
#define UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4018B0)
#define UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A401860)
#define UNITYENGINE_AI_NAVMESHDATA_GET_TILECOUNT_OFFSET UNITYSDK_OFFSET(0x1A401990)
#define UNITYENGINE_AI_NAVMESHDATA_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A401850)
#define UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A401920)
#define UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A4016E0)
#define UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A401980)
#define UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1A4016F0)
#define UNITYENGINE_AI_NAVMESHDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4016D0)
#define UNITYENGINE_AI_NAVMESHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A401840)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshData_TypeDefinitionIndex = 5374;

	class NavMeshData : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 agentTypeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA__CTOR_1_OFFSET))(this, agentTypeID);
		}

		static ::System::Void Internal_Create(::UnityEngine::AI::NavMeshData* mono, ::System::Int32 agentTypeID)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshData*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_INTERNAL_CREATE_OFFSET))(mono, agentTypeID);
		}

		::UnityEngine::Bounds get_sourceBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Int32 get_tileCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_TILECOUNT_OFFSET))(this);
		}

		::System::Void get_sourceBounds_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_position_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rotation_Injected(::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotation_Injected(::UnityEngine::Quaternion& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_INJECTED_OFFSET))(this, value);
		}
	};
}
