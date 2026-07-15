#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Rendering/DebugActionRepeatMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RENDERING_DEBUGACTIONDESC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0E5290)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugActionDesc_TypeDefinitionIndex = 34082;

	class DebugActionDesc : public ::System::Object
	{
	public:
		::System::String* axisTrigger; // 0x10
		::System::Collections::Generic::List_1<::Il2CppArray<::System::String*>*>* buttonTriggerList; // 0x18
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::KeyCode>*>* keyTriggerList; // 0x20
		::UnityEngine::Rendering::DebugActionRepeatMode repeatMode; // 0x28
		::System::Single repeatDelay; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONDESC__CTOR_OFFSET))(this);
		}
	};
}
