#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Rendering { class IScriptableRuntimeReflectionSystem; }
namespace UnityEngine::Experimental::Rendering { class ScriptableRuntimeReflectionSystemWrapper; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_GET_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B294B90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SCRIPTINGDIRTYREFLECTIONSYSTEMINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B294BC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SET_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1B2949C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B294BD0)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ScriptableRuntimeReflectionSystemSettings_TypeDefinitionIndex = 4915;

	class ScriptableRuntimeReflectionSystemSettings : public ::System::Object
	{
	public:
		static ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper** StaticGet_s_Instance()
		{
			return (::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRuntimeReflectionSystemSettings_TypeDefinitionIndex)->GetStaticField(0x2F0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS__CCTOR_OFFSET))();
		}

		static ::System::Void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SET_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SYSTEM_OFFSET))(a1);
		}

		static ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* get_Internal_ScriptableRuntimeReflectionSystemSettings_instance()
		{
			return ((::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_GET_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_INSTANCE_OFFSET))();
		}

		static ::System::Void ScriptingDirtyReflectionSystemInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SCRIPTINGDIRTYREFLECTIONSYSTEMINSTANCE_OFFSET))();
		}
	};
}
