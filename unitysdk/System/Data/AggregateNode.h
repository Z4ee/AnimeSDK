#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/Aggregate.h"
#include "unitysdk/System/Data/AggregateType.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/ExpressionNode.h"
#include "unitysdk/System/Data/FunctionId.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRelation; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_AGGREGATENODE_BIND_1_OFFSET UNITYSDK_OFFSET(0x1EC164E0)
#define SYSTEM_DATA_AGGREGATENODE_BIND_OFFSET UNITYSDK_OFFSET(0x1EC16200)
#define SYSTEM_DATA_AGGREGATENODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x1EC16C70)
#define SYSTEM_DATA_AGGREGATENODE_EVAL_1_OFFSET UNITYSDK_OFFSET(0x1EC166B0)
#define SYSTEM_DATA_AGGREGATENODE_EVAL_2_OFFSET UNITYSDK_OFFSET(0x1EC16B00)
#define SYSTEM_DATA_AGGREGATENODE_EVAL_OFFSET UNITYSDK_OFFSET(0x1EC166A0)
#define SYSTEM_DATA_AGGREGATENODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1EC16C50)
#define SYSTEM_DATA_AGGREGATENODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1EC16C60)
#define SYSTEM_DATA_AGGREGATENODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x1EC16C30)
#define SYSTEM_DATA_AGGREGATENODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x1EC16C40)
#define SYSTEM_DATA_AGGREGATENODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1EC16CC0)
#define SYSTEM_DATA_AGGREGATENODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC16140)
#define SYSTEM_DATA_AGGREGATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC16120)

namespace System::Data
{
	inline static constexpr unsigned int AggregateNode_TypeDefinitionIndex = 39288;

	class AggregateNode : public ::System::Data::ExpressionNode
	{
	public:
		::System::Data::DataTable* _childTable; // 0x18
		::System::Data::DataRelation* _relation; // 0x20
		::System::Data::DataColumn* _column; // 0x28
		::System::String* _relationName; // 0x30
		::System::String* _columnName; // 0x38
		::System::Data::AggregateType _type; // 0x40
		::System::Boolean _local; // 0x44
		::System::Data::Aggregate _aggregate; // 0x48

		::System::Void _ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::System::String* columnName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Data::FunctionId, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE__CTOR_OFFSET))(this, table, aggregateType, columnName);
		}

		::System::Void _ctor_1(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::System::String* columnName, ::System::Boolean local, ::System::String* relationName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Data::FunctionId, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE__CTOR_1_OFFSET))(this, table, aggregateType, columnName, local, relationName);
		}

		::System::Void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_BIND_OFFSET))(this, table, list);
		}

		static ::System::Void Bind_1(::System::Data::DataRelation* relation, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list)
		{
			return ((::System::Void(*)(::System::Data::DataRelation*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_BIND_1_OFFSET))(relation, list);
		}

		::System::Object* Eval()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_EVAL_OFFSET))(this);
		}

		::System::Object* Eval_1(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_EVAL_1_OFFSET))(this, row, version);
		}

		::System::Object* Eval_2(::Il2CppArray<::System::Int32>* records)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_EVAL_2_OFFSET))(this, records);
		}

		::System::Boolean IsConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_ISCONSTANT_OFFSET))(this);
		}

		::System::Boolean IsTableConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_ISTABLECONSTANT_OFFSET))(this);
		}

		::System::Boolean HasLocalAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_HASLOCALAGGREGATE_OFFSET))(this);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_HASREMOTEAGGREGATE_OFFSET))(this);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* column)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_DEPENDSON_OFFSET))(this, column);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_OPTIMIZE_OFFSET))(this);
		}
	};
}
