#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/SendMessageOptions.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D29C340)
#define UNITYENGINE_COMPONENT_COMPARETAG_OFFSET UNITYSDK_OFFSET(0x1D29C2E0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0x1D29C1A0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D29C1F0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0x1D29C230)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSFORLISTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D29C260)
#define UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1D29C270)
#define UNITYENGINE_COMPONENT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D29C170)
#define UNITYENGINE_COMPONENT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D29C160)
#define UNITYENGINE_COMPONENT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1D29C280)
#define UNITYENGINE_COMPONENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D29C150)
#define UNITYENGINE_COMPONENT_SENDMESSAGE__1_OFFSET UNITYSDK_OFFSET(0x1D29C330)
#define UNITYENGINE_COMPONENT_SENDMESSAGE__2_OFFSET UNITYSDK_OFFSET(0x1D29C320)
#define UNITYENGINE_COMPONENT_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x1D29C310)
#define UNITYENGINE_COMPONENT_SET_TAG_OFFSET UNITYSDK_OFFSET(0x1D29C2B0)
#define UNITYENGINE_COMPONENT_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D29C1B0)
#define UNITYENGINE_COMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29C350)

namespace UnityEngine
{
	inline static constexpr unsigned int Component_TypeDefinitionIndex = 5336;

	class Component : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GET_GAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::Component* GetComponent(::System::Type* type)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENT_OFFSET))(this, type);
		}

		::System::Void GetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTFASTPATH_OFFSET))(this, type, oneFurtherThanResultValue);
		}

		::System::Boolean TryGetComponent(::System::Type* type, ::UnityEngine::Component*& component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Component*&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_TRYGETCOMPONENT_OFFSET))(this, type, component);
		}

		::UnityEngine::Component* GetComponentInChildren(::System::Type* t, ::System::Boolean includeInactive)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET))(this, t, includeInactive);
		}

		::UnityEngine::Component* GetComponentInParent(::System::Type* t)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET))(this, t);
		}

		::System::Void GetComponentsForListInternal(::System::Type* searchType, ::System::Object* resultList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSFORLISTINTERNAL_OFFSET))(this, searchType, resultList);
		}

		::System::Void GetComponents(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* results)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET))(this, type, results);
		}

		::System::String* get_tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GET_TAG_OFFSET))(this);
		}

		::System::Void set_tag(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SET_TAG_OFFSET))(this, value);
		}

		::System::Boolean CompareTag(::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_COMPARETAG_OFFSET))(this, tag);
		}

		::System::Void SendMessage_(::System::String* methodName, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE__OFFSET))(this, methodName, value);
		}

		::System::Void SendMessage__1(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE__1_OFFSET))(this, methodName);
		}

		::System::Void SendMessage__2(::System::String* methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE__2_OFFSET))(this, methodName, value, options);
		}

		::System::Void BroadcastMessage(::System::String* methodName, ::System::Object* parameter, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET))(this, methodName, parameter, options);
		}
	};
}
