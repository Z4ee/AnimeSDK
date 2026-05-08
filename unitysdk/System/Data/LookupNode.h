#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/ExpressionNode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRelation; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_LOOKUPNODE_BIND_OFFSET UNITYSDK_OFFSET(0x1BB7C170)
#define SYSTEM_DATA_LOOKUPNODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x1BB7C660)
#define SYSTEM_DATA_LOOKUPNODE_EVAL_1_OFFSET UNITYSDK_OFFSET(0x1BB7C420)
#define SYSTEM_DATA_LOOKUPNODE_EVAL_2_OFFSET UNITYSDK_OFFSET(0x1BB7C5D0)
#define SYSTEM_DATA_LOOKUPNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x1BB7C3D0)
#define SYSTEM_DATA_LOOKUPNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1BB7C640)
#define SYSTEM_DATA_LOOKUPNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1BB7C650)
#define SYSTEM_DATA_LOOKUPNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x1BB7C620)
#define SYSTEM_DATA_LOOKUPNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x1BB7C630)
#define SYSTEM_DATA_LOOKUPNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1BB7C670)
#define SYSTEM_DATA_LOOKUPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7C160)

namespace System::Data
{
	inline static constexpr unsigned int LookupNode_TypeDefinitionIndex = 37031;

	class LookupNode : public ::System::Data::ExpressionNode
	{
	public:
		::System::String* _relationName; // 0x18
		::System::Data::DataColumn* _column; // 0x20
		::System::Data::DataRelation* _relation; // 0x28
		::System::String* _columnName; // 0x30

		::System::Void _ctor(::System::Data::DataTable* table, ::System::String* columnName, ::System::String* relationName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE__CTOR_OFFSET))(this, table, columnName, relationName);
		}

		::System::Void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_BIND_OFFSET))(this, table, list);
		}

		::System::Object* Eval()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_EVAL_OFFSET))(this);
		}

		::System::Object* Eval_1(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_EVAL_1_OFFSET))(this, row, version);
		}

		::System::Object* Eval_2(::Il2CppArray<::System::Int32>* recordNos)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_EVAL_2_OFFSET))(this, recordNos);
		}

		::System::Boolean IsConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_ISCONSTANT_OFFSET))(this);
		}

		::System::Boolean IsTableConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_ISTABLECONSTANT_OFFSET))(this);
		}

		::System::Boolean HasLocalAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_HASLOCALAGGREGATE_OFFSET))(this);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_HASREMOTEAGGREGATE_OFFSET))(this);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* column)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_DEPENDSON_OFFSET))(this, column);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_OPTIMIZE_OFFSET))(this);
		}
	};
}
