#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class Container; }
namespace System::ComponentModel { class IComponent; }
namespace System::ComponentModel { class IContainer; }

#define SYSTEM_COMPONENTMODEL_CONTAINER_SITE_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1C864190)
#define SYSTEM_COMPONENTMODEL_CONTAINER_SITE_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x1C864170)
#define SYSTEM_COMPONENTMODEL_CONTAINER_SITE_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x1C864180)
#define SYSTEM_COMPONENTMODEL_CONTAINER_SITE_GET_DESIGNMODE_OFFSET UNITYSDK_OFFSET(0x1C864200)
#define SYSTEM_COMPONENTMODEL_CONTAINER_SITE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C864210)
#define SYSTEM_COMPONENTMODEL_CONTAINER_SITE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C864220)
#define SYSTEM_COMPONENTMODEL_CONTAINER_SITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C864160)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Container_Site_TypeDefinitionIndex = 2843;

	class Container_Site : public ::System::Object
	{
	public:
		::System::ComponentModel::IComponent* component; // 0x10
		::System::ComponentModel::Container* container; // 0x18
		::System::String* name; // 0x20

		::System::Void _ctor(::System::ComponentModel::IComponent* component, ::System::ComponentModel::Container* container, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*, ::System::ComponentModel::Container*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_SITE__CTOR_OFFSET))(this, component, container, name);
		}

		::System::ComponentModel::IComponent* get_Component()
		{
			return ((::System::ComponentModel::IComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_SITE_GET_COMPONENT_OFFSET))(this);
		}

		::System::ComponentModel::IContainer* get_Container()
		{
			return ((::System::ComponentModel::IContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_SITE_GET_CONTAINER_OFFSET))(this);
		}

		::System::Object* GetService(::System::Type* service)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_SITE_GETSERVICE_OFFSET))(this, service);
		}

		::System::Boolean get_DesignMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_SITE_GET_DESIGNMODE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_SITE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_SITE_SET_NAME_OFFSET))(this, value);
		}
	};
}
