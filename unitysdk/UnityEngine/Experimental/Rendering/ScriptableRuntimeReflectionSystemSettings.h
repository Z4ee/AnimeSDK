#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Rendering { class IScriptableRuntimeReflectionSystem; }
namespace UnityEngine::Experimental::Rendering { class ScriptableRuntimeReflectionSystemWrapper; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_GET_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C179050)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SCRIPTINGDIRTYREFLECTIONSYSTEMINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C179080)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SET_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1C178E20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C179090)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ScriptableRuntimeReflectionSystemSettings_TypeDefinitionIndex = 4920;

	class ScriptableRuntimeReflectionSystemSettings : public ::System::Object
	{
	public:
		static ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper** StaticGet_s_Instance()
		{
			return (::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRuntimeReflectionSystemSettings_TypeDefinitionIndex)->GetStaticField(0x37AD0);
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
