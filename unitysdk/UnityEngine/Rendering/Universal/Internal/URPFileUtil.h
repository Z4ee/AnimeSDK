#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_URPFILEUTIL_GETACTIVESCENELIGHTFOLDER_OFFSET UNITYSDK_OFFSET(0xF7FA610)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_URPFILEUTIL_GETSCENEFOLDER_OFFSET UNITYSDK_OFFSET(0xF7FA590)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_URPFILEUTIL_GETTARGETSCENELIGHTFOLDER_OFFSET UNITYSDK_OFFSET(0xF7FA840)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int URPFileUtil_TypeDefinitionIndex = 30429;

	class URPFileUtil : public ::System::Object
	{
	public:
		static ::System::String* GetSceneFolder(::System::String* fileName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_URPFILEUTIL_GETSCENEFOLDER_OFFSET))(fileName);
		}

		static ::System::String* GetActiveSceneLightFolder(::System::Boolean createIfNotExist)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_URPFILEUTIL_GETACTIVESCENELIGHTFOLDER_OFFSET))(createIfNotExist);
		}

		static ::System::String* GetTargetSceneLightFolder(::UnityEngine::SceneManagement::Scene activeScene, ::System::Boolean createIfNotExist)
		{
			return ((::System::String*(*)(::UnityEngine::SceneManagement::Scene, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_URPFILEUTIL_GETTARGETSCENELIGHTFOLDER_OFFSET))(activeScene, createIfNotExist);
		}
	};
}
