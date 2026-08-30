#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_AI_NAVMESHMODIFIER_AFFECTSAGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE672F0)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_ACTIVEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1BE670B0)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_AREA_OFFSET UNITYSDK_OFFSET(0x1BE67070)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_IGNOREFROMBUILD_OFFSET UNITYSDK_OFFSET(0x1BE67090)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0x1BE67050)
#define UNITYENGINE_AI_NAVMESHMODIFIER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BE67260)
#define UNITYENGINE_AI_NAVMESHMODIFIER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BE67110)
#define UNITYENGINE_AI_NAVMESHMODIFIER_SET_AREA_OFFSET UNITYSDK_OFFSET(0x1BE67080)
#define UNITYENGINE_AI_NAVMESHMODIFIER_SET_IGNOREFROMBUILD_OFFSET UNITYSDK_OFFSET(0x1BE670A0)
#define UNITYENGINE_AI_NAVMESHMODIFIER_SET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0x1BE67060)
#define UNITYENGINE_AI_NAVMESHMODIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE67400)
#define UNITYENGINE_AI_NAVMESHMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE67390)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshModifier_TypeDefinitionIndex = 40053;

	class NavMeshModifier : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>** StaticGet_s_NavMeshModifiers()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshModifier_TypeDefinitionIndex)->GetStaticField(0xEC0);
		}
		::System::Boolean m_OverrideArea; // 0x18
		::System::Int32 m_Area; // 0x1C
		::System::Boolean m_IgnoreFromBuild; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* m_AffectedAgents; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER__CCTOR_OFFSET))();
		}

		::System::Boolean get_overrideArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_OVERRIDEAREA_OFFSET))(this);
		}

		::System::Void set_overrideArea(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_SET_OVERRIDEAREA_OFFSET))(this, a1);
		}

		::System::Int32 get_area()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_AREA_OFFSET))(this);
		}

		::System::Void set_area(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_SET_AREA_OFFSET))(this, a1);
		}

		::System::Boolean get_ignoreFromBuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_IGNOREFROMBUILD_OFFSET))(this);
		}

		::System::Void set_ignoreFromBuild(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_SET_IGNOREFROMBUILD_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>* get_activeModifiers()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_ACTIVEMODIFIERS_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean AffectsAgentType(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_AFFECTSAGENTTYPE_OFFSET))(this, a1);
		}
	};
}
