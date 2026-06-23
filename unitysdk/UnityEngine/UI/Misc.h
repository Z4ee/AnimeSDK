#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_UI_MISC_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1DCE3D90)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Misc_TypeDefinitionIndex = 18930;

	class Misc : public ::System::Object
	{
	public:
		static ::System::Void DestroyImmediate(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MISC_DESTROYIMMEDIATE_OFFSET))(obj);
		}
	};
}
