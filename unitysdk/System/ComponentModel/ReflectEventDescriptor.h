#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/EventDescriptor.h"

namespace System { class Attribute; }
namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_ADDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D884410)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D884BC0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLEVENTINFOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D884C10)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLMETHODS_OFFSET UNITYSDK_OFFSET(0x1D883BB0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLSINGLEMETHODATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D8850A0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D883BA0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D883B80)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_ISMULTICAST_OFFSET UNITYSDK_OFFSET(0x1D8843B0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_REMOVEEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D8855A0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8839F0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D883AF0)
#define SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D883850)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReflectEventDescriptor_TypeDefinitionIndex = 2970;

	class ReflectEventDescriptor : public ::System::ComponentModel::EventDescriptor
	{
	public:
		::System::Reflection::MethodInfo* removeMethod; // 0x60
		::System::Type* componentClass; // 0x68
		::System::Reflection::MethodInfo* addMethod; // 0x70
		::System::Type* type; // 0x78
		::System::Reflection::EventInfo* realEvent; // 0x80
		::System::Boolean filledMethods; // 0x88

		::System::Void _ctor(::System::Type* componentClass, ::System::String* name, ::System::Type* type, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR__CTOR_OFFSET))(this, componentClass, name, type, attributes);
		}

		::System::Void _ctor_1(::System::Type* componentClass, ::System::Reflection::EventInfo* eventInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR__CTOR_1_OFFSET))(this, componentClass, eventInfo);
		}

		::System::Void _ctor_2(::System::Type* componentType, ::System::ComponentModel::EventDescriptor* oldReflectEventDescriptor, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::ComponentModel::EventDescriptor*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR__CTOR_2_OFFSET))(this, componentType, oldReflectEventDescriptor, attributes);
		}

		::System::Type* get_ComponentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(this);
		}

		::System::Type* get_EventType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsMulticast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_GET_ISMULTICAST_OFFSET))(this);
		}

		::System::Void AddEventHandler(::System::Object* component, ::System::Delegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_ADDEVENTHANDLER_OFFSET))(this, component, value);
		}

		::System::Void FillAttributes(::System::Collections::IList* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLATTRIBUTES_OFFSET))(this, attributes);
		}

		::System::Void FillEventInfoAttribute(::System::Reflection::EventInfo* realEventInfo, ::System::Collections::IList* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::EventInfo*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLEVENTINFOATTRIBUTE_OFFSET))(this, realEventInfo, attributes);
		}

		::System::Void FillMethods()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLMETHODS_OFFSET))(this);
		}

		::System::Void FillSingleMethodAttribute(::System::Reflection::MethodInfo* realMethodInfo, ::System::Collections::IList* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_FILLSINGLEMETHODATTRIBUTE_OFFSET))(this, realMethodInfo, attributes);
		}

		::System::Void RemoveEventHandler(::System::Object* component, ::System::Delegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTEVENTDESCRIPTOR_REMOVEEVENTHANDLER_OFFSET))(this, component, value);
		}
	};
}
