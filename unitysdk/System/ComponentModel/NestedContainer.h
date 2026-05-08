#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Container.h"

namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class IComponent; }
namespace System::ComponentModel { class ISite; }

#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_CREATESITE_OFFSET UNITYSDK_OFFSET(0x1A3173B0)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A317440)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1A317560)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0x1A317040)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1A317030)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_ONOWNERDISPOSED_OFFSET UNITYSDK_OFFSET(0x1A3175D0)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A316F00)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NestedContainer_TypeDefinitionIndex = 2953;

	class NestedContainer : public ::System::ComponentModel::Container
	{
	public:
		::System::ComponentModel::IComponent* _owner; // 0x38

		::System::Void _ctor(::System::ComponentModel::IComponent* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER__CTOR_OFFSET))(this, owner);
		}

		::System::ComponentModel::IComponent* get_Owner()
		{
			return ((::System::ComponentModel::IComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GET_OWNER_OFFSET))(this);
		}

		::System::String* get_OwnerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GET_OWNERNAME_OFFSET))(this);
		}

		::System::ComponentModel::ISite* CreateSite(::System::ComponentModel::IComponent* component, ::System::String* name)
		{
			return ((::System::ComponentModel::ISite*(*)(::PVOID, ::System::ComponentModel::IComponent*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_CREATESITE_OFFSET))(this, component, name);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Object* GetService(::System::Type* service)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GETSERVICE_OFFSET))(this, service);
		}

		::System::Void OnOwnerDisposed(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_ONOWNERDISPOSED_OFFSET))(this, sender, e);
		}
	};
}
