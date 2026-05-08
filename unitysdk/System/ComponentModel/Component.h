#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class EventHandlerList; }
namespace System::ComponentModel { class IContainer; }
namespace System::ComponentModel { class ISite; }

#define SYSTEM_COMPONENTMODEL_COMPONENT_ADD_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1A23E5B0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A23E970)
#define SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A23E8C0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A23E520)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1A23ED40)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A23E5A0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTS_OFFSET UNITYSDK_OFFSET(0x1A23E590)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x1A23EC60)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_DESIGNMODE_OFFSET UNITYSDK_OFFSET(0x1A23EE20)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1A23E730)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_SITE_OFFSET UNITYSDK_OFFSET(0x1A23E8A0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_REMOVE_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1A23E790)
#define SYSTEM_COMPONENTMODEL_COMPONENT_SET_SITE_OFFSET UNITYSDK_OFFSET(0x1A23E8B0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A23EF00)
#define SYSTEM_COMPONENTMODEL_COMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A23F060)
#define SYSTEM_COMPONENTMODEL_COMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23F050)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Component_TypeDefinitionIndex = 2839;

	class Component : public ::System::MarshalByRefObject
	{
	public:
		static ::System::Object** StaticGet_EventDisposed()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Component_TypeDefinitionIndex)->GetStaticField(0x34B0);
		}
		::System::ComponentModel::EventHandlerList* events; // 0x18
		::System::ComponentModel::ISite* site; // 0x20

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

		::System::Void add_Disposed(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_ADD_DISPOSED_OFFSET))(this, value);
		}

		::System::Void remove_Disposed(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_REMOVE_DISPOSED_OFFSET))(this, value);
		}

		::System::ComponentModel::EventHandlerList* get_Events()
		{
			return ((::System::ComponentModel::EventHandlerList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_EVENTS_OFFSET))(this);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return ((::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_SITE_OFFSET))(this);
		}

		::System::Void set_Site(::System::ComponentModel::ISite* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ISite*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_SET_SITE_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::ComponentModel::IContainer* get_Container()
		{
			return ((::System::ComponentModel::IContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_CONTAINER_OFFSET))(this);
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
