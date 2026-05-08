#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/ExpressionNode.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_ZEROOPNODE_BIND_OFFSET UNITYSDK_OFFSET(0x1B504670)
#define SYSTEM_DATA_ZEROOPNODE_EVAL_1_OFFSET UNITYSDK_OFFSET(0x1B504720)
#define SYSTEM_DATA_ZEROOPNODE_EVAL_2_OFFSET UNITYSDK_OFFSET(0x1B504730)
#define SYSTEM_DATA_ZEROOPNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x1B504680)
#define SYSTEM_DATA_ZEROOPNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1B504760)
#define SYSTEM_DATA_ZEROOPNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1B504770)
#define SYSTEM_DATA_ZEROOPNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x1B504740)
#define SYSTEM_DATA_ZEROOPNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x1B504750)
#define SYSTEM_DATA_ZEROOPNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1B504780)
#define SYSTEM_DATA_ZEROOPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B501F40)

namespace System::Data
{
	inline static constexpr unsigned int ZeroOpNode_TypeDefinitionIndex = 37035;

	class ZeroOpNode : public ::System::Data::ExpressionNode
	{
	public:
		::System::Int32 _op; // 0x18

		::System::Void _ctor(::System::Int32 op)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE__CTOR_OFFSET))(this, op);
		}

		::System::Void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_BIND_OFFSET))(this, table, list);
		}

		::System::Object* Eval()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_EVAL_OFFSET))(this);
		}

		::System::Object* Eval_1(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_EVAL_1_OFFSET))(this, row, version);
		}

		::System::Object* Eval_2(::Il2CppArray<::System::Int32>* recordNos)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_EVAL_2_OFFSET))(this, recordNos);
		}

		::System::Boolean IsConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_ISCONSTANT_OFFSET))(this);
		}

		::System::Boolean IsTableConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_ISTABLECONSTANT_OFFSET))(this);
		}

		::System::Boolean HasLocalAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_HASLOCALAGGREGATE_OFFSET))(this);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_HASREMOTEAGGREGATE_OFFSET))(this);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_OPTIMIZE_OFFSET))(this);
		}
	};
}
