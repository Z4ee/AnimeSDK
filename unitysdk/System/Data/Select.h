#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/DataViewRowState.h"
#include "unitysdk/System/Data/IndexField.h"
#include "unitysdk/System/Data/Range.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Data { class BinaryNode; }
namespace System::Data { class DataExpression; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }
namespace System::Data { class ExpressionNode; }
namespace System::Data { class Index; }
namespace System::Data { class Select_ColumnInfo; }

#define SYSTEM_DATA_SELECT_ACCEPTRECORD_OFFSET UNITYSDK_OFFSET(0x1EF193F0)
#define SYSTEM_DATA_SELECT_ANALYZEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1EF16E20)
#define SYSTEM_DATA_SELECT_BUILDLINEAREXPRESSION_OFFSET UNITYSDK_OFFSET(0x1EF183E0)
#define SYSTEM_DATA_SELECT_COMPARECLOSESTCANDIDATEINDEXDESC_OFFSET UNITYSDK_OFFSET(0x1EF17580)
#define SYSTEM_DATA_SELECT_COMPARERECORDS_OFFSET UNITYSDK_OFFSET(0x1EF19F80)
#define SYSTEM_DATA_SELECT_COMPARESORTINDEXDESC_OFFSET UNITYSDK_OFFSET(0x1EF17200)
#define SYSTEM_DATA_SELECT_CREATEINDEX_OFFSET UNITYSDK_OFFSET(0x1EF17AB0)
#define SYSTEM_DATA_SELECT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1EF19C70)
#define SYSTEM_DATA_SELECT_EVAL_OFFSET UNITYSDK_OFFSET(0x1EF195D0)
#define SYSTEM_DATA_SELECT_FINDCLOSESTCANDIDATEINDEX_OFFSET UNITYSDK_OFFSET(0x1EF17650)
#define SYSTEM_DATA_SELECT_FINDFIRSTMATCHINGRECORD_OFFSET UNITYSDK_OFFSET(0x1EF19E00)
#define SYSTEM_DATA_SELECT_FINDLASTMATCHINGRECORD_OFFSET UNITYSDK_OFFSET(0x1EF19EC0)
#define SYSTEM_DATA_SELECT_FINDSORTINDEX_OFFSET UNITYSDK_OFFSET(0x1EF17300)
#define SYSTEM_DATA_SELECT_GETBINARYFILTEREDRECORDS_OFFSET UNITYSDK_OFFSET(0x1EF18B80)
#define SYSTEM_DATA_SELECT_GETLINEARFILTEREDRECORDS_OFFSET UNITYSDK_OFFSET(0x1EF18DC0)
#define SYSTEM_DATA_SELECT_GETLINEARFILTEREDROWS_OFFSET UNITYSDK_OFFSET(0x1EF18910)
#define SYSTEM_DATA_SELECT_GETROWS_OFFSET UNITYSDK_OFFSET(0x1EF19290)
#define SYSTEM_DATA_SELECT_INITCANDIDATECOLUMNS_OFFSET UNITYSDK_OFFSET(0x1EF17940)
#define SYSTEM_DATA_SELECT_ISOPERATORIN_OFFSET UNITYSDK_OFFSET(0x1EF18350)
#define SYSTEM_DATA_SELECT_ISSUPPORTEDOPERATOR_OFFSET UNITYSDK_OFFSET(0x1EF16E00)
#define SYSTEM_DATA_SELECT_SELECTROWS_OFFSET UNITYSDK_OFFSET(0x1EF185B0)
#define SYSTEM_DATA_SELECT_SORT_OFFSET UNITYSDK_OFFSET(0x1EF190B0)
#define SYSTEM_DATA_SELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF16D50)

namespace System::Data
{
	inline static constexpr unsigned int Select_TypeDefinitionIndex = 39336;

	class Select : public ::System::Object
	{
	public:
		::System::Data::ExpressionNode* _linearExpression; // 0x10
		::Il2CppArray<::System::Data::IndexField>* _indexFields; // 0x18
		::System::Data::DataExpression* _rowFilter; // 0x20
		::Il2CppArray<::System::Int32>* _records; // 0x28
		::System::Data::DataTable* _table; // 0x30
		::System::Data::Index* _index; // 0x38
		::Il2CppArray<::System::Data::Select_ColumnInfo*>* _candidateColumns; // 0x40
		::System::Data::ExpressionNode* _expression; // 0x48
		::System::Data::DataViewRowState _recordStates; // 0x50
		::System::Int32 _nCandidates; // 0x54
		::System::Boolean _candidatesForBinarySearch; // 0x58
		::System::Int32 _matchedCandidates; // 0x5C
		::System::Int32 _recordCount; // 0x60

		::System::Void _ctor(::System::Data::DataTable* table, ::System::String* filterExpression, ::System::String* sort, ::System::Data::DataViewRowState recordStates)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::String*, ::System::String*, ::System::Data::DataViewRowState))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT__CTOR_OFFSET))(this, table, filterExpression, sort, recordStates);
		}

		::System::Boolean IsSupportedOperator(::System::Int32 op)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_ISSUPPORTEDOPERATOR_OFFSET))(this, op);
		}

		::System::Void AnalyzeExpression(::System::Data::BinaryNode* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::BinaryNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_ANALYZEEXPRESSION_OFFSET))(this, expr);
		}

		::System::Boolean CompareSortIndexDesc(::Il2CppArray<::System::Data::IndexField>* fields)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Data::IndexField>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_COMPARESORTINDEXDESC_OFFSET))(this, fields);
		}

		::System::Boolean FindSortIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_FINDSORTINDEX_OFFSET))(this);
		}

		::System::Int32 CompareClosestCandidateIndexDesc(::Il2CppArray<::System::Data::IndexField>* fields)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Data::IndexField>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_COMPARECLOSESTCANDIDATEINDEXDESC_OFFSET))(this, fields);
		}

		::System::Boolean FindClosestCandidateIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_FINDCLOSESTCANDIDATEINDEX_OFFSET))(this);
		}

		::System::Void InitCandidateColumns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_INITCANDIDATECOLUMNS_OFFSET))(this);
		}

		::System::Void CreateIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_CREATEINDEX_OFFSET))(this);
		}

		::System::Boolean IsOperatorIn(::System::Data::ExpressionNode* enode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::ExpressionNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_ISOPERATORIN_OFFSET))(this, enode);
		}

		::System::Void BuildLinearExpression()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_BUILDLINEAREXPRESSION_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataRow*>* SelectRows()
		{
			return ((::Il2CppArray<::System::Data::DataRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_SELECTROWS_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataRow*>* GetRows()
		{
			return ((::Il2CppArray<::System::Data::DataRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_GETROWS_OFFSET))(this);
		}

		::System::Boolean AcceptRecord(::System::Int32 record)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_ACCEPTRECORD_OFFSET))(this, record);
		}

		::System::Int32 Eval(::System::Data::BinaryNode* expr, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::BinaryNode*, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_EVAL_OFFSET))(this, expr, row, version);
		}

		::System::Int32 Evaluate(::System::Int32 record)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_EVALUATE_OFFSET))(this, record);
		}

		::System::Int32 FindFirstMatchingRecord()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_FINDFIRSTMATCHINGRECORD_OFFSET))(this);
		}

		::System::Int32 FindLastMatchingRecord(::System::Int32 lo)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_FINDLASTMATCHINGRECORD_OFFSET))(this, lo);
		}

		::System::Data::Range GetBinaryFilteredRecords()
		{
			return ((::System::Data::Range(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_GETBINARYFILTEREDRECORDS_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* GetLinearFilteredRecords(::System::Data::Range range)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Data::Range))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_GETLINEARFILTEREDRECORDS_OFFSET))(this, range);
		}

		::Il2CppArray<::System::Data::DataRow*>* GetLinearFilteredRows(::System::Data::Range range)
		{
			return ((::Il2CppArray<::System::Data::DataRow*>*(*)(::PVOID, ::System::Data::Range))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_GETLINEARFILTEREDROWS_OFFSET))(this, range);
		}

		::System::Int32 CompareRecords(::System::Int32 record1, ::System::Int32 record2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_COMPARERECORDS_OFFSET))(this, record1, record2);
		}

		::System::Void Sort(::System::Int32 left, ::System::Int32 right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_SORT_OFFSET))(this, left, right);
		}
	};
}
