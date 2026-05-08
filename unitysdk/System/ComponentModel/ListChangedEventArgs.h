#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ListChangedType.h"
#include "unitysdk/System/EventArgs.h"

namespace System::ComponentModel { class PropertyDescriptor; }

#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_LISTCHANGEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A316EC0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_NEWINDEX_OFFSET UNITYSDK_OFFSET(0x1A316ED0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_OLDINDEX_OFFSET UNITYSDK_OFFSET(0x1A316EE0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_PROPERTYDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A316EF0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A316DF0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A316E60)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A316D80)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A316D10)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListChangedEventArgs_TypeDefinitionIndex = 2936;

	class ListChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::ComponentModel::PropertyDescriptor* propDesc; // 0x10
		::System::ComponentModel::ListChangedType listChangedType; // 0x18
		::System::Int32 oldIndex; // 0x1C
		::System::Int32 newIndex; // 0x20

		::System::Void _ctor(::System::ComponentModel::ListChangedType listChangedType, ::System::Int32 newIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_OFFSET))(this, listChangedType, newIndex);
		}

		::System::Void _ctor_1(::System::ComponentModel::ListChangedType listChangedType, ::System::Int32 newIndex, ::System::ComponentModel::PropertyDescriptor* propDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Int32, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_1_OFFSET))(this, listChangedType, newIndex, propDesc);
		}

		::System::Void _ctor_2(::System::ComponentModel::ListChangedType listChangedType, ::System::ComponentModel::PropertyDescriptor* propDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::ComponentModel::PropertyDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_2_OFFSET))(this, listChangedType, propDesc);
		}

		::System::Void _ctor_3(::System::ComponentModel::ListChangedType listChangedType, ::System::Int32 newIndex, ::System::Int32 oldIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_3_OFFSET))(this, listChangedType, newIndex, oldIndex);
		}

		::System::ComponentModel::ListChangedType get_ListChangedType()
		{
			return ((::System::ComponentModel::ListChangedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_LISTCHANGEDTYPE_OFFSET))(this);
		}

		::System::Int32 get_NewIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_NEWINDEX_OFFSET))(this);
		}

		::System::Int32 get_OldIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_OLDINDEX_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptor* get_PropertyDescriptor()
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_PROPERTYDESCRIPTOR_OFFSET))(this);
		}
	};
}
