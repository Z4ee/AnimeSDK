#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class EventHandlerList; }
namespace System::ComponentModel { class ISite; }

#define SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A0BDEB0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0BDE60)
#define SYSTEM_COMPONENTMODEL_COMPONENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A0BDDC0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1A0BE1D0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A0BDE40)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTS_OFFSET UNITYSDK_OFFSET(0x1A0BDE30)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_DESIGNMODE_OFFSET UNITYSDK_OFFSET(0x1A0BE2B0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_SITE_OFFSET UNITYSDK_OFFSET(0x1A0BDE50)
#define SYSTEM_COMPONENTMODEL_COMPONENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0BE350)
#define SYSTEM_COMPONENTMODEL_COMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0BE4B0)
#define SYSTEM_COMPONENTMODEL_COMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BE4A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Component_TypeDefinitionIndex = 2559;

	class Component : public ::System::MarshalByRefObject
	{
	public:
		static ::System::Object** StaticGet_EventDisposed()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Component_TypeDefinitionIndex)->GetStaticField(0x12130);
		}
		::System::ComponentModel::ISite* site; // 0x18
		::System::ComponentModel::EventHandlerList* events; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_CanRaiseEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTS_OFFSET))(this);
		}

		::System::Boolean get_CanRaiseEventsInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTSINTERNAL_OFFSET))(this);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return ((::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_SITE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Object* GetService(::System::Type* service)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GETSERVICE_OFFSET))(this, service);
		}

		::System::Boolean get_DesignMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_DESIGNMODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_TOSTRING_OFFSET))(this);
		}
	};
}
