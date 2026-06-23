#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSource.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::AI { class NavMeshModifier; }
namespace UnityEngine::AI { class NavMeshModifierVolume; }

#define UNITYENGINE_AI_NAVMESHSURFACE___C__APPENDMODIFIERVOLUMES_B__81_0_OFFSET UNITYSDK_OFFSET(0x1E6E0960)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E0910)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__82_0_OFFSET UNITYSDK_OFFSET(0x1E6E0980)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__82_1_OFFSET UNITYSDK_OFFSET(0x1E6E09A0)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__82_2_OFFSET UNITYSDK_OFFSET(0x1E6E0C40)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E0950)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshSurface___c_TypeDefinitionIndex = 37391;

	class NavMeshSurface___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshModifier*>** StaticGet___9__82_0()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshModifier*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0x28B50);
		}
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>** StaticGet___9__82_1()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0x28B58);
		}
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshModifierVolume*>** StaticGet___9__81_0()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshModifierVolume*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0x28B60);
		}
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>** StaticGet___9__82_2()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0x28B68);
		}
		static ::UnityEngine::AI::NavMeshSurface___c** StaticGet___9()
		{
			return (::UnityEngine::AI::NavMeshSurface___c**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0x28B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _AppendModifierVolumes_b__81_0(::UnityEngine::AI::NavMeshModifierVolume* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshModifierVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__APPENDMODIFIERVOLUMES_B__81_0_OFFSET))(this, x);
		}

		::System::Boolean _CollectSources_b__82_0(::UnityEngine::AI::NavMeshModifier* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshModifier*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__82_0_OFFSET))(this, x);
		}

		::System::Boolean _CollectSources_b__82_1(::UnityEngine::AI::NavMeshBuildSource x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshBuildSource))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__82_1_OFFSET))(this, x);
		}

		::System::Boolean _CollectSources_b__82_2(::UnityEngine::AI::NavMeshBuildSource x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshBuildSource))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__82_2_OFFSET))(this, x);
		}
	};
}
