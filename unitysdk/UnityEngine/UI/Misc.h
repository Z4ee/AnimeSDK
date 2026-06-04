#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_UI_MISC_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1B3CD310)
#define UNITYENGINE_UI_MISC_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B3CD290)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Misc_TypeDefinitionIndex = 5953;

	class Misc : public ::System::Object
	{
	public:
		static ::System::Void Destroy(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MISC_DESTROY_OFFSET))(a1);
		}

		static ::System::Void DestroyImmediate(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MISC_DESTROYIMMEDIATE_OFFSET))(a1);
		}
	};
}
