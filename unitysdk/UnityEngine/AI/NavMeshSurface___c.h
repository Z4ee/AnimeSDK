#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSource.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::AI { class NavMeshModifier; }
namespace UnityEngine::AI { class NavMeshModifierVolume; }

#define UNITYENGINE_AI_NAVMESHSURFACE___C__APPENDMODIFIERVOLUMES_B__76_0_OFFSET UNITYSDK_OFFSET(0x16428F60)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16428F10)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_0_OFFSET UNITYSDK_OFFSET(0x16428F80)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_1_OFFSET UNITYSDK_OFFSET(0x16428FA0)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_2_OFFSET UNITYSDK_OFFSET(0x16429060)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16428F50)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshSurface___c_TypeDefinitionIndex = 31939;

	class NavMeshSurface___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>** StaticGet___9__77_1()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0xC40);
		}
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshModifierVolume*>** StaticGet___9__76_0()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshModifierVolume*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0xC48);
		}
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>** StaticGet___9__77_2()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0xC50);
		}
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshModifier*>** StaticGet___9__77_0()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshModifier*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0xC58);
		}
		static ::UnityEngine::AI::NavMeshSurface___c** StaticGet___9()
		{
			return (::UnityEngine::AI::NavMeshSurface___c**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0xC60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _AppendModifierVolumes_b__76_0(::UnityEngine::AI::NavMeshModifierVolume* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshModifierVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__APPENDMODIFIERVOLUMES_B__76_0_OFFSET))(this, x);
		}

		::System::Boolean _CollectSources_b__77_0(::UnityEngine::AI::NavMeshModifier* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshModifier*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_0_OFFSET))(this, x);
		}

		::System::Boolean _CollectSources_b__77_1(::UnityEngine::AI::NavMeshBuildSource x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshBuildSource))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_1_OFFSET))(this, x);
		}

		::System::Boolean _CollectSources_b__77_2(::UnityEngine::AI::NavMeshBuildSource x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshBuildSource))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_2_OFFSET))(this, x);
		}
	};
}
