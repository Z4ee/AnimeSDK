#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/BinaryNode_DataTypePrecedence.h"
#include "unitysdk/System/Data/Common/StorageType.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/ExpressionNode.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }
namespace System::Globalization { class CompareInfo; }

#define SYSTEM_DATA_BINARYNODE_BINARYCOMPARE_1_OFFSET UNITYSDK_OFFSET(0x1B313870)
#define SYSTEM_DATA_BINARYNODE_BINARYCOMPARE_OFFSET UNITYSDK_OFFSET(0x1B313850)
#define SYSTEM_DATA_BINARYNODE_BIND_OFFSET UNITYSDK_OFFSET(0x1B30C440)
#define SYSTEM_DATA_BINARYNODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x1B3134B0)
#define SYSTEM_DATA_BINARYNODE_EVALBINARYOP_OFFSET UNITYSDK_OFFSET(0x1B30C500)
#define SYSTEM_DATA_BINARYNODE_EVAL_1_OFFSET UNITYSDK_OFFSET(0x1B30C4C0)
#define SYSTEM_DATA_BINARYNODE_EVAL_2_OFFSET UNITYSDK_OFFSET(0x1B313330)
#define SYSTEM_DATA_BINARYNODE_EVAL_3_OFFSET UNITYSDK_OFFSET(0x1B313800)
#define SYSTEM_DATA_BINARYNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x1B30C4A0)
#define SYSTEM_DATA_BINARYNODE_GETPRECEDENCETYPE_OFFSET UNITYSDK_OFFSET(0x1B315AF0)
#define SYSTEM_DATA_BINARYNODE_GETPRECEDENCE_OFFSET UNITYSDK_OFFSET(0x1B315AD0)
#define SYSTEM_DATA_BINARYNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1B313410)
#define SYSTEM_DATA_BINARYNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1B313460)
#define SYSTEM_DATA_BINARYNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x1B313370)
#define SYSTEM_DATA_BINARYNODE_ISMIXEDSQL_OFFSET UNITYSDK_OFFSET(0x1B315B70)
#define SYSTEM_DATA_BINARYNODE_ISMIXED_OFFSET UNITYSDK_OFFSET(0x1B315B10)
#define SYSTEM_DATA_BINARYNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x1B3133C0)
#define SYSTEM_DATA_BINARYNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1B313510)
#define SYSTEM_DATA_BINARYNODE_RESULTSQLTYPE_OFFSET UNITYSDK_OFFSET(0x1B314D80)
#define SYSTEM_DATA_BINARYNODE_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1B315550)
#define SYSTEM_DATA_BINARYNODE_SETTYPEMISMATCHERROR_OFFSET UNITYSDK_OFFSET(0x1B3137B0)
#define SYSTEM_DATA_BINARYNODE_SQLRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1B315BD0)
#define SYSTEM_DATA_BINARYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30C420)

namespace System::Data
{
	inline static constexpr unsigned int BinaryNode_TypeDefinitionIndex = 37011;

	class BinaryNode : public ::System::Data::ExpressionNode
	{
	public:
		::System::Data::ExpressionNode* _left; // 0x18
		::System::Data::ExpressionNode* _right; // 0x20
		::System::Int32 _op; // 0x28

		::System::Void _ctor(::System::Data::DataTable* table, ::System::Int32 op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Int32, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE__CTOR_OFFSET))(this, table, op, left, right);
		}

		::System::Void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_BIND_OFFSET))(this, table, list);
		}

		::System::Object* Eval()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_EVAL_OFFSET))(this);
		}

		::System::Object* Eval_1(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_EVAL_1_OFFSET))(this, row, version);
		}

		::System::Object* Eval_2(::Il2CppArray<::System::Int32>* recordNos)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_EVAL_2_OFFSET))(this, recordNos);
		}

		::System::Boolean IsConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_ISCONSTANT_OFFSET))(this);
		}

		::System::Boolean IsTableConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_ISTABLECONSTANT_OFFSET))(this);
		}

		::System::Boolean HasLocalAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_HASLOCALAGGREGATE_OFFSET))(this);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_HASREMOTEAGGREGATE_OFFSET))(this);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* column)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_DEPENDSON_OFFSET))(this, column);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_OPTIMIZE_OFFSET))(this);
		}

		::System::Void SetTypeMismatchError(::System::Int32 op, ::System::Type* left, ::System::Type* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_SETTYPEMISMATCHERROR_OFFSET))(this, op, left, right);
		}

		static ::System::Object* Eval_3(::System::Data::ExpressionNode* expr, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version, ::Il2CppArray<::System::Int32>* recordNos)
		{
			return ((::System::Object*(*)(::System::Data::ExpressionNode*, ::System::Data::DataRow*, ::System::Data::DataRowVersion, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_EVAL_3_OFFSET))(expr, row, version, recordNos);
		}

		::System::Int32 BinaryCompare(::System::Object* vLeft, ::System::Object* vRight, ::System::Data::Common::StorageType resultType, ::System::Int32 op)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Data::Common::StorageType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_BINARYCOMPARE_OFFSET))(this, vLeft, vRight, resultType, op);
		}

		::System::Int32 BinaryCompare_1(::System::Object* vLeft, ::System::Object* vRight, ::System::Data::Common::StorageType resultType, ::System::Int32 op, ::System::Globalization::CompareInfo* comparer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Data::Common::StorageType, ::System::Int32, ::System::Globalization::CompareInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_BINARYCOMPARE_1_OFFSET))(this, vLeft, vRight, resultType, op, comparer);
		}

		::System::Object* EvalBinaryOp(::System::Int32 op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version, ::Il2CppArray<::System::Int32>* recordNos)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*, ::System::Data::DataRow*, ::System::Data::DataRowVersion, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_EVALBINARYOP_OFFSET))(this, op, left, right, row, version, recordNos);
		}

		::System::Data::BinaryNode_DataTypePrecedence GetPrecedence(::System::Data::Common::StorageType storageType)
		{
			return ((::System::Data::BinaryNode_DataTypePrecedence(*)(::PVOID, ::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_GETPRECEDENCE_OFFSET))(this, storageType);
		}

		static ::System::Data::Common::StorageType GetPrecedenceType(::System::Data::BinaryNode_DataTypePrecedence code)
		{
			return ((::System::Data::Common::StorageType(*)(::System::Data::BinaryNode_DataTypePrecedence))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_GETPRECEDENCETYPE_OFFSET))(code);
		}

		::System::Boolean IsMixed(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::Common::StorageType, ::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_ISMIXED_OFFSET))(this, left, right);
		}

		::System::Boolean IsMixedSql(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::Common::StorageType, ::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_ISMIXEDSQL_OFFSET))(this, left, right);
		}

		::System::Data::Common::StorageType ResultType(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right, ::System::Boolean lc, ::System::Boolean rc, ::System::Int32 op)
		{
			return ((::System::Data::Common::StorageType(*)(::PVOID, ::System::Data::Common::StorageType, ::System::Data::Common::StorageType, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_RESULTTYPE_OFFSET))(this, left, right, lc, rc, op);
		}

		::System::Data::Common::StorageType ResultSqlType(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right, ::System::Boolean lc, ::System::Boolean rc, ::System::Int32 op)
		{
			return ((::System::Data::Common::StorageType(*)(::PVOID, ::System::Data::Common::StorageType, ::System::Data::Common::StorageType, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_RESULTSQLTYPE_OFFSET))(this, left, right, lc, rc, op);
		}

		::System::Int32 SqlResultType(::System::Int32 typeCode)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_SQLRESULTTYPE_OFFSET))(this, typeCode);
		}
	};
}
