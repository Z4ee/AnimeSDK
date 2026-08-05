#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Data { class DataRow; }

#define SYSTEM_DATA_DATAVIEW_DATAROWREFERENCECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1AED50)
#define SYSTEM_DATA_DATAVIEW_DATAROWREFERENCECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1AED60)
#define SYSTEM_DATA_DATAVIEW_DATAROWREFERENCECOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1AED80)
#define SYSTEM_DATA_DATAVIEW_DATAROWREFERENCECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1AED40)

namespace System::Data
{
	inline static constexpr unsigned int DataView_DataRowReferenceComparer_TypeDefinitionIndex = 39278;

	class DataView_DataRowReferenceComparer : public ::System::Object
	{
	public:
		static ::System::Data::DataView_DataRowReferenceComparer** StaticGet_s_default()
		{
			return (::System::Data::DataView_DataRowReferenceComparer**)Il2CppClass::FromTypeDefinitionIndex(DataView_DataRowReferenceComparer_TypeDefinitionIndex)->GetStaticField(0x2AA90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_DATAROWREFERENCECOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_DATAROWREFERENCECOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Data::DataRow* x, ::System::Data::DataRow* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_DATAROWREFERENCECOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Data::DataRow* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEW_DATAROWREFERENCECOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
