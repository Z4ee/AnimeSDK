#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Rendering { class IScriptableRuntimeReflectionSystem; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_GET_IMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1E474370)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_TICKREALTIMEPROBES_OFFSET UNITYSDK_OFFSET(0x1E474390)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_SET_IMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1E474380)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4743C0)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ScriptableRuntimeReflectionSystemWrapper_TypeDefinitionIndex = 6333;

	class ScriptableRuntimeReflectionSystemWrapper : public ::System::Object
	{
	public:
		::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* _implementation_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* get_implementation()
		{
			return ((::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_GET_IMPLEMENTATION_OFFSET))(this);
		}

		::System::Void set_implementation(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_SET_IMPLEMENTATION_OFFSET))(this, value);
		}

		::System::Void Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(::System::Boolean& result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_INTERNAL_SCRIPTABLERUNTIMEREFLECTIONSYSTEMWRAPPER_TICKREALTIMEPROBES_OFFSET))(this, result);
		}
	};
}
