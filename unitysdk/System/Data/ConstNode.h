#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/ExpressionNode.h"
#include "unitysdk/System/Data/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_CONSTNODE_BIND_OFFSET UNITYSDK_OFFSET(0x1CD34DB0)
#define SYSTEM_DATA_CONSTNODE_EVAL_1_OFFSET UNITYSDK_OFFSET(0x1CD34DD0)
#define SYSTEM_DATA_CONSTNODE_EVAL_2_OFFSET UNITYSDK_OFFSET(0x1CD34DE0)
#define SYSTEM_DATA_CONSTNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x1CD34DC0)
#define SYSTEM_DATA_CONSTNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1CD34E10)
#define SYSTEM_DATA_CONSTNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1CD34E20)
#define SYSTEM_DATA_CONSTNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x1CD34DF0)
#define SYSTEM_DATA_CONSTNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x1CD34E00)
#define SYSTEM_DATA_CONSTNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1CD34E30)
#define SYSTEM_DATA_CONSTNODE_SMALLESTDECIMAL_OFFSET UNITYSDK_OFFSET(0x1CD34960)
#define SYSTEM_DATA_CONSTNODE_SMALLESTNUMERIC_OFFSET UNITYSDK_OFFSET(0x1CD343F0)
#define SYSTEM_DATA_CONSTNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD34110)
#define SYSTEM_DATA_CONSTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD340F0)

namespace System::Data
{
	inline static constexpr unsigned int ConstNode_TypeDefinitionIndex = 38631;

	class ConstNode : public ::System::Data::ExpressionNode
	{
	public:
		::System::Object* _val; // 0x18

		::System::Void _ctor(::System::Data::DataTable* table, ::System::Data::ValueType type, ::System::Object* constant)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Data::ValueType, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE__CTOR_OFFSET))(this, table, type, constant);
		}

		::System::Void _ctor_1(::System::Data::DataTable* table, ::System::Data::ValueType type, ::System::Object* constant, ::System::Boolean fParseQuotes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Data::ValueType, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE__CTOR_1_OFFSET))(this, table, type, constant, fParseQuotes);
		}

		::System::Void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_BIND_OFFSET))(this, table, list);
		}

		::System::Object* Eval()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_EVAL_OFFSET))(this);
		}

		::System::Object* Eval_1(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_EVAL_1_OFFSET))(this, row, version);
		}

		::System::Object* Eval_2(::Il2CppArray<::System::Int32>* recordNos)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_EVAL_2_OFFSET))(this, recordNos);
		}

		::System::Boolean IsConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_ISCONSTANT_OFFSET))(this);
		}

		::System::Boolean IsTableConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_ISTABLECONSTANT_OFFSET))(this);
		}

		::System::Boolean HasLocalAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_HASLOCALAGGREGATE_OFFSET))(this);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_HASREMOTEAGGREGATE_OFFSET))(this);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_OPTIMIZE_OFFSET))(this);
		}

		::System::Object* SmallestDecimal(::System::Object* constant)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_SMALLESTDECIMAL_OFFSET))(this, constant);
		}

		::System::Object* SmallestNumeric(::System::Object* constant)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_SMALLESTNUMERIC_OFFSET))(this, constant);
		}
	};
}
