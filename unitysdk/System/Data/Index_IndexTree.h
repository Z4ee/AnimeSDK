#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/RBTree_1.h"

namespace System::Data { class Index; }

#define SYSTEM_DATA_INDEX_INDEXTREE_COMPARENODE_OFFSET UNITYSDK_OFFSET(0x1EAB1940)
#define SYSTEM_DATA_INDEX_INDEXTREE_COMPARESATELITETREENODE_OFFSET UNITYSDK_OFFSET(0x1EAB1960)
#define SYSTEM_DATA_INDEX_INDEXTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB1910)

namespace System::Data
{
	inline static constexpr unsigned int Index_IndexTree_TypeDefinitionIndex = 39340;

	class Index_IndexTree : public ::System::Data::RBTree_1<::System::Int32>
	{
	public:
		::System::Data::Index* _index; // 0x40

		::System::Void _ctor(::System::Data::Index* index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::Index*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_INDEXTREE__CTOR_OFFSET))(this, index);
		}

		::System::Int32 CompareNode(::System::Int32 record1, ::System::Int32 record2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_INDEXTREE_COMPARENODE_OFFSET))(this, record1, record2);
		}

		::System::Int32 CompareSateliteTreeNode(::System::Int32 record1, ::System::Int32 record2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX_INDEXTREE_COMPARESATELITETREENODE_OFFSET))(this, record1, record2);
		}
	};
}
