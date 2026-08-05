#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_SUBSYSTEMMANAGER_INTERNAL_RELOADSUBSYSTEMSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FC591B0)
#define UNITYENGINE_SUBSYSTEMMANAGER_INTERNAL_RELOADSUBSYSTEMSSTARTED_OFFSET UNITYSDK_OFFSET(0x1FC59100)
#define UNITYENGINE_SUBSYSTEMMANAGER_REPORTSINGLESUBSYSTEMANALYTICS_OFFSET UNITYSDK_OFFSET(0x1FC585B0)
#define UNITYENGINE_SUBSYSTEMMANAGER_STATICCONSTRUCTSCRIPTINGCLASSMAP_OFFSET UNITYSDK_OFFSET(0x1FC590F0)
#define UNITYENGINE_SUBSYSTEMMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC590E0)

namespace UnityEngine
{
	inline static constexpr unsigned int SubsystemManager_TypeDefinitionIndex = 19177;

	class SubsystemManager : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_reloadSubsytemsStarted()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(SubsystemManager_TypeDefinitionIndex)->GetStaticField(0x86B0);
		}
		static ::System::Action** StaticGet_reloadSubsytemsCompleted()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(SubsystemManager_TypeDefinitionIndex)->GetStaticField(0x86B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void ReportSingleSubsystemAnalytics(::System::String* id)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_REPORTSINGLESUBSYSTEMANALYTICS_OFFSET))(id);
		}

		static ::System::Void StaticConstructScriptingClassMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_STATICCONSTRUCTSCRIPTINGCLASSMAP_OFFSET))();
		}

		static ::System::Void Internal_ReloadSubsystemsStarted()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_INTERNAL_RELOADSUBSYSTEMSSTARTED_OFFSET))();
		}

		static ::System::Void Internal_ReloadSubsystemsCompleted()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_INTERNAL_RELOADSUBSYSTEMSCOMPLETED_OFFSET))();
		}
	};
}
