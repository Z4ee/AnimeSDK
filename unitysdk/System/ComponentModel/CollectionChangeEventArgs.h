#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/CollectionChangeAction.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1DAB0210)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS_GET_ELEMENT_OFFSET UNITYSDK_OFFSET(0x1DAB0220)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB01B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CollectionChangeEventArgs_TypeDefinitionIndex = 2833;

	class CollectionChangeEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* element; // 0x10
		::System::ComponentModel::CollectionChangeAction action; // 0x18

		::System::Void _ctor(::System::ComponentModel::CollectionChangeAction action, ::System::Object* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeAction, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS__CTOR_OFFSET))(this, action, element);
		}

		::System::ComponentModel::CollectionChangeAction get_Action()
		{
			return ((::System::ComponentModel::CollectionChangeAction(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS_GET_ACTION_OFFSET))(this);
		}

		::System::Object* get_Element()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS_GET_ELEMENT_OFFSET))(this);
		}
	};
}
