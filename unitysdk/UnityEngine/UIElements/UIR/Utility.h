#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEENGINEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EDFE990)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEFLUSHPENDINGRESOURCES_OFFSET UNITYSDK_OFFSET(0x1EDFEA40)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEGRAPHICSRESOURCESRECREATE_OFFSET UNITYSDK_OFFSET(0x1EDFE900)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDFEAD0)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int Utility_TypeDefinitionIndex = 6000;

	class Utility : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_FlushPendingResources()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Utility_TypeDefinitionIndex)->GetStaticField(0x1A570);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet_GraphicsResourcesRecreate()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utility_TypeDefinitionIndex)->GetStaticField(0x1A578);
		}
		static ::System::Action** StaticGet_EngineUpdate()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Utility_TypeDefinitionIndex)->GetStaticField(0x1A580);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_s_MarkerRaiseEngineUpdate()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Utility_TypeDefinitionIndex)->GetStaticField(0x9440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void RaiseGraphicsResourcesRecreate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEGRAPHICSRESOURCESRECREATE_OFFSET))(a1);
		}

		static ::System::Void RaiseEngineUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEENGINEUPDATE_OFFSET))();
		}

		static ::System::Void RaiseFlushPendingResources()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEFLUSHPENDINGRESOURCES_OFFSET))();
		}
	};
}
