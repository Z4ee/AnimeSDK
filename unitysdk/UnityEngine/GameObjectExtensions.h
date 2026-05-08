#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_GAMEOBJECTEXTENSIONS_CONTAINCAMTRANSPARENTTAG_OFFSET UNITYSDK_OFFSET(0x1A15FD40)
#define UNITYENGINE_GAMEOBJECTEXTENSIONS_GETSCENEPATH_OFFSET UNITYSDK_OFFSET(0x1A15ED80)
#define UNITYENGINE_GAMEOBJECTEXTENSIONS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1A15F1F0)
#define UNITYENGINE_GAMEOBJECTEXTENSIONS_SAFESETLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1A15F4B0)
#define UNITYENGINE_GAMEOBJECTEXTENSIONS_SETSUBLAYER_OFFSET UNITYSDK_OFFSET(0x1A15FBA0)
#define UNITYENGINE_GAMEOBJECTEXTENSIONS_TRYGETSUBLAYER_OFFSET UNITYSDK_OFFSET(0x1A15F8E0)

namespace UnityEngine
{
	inline static constexpr unsigned int GameObjectExtensions_TypeDefinitionIndex = 53441;

	class GameObjectExtensions : public ::System::Object
	{
	public:
		static ::System::String* GetScenePath(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECTEXTENSIONS_GETSCENEPATH_OFFSET))(gameObject);
		}

		static ::System::Void SafeSetActive(::UnityEngine::GameObject* obj, ::System::Boolean enable, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECTEXTENSIONS_SAFESETACTIVE_OFFSET))(obj, enable, outputError);
		}

		static ::System::Void SafeSetLightweightActive(::UnityEngine::GameObject* obj, ::System::Boolean enable, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECTEXTENSIONS_SAFESETLIGHTWEIGHTACTIVE_OFFSET))(obj, enable, outputError);
		}

		static ::System::Boolean TryGetSubLayer(::UnityEngine::GameObject* gameObject, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E& subLayer)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E&))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECTEXTENSIONS_TRYGETSUBLAYER_OFFSET))(gameObject, subLayer);
		}

		static ::System::Void SetSubLayer(::UnityEngine::GameObject* gameObject, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E subLayer)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECTEXTENSIONS_SETSUBLAYER_OFFSET))(gameObject, subLayer);
		}

		static ::System::Boolean ContainCamTransparentTag(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECTEXTENSIONS_CONTAINCAMTRANSPARENTTAG_OFFSET))(gameObject);
		}
	};
}
