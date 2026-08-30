#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_AFFECTSAGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE67720)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_ACTIVEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1BE674E0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_AREA_OFFSET UNITYSDK_OFFSET(0x1BE674C0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1BE67490)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1BE67460)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BE67690)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BE67540)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_AREA_OFFSET UNITYSDK_OFFSET(0x1BE674D0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1BE674B0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1BE67480)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE67840)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE677C0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshModifierVolume_TypeDefinitionIndex = 40054;

	class NavMeshModifierVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifierVolume*>** StaticGet_s_NavMeshModifiers()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifierVolume*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshModifierVolume_TypeDefinitionIndex)->GetStaticField(0xED0);
		}
		::UnityEngine::Vector3 m_Size; // 0x18
		::UnityEngine::Vector3 m_Center; // 0x24
		::System::Int32 m_Area; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* m_AffectedAgents; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_CENTER_OFFSET))(this, a1);
		}

		::System::Int32 get_area()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_AREA_OFFSET))(this);
		}

		::System::Void set_area(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_AREA_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifierVolume*>* get_activeModifiers()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifierVolume*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_ACTIVEMODIFIERS_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean AffectsAgentType(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_AFFECTSAGENTTYPE_OFFSET))(this, a1);
		}
	};
}
