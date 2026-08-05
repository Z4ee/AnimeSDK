#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/ExpressionNode.h"
#include "unitysdk/System/Data/FunctionId.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }
namespace System::Data { class Function; }

#define SYSTEM_DATA_FUNCTIONNODE_ADDARGUMENT_OFFSET UNITYSDK_OFFSET(0x1F2FC0B0)
#define SYSTEM_DATA_FUNCTIONNODE_BIND_OFFSET UNITYSDK_OFFSET(0x1F2FC300)
#define SYSTEM_DATA_FUNCTIONNODE_CHECK_OFFSET UNITYSDK_OFFSET(0x1F2FC6E0)
#define SYSTEM_DATA_FUNCTIONNODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x1F2FFAA0)
#define SYSTEM_DATA_FUNCTIONNODE_EVALFUNCTION_OFFSET UNITYSDK_OFFSET(0x1F2FD9F0)
#define SYSTEM_DATA_FUNCTIONNODE_EVAL_1_OFFSET UNITYSDK_OFFSET(0x1F2FC9E0)
#define SYSTEM_DATA_FUNCTIONNODE_EVAL_2_OFFSET UNITYSDK_OFFSET(0x1F2FF840)
#define SYSTEM_DATA_FUNCTIONNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x1F2FC9D0)
#define SYSTEM_DATA_FUNCTIONNODE_GETDATATYPE_OFFSET UNITYSDK_OFFSET(0x1F2FD7D0)
#define SYSTEM_DATA_FUNCTIONNODE_GET_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x1F2FFE20)
#define SYSTEM_DATA_FUNCTIONNODE_GET_ISAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1F2FFED0)
#define SYSTEM_DATA_FUNCTIONNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1F2FF9A0)
#define SYSTEM_DATA_FUNCTIONNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1F2FFA20)
#define SYSTEM_DATA_FUNCTIONNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x1F2FF890)
#define SYSTEM_DATA_FUNCTIONNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x1F2FF920)
#define SYSTEM_DATA_FUNCTIONNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1F2FFB20)
#define SYSTEM_DATA_FUNCTIONNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F300280)
#define SYSTEM_DATA_FUNCTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2FBF60)

namespace System::Data
{
	inline static constexpr unsigned int FunctionNode_TypeDefinitionIndex = 39305;

	class FunctionNode : public ::System::Data::ExpressionNode
	{
	public:
		static ::Il2CppArray<::System::Data::Function*>** StaticGet_s_funcs()
		{
			return (::Il2CppArray<::System::Data::Function*>**)Il2CppClass::FromTypeDefinitionIndex(FunctionNode_TypeDefinitionIndex)->GetStaticField(0x2ABC0);
		}
		::System::String* _name; // 0x18
		::Il2CppArray<::System::Data::ExpressionNode*>* _arguments; // 0x20
		::System::Int32 _argumentCount; // 0x28
		::System::Int32 _info; // 0x2C

		::System::Void _ctor(::System::Data::DataTable* table, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE__CTOR_OFFSET))(this, table, name);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE__CCTOR_OFFSET))();
		}

		::System::Void AddArgument(::System::Data::ExpressionNode* argument)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::ExpressionNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_ADDARGUMENT_OFFSET))(this, argument);
		}

		::System::Void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_BIND_OFFSET))(this, table, list);
		}

		::System::Object* Eval()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_EVAL_OFFSET))(this);
		}

		::System::Object* Eval_1(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_EVAL_1_OFFSET))(this, row, version);
		}

		::System::Object* Eval_2(::Il2CppArray<::System::Int32>* recordNos)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_EVAL_2_OFFSET))(this, recordNos);
		}

		::System::Boolean IsConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_ISCONSTANT_OFFSET))(this);
		}

		::System::Boolean IsTableConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_ISTABLECONSTANT_OFFSET))(this);
		}

		::System::Boolean HasLocalAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_HASLOCALAGGREGATE_OFFSET))(this);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_HASREMOTEAGGREGATE_OFFSET))(this);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* column)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_DEPENDSON_OFFSET))(this, column);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_OPTIMIZE_OFFSET))(this);
		}

		::System::Type* GetDataType(::System::Data::ExpressionNode* node)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Data::ExpressionNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_GETDATATYPE_OFFSET))(this, node);
		}

		::System::Object* EvalFunction(::System::Data::FunctionId id, ::Il2CppArray<::System::Object*>* argumentValues, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::FunctionId, ::Il2CppArray<::System::Object*>*, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_EVALFUNCTION_OFFSET))(this, id, argumentValues, row, version);
		}

		::System::Data::FunctionId get_Aggregate()
		{
			return ((::System::Data::FunctionId(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_GET_AGGREGATE_OFFSET))(this);
		}

		::System::Boolean get_IsAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_GET_ISAGGREGATE_OFFSET))(this);
		}

		::System::Void Check()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_CHECK_OFFSET))(this);
		}
	};
}
