#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_UI_MISC_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1A57F450)
#define UNITYENGINE_UI_MISC_DESTROY_OFFSET UNITYSDK_OFFSET(0x1A57F3D0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Misc_TypeDefinitionIndex = 5676;

	class Misc : public ::System::Object
	{
	public:
		static ::System::Void Destroy(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MISC_DESTROY_OFFSET))(obj);
		}

		static ::System::Void DestroyImmediate(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MISC_DESTROYIMMEDIATE_OFFSET))(obj);
		}
	};
}
