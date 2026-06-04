#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ListChangedType.h"
#include "unitysdk/System/EventArgs.h"

#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF2E450)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2E410)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListChangedEventArgs_TypeDefinitionIndex = 2599;

	class ListChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Int32 newIndex; // 0x10
		::System::ComponentModel::ListChangedType listChangedType; // 0x14
		::System::Int32 oldIndex; // 0x18

		::System::Void _ctor(::System::ComponentModel::ListChangedType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::ComponentModel::ListChangedType a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS__CTOR_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
