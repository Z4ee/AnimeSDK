#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/RedirectType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_GETGAMEOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x1B0BBF90)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_GETPATH_OFFSET UNITYSDK_OFFSET(0x1B0BBCA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B0BBB30)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_LOAD_OFFSET UNITYSDK_OFFSET(0x1B0BBA70)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_SAVE_OFFSET UNITYSDK_OFFSET(0x1B0BB780)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B0BB7D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BC060)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RedirectObject_TypeDefinitionIndex = 27142;

	class RedirectObject : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::RedirectType type; // 0x10
		::System::String* componentType; // 0x18
		::System::String* path; // 0x20
		::UnityEngine::Object* target; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Save()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_SAVE_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_LOAD_OFFSET))(this);
		}

		::UnityEngine::Object* get_Value()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_SET_VALUE_OFFSET))(this, value);
		}

		static ::System::String* GetPath(::UnityEngine::Transform* current)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_GETPATH_OFFSET))(current);
		}

		::UnityEngine::GameObject* GetGameObjectValue()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTOBJECT_GETGAMEOBJECTVALUE_OFFSET))(this);
		}
	};
}
