#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_GAMEOBJECTEXTENSIONS_CONTAINCAMTRANSPARENTTAG_OFFSET UNITYSDK_OFFSET(0x1A0EF870)
#define UNITYENGINE_GAMEOBJECTEXTENSIONS_GETSCENEPATH_OFFSET UNITYSDK_OFFSET(0x1A0EEA20)
#define UNITYENGINE_GAMEOBJECTEXTENSIONS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1A0EEE90)
#define UNITYENGINE_GAMEOBJECTEXTENSIONS_SAFESETLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1A0EF150)
#define UNITYENGINE_GAMEOBJECTEXTENSIONS_SETSUBLAYER_OFFSET UNITYSDK_OFFSET(0x1A0EF6D0)
#define UNITYENGINE_GAMEOBJECTEXTENSIONS_TRYGETSUBLAYER_OFFSET UNITYSDK_OFFSET(0x1A0EF410)

namespace UnityEngine
{
	inline static constexpr unsigned int GameObjectExtensions_TypeDefinitionIndex = 86787;

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

		static ::System::Boolean TryGetSubLayer(::UnityEngine::GameObject* gameObject, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3& subLayer)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECTEXTENSIONS_TRYGETSUBLAYER_OFFSET))(gameObject, subLayer);
		}

		static ::System::Void SetSubLayer(::UnityEngine::GameObject* gameObject, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 subLayer)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECTEXTENSIONS_SETSUBLAYER_OFFSET))(gameObject, subLayer);
		}

		static ::System::Boolean ContainCamTransparentTag(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECTEXTENSIONS_CONTAINCAMTRANSPARENTTAG_OFFSET))(gameObject);
		}
	};
}
