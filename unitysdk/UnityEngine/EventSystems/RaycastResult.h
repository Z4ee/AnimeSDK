#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseRaycaster; }

#define UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0x39E7A20)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x39E79F0)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x164FF0)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39E7A70)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int RaycastResult_TypeDefinitionIndex = 6109;

	struct alignas(8) RaycastResult
	{
		::UnityEngine::GameObject* m_GameObject; // 0x10
		::UnityEngine::EventSystems::BaseRaycaster* module; // 0x18
		::System::Single distance; // 0x20
		::System::Single index; // 0x24
		::System::Int32 depth; // 0x28
		::System::Int32 sortingLayer; // 0x2C
		::System::Int32 sortingOrder; // 0x30
		::UnityEngine::Vector3 worldPosition; // 0x34
		::UnityEngine::Vector3 worldNormal; // 0x40
		::UnityEngine::Vector2 screenPosition; // 0x4C
		::System::Int32 displayIndex; // 0x54

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_gameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_SET_GAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_CLEAR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_TOSTRING_OFFSET))(this);
		}
	};
}
