#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_AREA_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_IGNOREFROMBUILD_OFFSET UNITYSDK_OFFSET(0xAB0870)
#define UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0xA5D490)
#define UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_ROOT_OFFSET UNITYSDK_OFFSET(0xAB0880)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshBuildMarkup_TypeDefinitionIndex = 28012;

	struct alignas(4) NavMeshBuildMarkup
	{
		::System::Int32 m_OverrideArea; // 0x10
		::System::Int32 m_Area; // 0x14
		::System::Int32 m_IgnoreFromBuild; // 0x18
		::System::Int32 m_InstanceID; // 0x1C

		::System::Void set_overrideArea(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_OVERRIDEAREA_OFFSET))(this, value);
		}

		::System::Void set_area(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_AREA_OFFSET))(this, value);
		}

		::System::Void set_ignoreFromBuild(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_IGNOREFROMBUILD_OFFSET))(this, value);
		}

		::System::Void set_root(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_ROOT_OFFSET))(this, value);
		}
	};
}
