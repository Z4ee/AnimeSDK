#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/RBTree_1.h"

namespace System::Data { class DataRow; }

#define SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE_COMPARENODE_OFFSET UNITYSDK_OFFSET(0x1D8A0300)
#define SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE_COMPARESATELITETREENODE_OFFSET UNITYSDK_OFFSET(0x1D8A0340)
#define SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A0290)

namespace System::Data
{
	inline static constexpr unsigned int DataRowCollection_DataRowTree_TypeDefinitionIndex = 38597;

	class DataRowCollection_DataRowTree : public ::System::Data::RBTree_1<::System::Data::DataRow*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareNode(::System::Data::DataRow* record1, ::System::Data::DataRow* record2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE_COMPARENODE_OFFSET))(this, record1, record2);
		}

		::System::Int32 CompareSateliteTreeNode(::System::Data::DataRow* record1, ::System::Data::DataRow* record2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE_COMPARESATELITETREENODE_OFFSET))(this, record1, record2);
		}
	};
}
