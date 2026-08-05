#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Timeline/TrackBindingFlags.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1FB23350)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_GET_FIRSTTYPE_OFFSET UNITYSDK_OFFSET(0x1FB229E0)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_GET_ISNULLTYPE_OFFSET UNITYSDK_OFFSET(0x1FB23530)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_HASRELATIVECOMP_OFFSET UNITYSDK_OFFSET(0x1FB23020)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_ISASSIGNABLEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1FB22D40)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_ISASSIGNABLEFROMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1FB22EB0)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_ISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0x1FB22C30)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_ISINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x1FB23210)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB22AF0)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FB22B90)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB22A50)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackBindingTypeAttribute_TypeDefinitionIndex = 33041;

	class TrackBindingTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Collections::Generic::List_1<::System::Type*>* types; // 0x10
		::UnityEngine::Timeline::TrackBindingFlags flags; // 0x18

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_OFFSET))(this, type);
		}

		::System::Void _ctor_1(::System::Type* type, ::UnityEngine::Timeline::TrackBindingFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::UnityEngine::Timeline::TrackBindingFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_1_OFFSET))(this, type, flags);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_2_OFFSET))(this, types);
		}

		::System::Type* get_firstType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_GET_FIRSTTYPE_OFFSET))(this);
		}

		::System::Boolean IsAssignableFrom(::System::Type* checkType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_ISASSIGNABLEFROM_OFFSET))(this, checkType);
		}

		::System::Boolean IsAssignableFromComp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_ISASSIGNABLEFROMCOMP_OFFSET))(this);
		}

		::System::Boolean IsAssignableFromGameObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_ISASSIGNABLEFROMGAMEOBJECT_OFFSET))(this);
		}

		::System::Boolean HasRelativeComp(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_HASRELATIVECOMP_OFFSET))(this, gameObject);
		}

		::System::Boolean IsInstanceOfType(::UnityEngine::Object* gameObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_ISINSTANCEOFTYPE_OFFSET))(this, gameObject);
		}

		::UnityEngine::Component* GetComponent(::UnityEngine::GameObject* gameObject)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_GETCOMPONENT_OFFSET))(this, gameObject);
		}

		::System::Boolean get_IsNullType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_GET_ISNULLTYPE_OFFSET))(this);
		}
	};
}
