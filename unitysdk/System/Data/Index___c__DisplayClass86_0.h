#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ListChangedType.h"
#include "unitysdk/System/Object.h"

namespace System::Data { class DataRow; }
namespace System::Data { class DataViewListener; }

#define SYSTEM_DATA_INDEX___C__DISPLAYCLASS86_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0B6D80)
#define SYSTEM_DATA_INDEX___C__DISPLAYCLASS86_0__MAINTAINDATAVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1F0B6D90)

namespace System::Data
{
	inline static constexpr unsigned int Index___c__DisplayClass86_0_TypeDefinitionIndex = 39342;

	class Index___c__DisplayClass86_0 : public ::System::Object
	{
	public:
		::System::ComponentModel::ListChangedType changedType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX___C__DISPLAYCLASS86_0__CTOR_OFFSET))(this);
		}

		::System::Void _MaintainDataView_b__0(::System::Data::DataViewListener* listener, ::System::ComponentModel::ListChangedType type, ::System::Data::DataRow* row, ::System::Boolean track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedType, ::System::Data::DataRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX___C__DISPLAYCLASS86_0__MAINTAINDATAVIEW_B__0_OFFSET))(this, listener, type, row, track);
		}
	};
}
