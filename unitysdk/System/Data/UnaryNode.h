#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/ExpressionNode.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_UNARYNODE_BIND_OFFSET UNITYSDK_OFFSET(0x1B503A90)
#define SYSTEM_DATA_UNARYNODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x1B504360)
#define SYSTEM_DATA_UNARYNODE_EVALUNARYOP_OFFSET UNITYSDK_OFFSET(0x1B503B50)
#define SYSTEM_DATA_UNARYNODE_EVAL_1_OFFSET UNITYSDK_OFFSET(0x1B503B10)
#define SYSTEM_DATA_UNARYNODE_EVAL_2_OFFSET UNITYSDK_OFFSET(0x1B504270)
#define SYSTEM_DATA_UNARYNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x1B503AC0)
#define SYSTEM_DATA_UNARYNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1B504300)
#define SYSTEM_DATA_UNARYNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1B504330)
#define SYSTEM_DATA_UNARYNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x1B5042A0)
#define SYSTEM_DATA_UNARYNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x1B5042D0)
#define SYSTEM_DATA_UNARYNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1B504390)
#define SYSTEM_DATA_UNARYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B501F10)

namespace System::Data
{
	inline static constexpr unsigned int UnaryNode_TypeDefinitionIndex = 37034;

	class UnaryNode : public ::System::Data::ExpressionNode
	{
	public:
		::System::Data::ExpressionNode* _right; // 0x18
		::System::Int32 _op; // 0x20

		::System::Void _ctor(::System::Data::DataTable* table, ::System::Int32 op, ::System::Data::ExpressionNode* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Int32, ::System::Data::ExpressionNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE__CTOR_OFFSET))(this, table, op, right);
		}

		::System::Void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_BIND_OFFSET))(this, table, list);
		}

		::System::Object* Eval()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_EVAL_OFFSET))(this);
		}

		::System::Object* Eval_1(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_EVAL_1_OFFSET))(this, row, version);
		}

		::System::Object* Eval_2(::Il2CppArray<::System::Int32>* recordNos)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_EVAL_2_OFFSET))(this, recordNos);
		}

		::System::Object* EvalUnaryOp(::System::Int32 op, ::System::Object* vl)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_EVALUNARYOP_OFFSET))(this, op, vl);
		}

		::System::Boolean IsConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_ISCONSTANT_OFFSET))(this);
		}

		::System::Boolean IsTableConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_ISTABLECONSTANT_OFFSET))(this);
		}

		::System::Boolean HasLocalAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_HASLOCALAGGREGATE_OFFSET))(this);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_HASREMOTEAGGREGATE_OFFSET))(this);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* column)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_DEPENDSON_OFFSET))(this, column);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_OPTIMIZE_OFFSET))(this);
		}
	};
}
