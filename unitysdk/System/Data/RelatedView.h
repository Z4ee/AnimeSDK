#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataKey.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/DataView.h"
#include "unitysdk/System/Data/DataViewRowState.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataRowView; }
namespace System::Data { class IFilter; }

#define SYSTEM_DATA_RELATEDVIEW_ADDNEW_OFFSET UNITYSDK_OFFSET(0x1DB3C0A0)
#define SYSTEM_DATA_RELATEDVIEW_GETFILTER_OFFSET UNITYSDK_OFFSET(0x1DB3C090)
#define SYSTEM_DATA_RELATEDVIEW_GETPARENTVALUES_OFFSET UNITYSDK_OFFSET(0x1DB3BC40)
#define SYSTEM_DATA_RELATEDVIEW_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DB3BD80)
#define SYSTEM_DATA_RELATEDVIEW_SETINDEX_OFFSET UNITYSDK_OFFSET(0x1DB3C220)
#define SYSTEM_DATA_RELATEDVIEW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB3BB20)
#define SYSTEM_DATA_RELATEDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3B9E0)

namespace System::Data
{
	inline static constexpr unsigned int RelatedView_TypeDefinitionIndex = 38671;

	class RelatedView : public ::System::Data::DataView
	{
	public:
		::Il2CppArray<::System::Object*>* _filterValues; // 0xC0
		::System::Data::DataRowView* _parentRowView; // 0xC8
		::System::Nullable_1<::System::Data::DataKey> _parentKey; // 0xD0
		::System::Data::DataKey _childKey; // 0xE0

		::System::Void _ctor(::Il2CppArray<::System::Data::DataColumn*>* columns, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Data::DataColumn*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW__CTOR_OFFSET))(this, columns, values);
		}

		::System::Void _ctor_1(::System::Data::DataRowView* parentRowView, ::System::Data::DataKey parentKey, ::Il2CppArray<::System::Data::DataColumn*>* childKeyColumns)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRowView*, ::System::Data::DataKey, ::Il2CppArray<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW__CTOR_1_OFFSET))(this, parentRowView, parentKey, childKeyColumns);
		}

		::Il2CppArray<::System::Object*>* GetParentValues()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_GETPARENTVALUES_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_INVOKE_OFFSET))(this, row, version);
		}

		::System::Data::IFilter* GetFilter()
		{
			return ((::System::Data::IFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_GETFILTER_OFFSET))(this);
		}

		::System::Data::DataRowView* AddNew()
		{
			return ((::System::Data::DataRowView*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_ADDNEW_OFFSET))(this);
		}

		::System::Void SetIndex(::System::String* newSort, ::System::Data::DataViewRowState newRowStates, ::System::Data::IFilter* newRowFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Data::DataViewRowState, ::System::Data::IFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_SETINDEX_OFFSET))(this, newSort, newRowStates, newRowFilter);
		}
	};
}
