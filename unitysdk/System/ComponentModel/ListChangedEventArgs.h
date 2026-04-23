#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ListChangedType.h"
#include "unitysdk/System/EventArgs.h"

#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0C5080)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C5040)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListChangedEventArgs_TypeDefinitionIndex = 2599;

	class ListChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::ComponentModel::ListChangedType listChangedType; // 0x10
		::System::Int32 newIndex; // 0x14
		::System::Int32 oldIndex; // 0x18

		::System::Void _ctor(::System::ComponentModel::ListChangedType listChangedType, ::System::Int32 newIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_OFFSET))(this, listChangedType, newIndex);
		}

		::System::Void _ctor_1(::System::ComponentModel::ListChangedType listChangedType, ::System::Int32 newIndex, ::System::Int32 oldIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_1_OFFSET))(this, listChangedType, newIndex, oldIndex);
		}
	};
}
