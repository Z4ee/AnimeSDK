#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02B760)
#define UNITYENGINE_AI_NAVMESHDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C02B710)
#define UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02B7C0)
#define UNITYENGINE_AI_NAVMESHDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1C02B780)
#define UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02B700)
#define UNITYENGINE_AI_NAVMESHDATA_GET_SOURCEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C02B6B0)
#define UNITYENGINE_AI_NAVMESHDATA_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C02B6A0)
#define UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02B770)
#define UNITYENGINE_AI_NAVMESHDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C02B220)
#define UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02B7D0)
#define UNITYENGINE_AI_NAVMESHDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1C02B230)
#define UNITYENGINE_AI_NAVMESHDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C02B1B0)
#define UNITYENGINE_AI_NAVMESHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C02B640)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshData_TypeDefinitionIndex = 24804;

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
